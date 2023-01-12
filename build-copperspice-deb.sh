#!/bin/bash
#
# Script to build a debian package for CopperSpice
#
set -e

if [ ! -f "/etc/debian_version" ]; then
   if [ ! "$(grep -i 'ID_LIKE=debian' /etc/*release)" ]; then
      echo "This script can only be run on a Debian based distribution"
      exit 1
   fi
fi

echo "MUST BE RUN FROM ROOT OF PROJECT DIRECTORY TREE"
echo ""
echo "MUST have fakeroot, hashdeep, and dpkg-deb installed!"
echo ""
echo "This script ASSUMES it can create or use copperspice_debian_build and copperspice_debian_release"
echo "directories one level up from where this script is being run. If they"
echo "exist they will be deleted and recreated."
echo ""
echo "Script also ASSUMES you are running from the root of the Git directory"
echo "where all source is in a directory named src at the same level as this file."
echo ""
echo "You must have ninja, cmake, and a valid build environment. CopperSpice will be built"
echo "from source and installed in copperspice_debian_release. We will then create a"
echo "DEBIAN directory to assemble all files needed for creation of a .deb."
echo ""
echo ""


#  Step 1 : Establish fresh clean directories
#
echo "*** Establishing fresh directories"
SCRIPT_DIR="$PWD"
BUILD_DIR="$SCRIPT_DIR/../copperspice_debian_build"
RELEASE_DIR="$SCRIPT_DIR/../copperspice_debian_release"
DEBIAN_DIR="$SCRIPT_DIR/../copperspice_debian"
DEBIAN_WORK_DIR="$SCRIPT_DIR/../copperspice_debian_work"

echo "SCRIPT_DIR  $SCRIPT_DIR"
echo "BUILD_DIR   $BUILD_DIR"
echo "RELEASE_DIR $RELEASE_DIR"
echo "DEBIAN_DIR  $DEBIAN_DIR"

function build_from_source()
{
    #  nuke the directories we will use if they already exist
    #
    if [ -d "$BUILD_DIR" ]; then
      rm -rf "$BUILD_DIR"
    fi

    if [ -d "$RELEASE_DIR" ]; then
      rm -rf "$RELEASE_DIR"
    fi

    if [ -d "$DEBIAN_DIR" ]; then
      rm -rf "$DEBIAN_DIR"
    fi

    #  create the directories we will use so they are fresh and clean
    #
    mkdir -p "$BUILD_DIR"
    mkdir -p "$RELEASE_DIR"
    mkdir -p "$DEBIAN_DIR"/DEBIAN
    mkdir -p "$DEBIAN_DIR"/usr/include/copperspice
    mkdir -p "$DEBIAN_DIR"/usr/lib/copperspice/bin
    mkdir -p "$DEBIAN_DIR"/usr/lib/cmake/CopperSpice
    mkdir -p "$DEBIAN_DIR"/usr/lib/pkgconfig
    mkdir -p "$DEBIAN_DIR"/usr/share/doc/CopperSpice/license

    #  Step 2 : Prepare build directory
    #
    echo "*** Prepping build directory"
    cd "$BUILD_DIR"

    cmake -G "Ninja" -DCMAKE_BUILD_TYPE=Release \
        -DCMAKE_INSTALL_PREFIX="$RELEASE_DIR" \
        "$SCRIPT_DIR"

    #  Step 4: Actually build CopperSpice
    #
    echo "*** Building CopperSpice"
    ninja install

}

function dev_deb()
{

    #  Step 5 : Move files to the debian tree
    #
    echo "*** Copying files to Debian tree"
    # deb_build.etc/preinst deb_build.etc/postinst deb_build.etc/prerm
    cp -f "$BUILD_DIR"/deb_build.etc/control "$BUILD_DIR"/deb_build.etc/postrm "$BUILD_DIR"/deb_build.etc/postinst "$DEBIAN_DIR"/DEBIAN
    #
    # Files in this directory need to be marked executable.
    #
    chmod 0664 "$DEBIAN_DIR"/DEBIAN/*
    chmod +x "$DEBIAN_DIR"/DEBIAN/postrm
    chmod +x "$DEBIAN_DIR"/DEBIAN/postinst

    #  Note: If you want changelog to actually have anything in it, you need to create one
    #        I put a placeholder in the project for now because I didn't want to
    #        saddle this build script with git-buildpackage dependencies
    #
    cp "$SCRIPT_DIR"/changelog "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog.Debian
    cp -Prv "$SCRIPT_DIR"/license/* "$DEBIAN_DIR"/usr/share/doc/CopperSpice/license/

    cp -Prv "$RELEASE_DIR"/bin/* "$DEBIAN_DIR"/usr/lib/copperspice/bin/
    cp -Prv "$RELEASE_DIR"/include/* "$DEBIAN_DIR"/usr/include/copperspice/
    cp -Prv "$RELEASE_DIR"/lib/pkgconfig/* "$DEBIAN_DIR"/usr/lib/pkgconfig
    cp -Prv "$RELEASE_DIR"/lib/cmake/* "$DEBIAN_DIR"/usr/lib/cmake/CopperSpice/
    cp -Prv "$RELEASE_DIR"/lib/*.so "$DEBIAN_DIR"/usr/lib/copperspice/

    chmod 0664 "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog*

    gzip --best --force "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog*

    #  Step 6 : generate md5sum
    #
    echo "Generating md5sums"
    cd "$DEBIAN_DIR"
    md5deep -r  usr/share/doc/CopperSpice/* 2>/dev/null >DEBIAN/md5sums
    # don't currently have any pre files
    # DEBIAN/pre*
    #
    chmod go-w DEBIAN/md5sums DEBIAN/post* usr usr/share usr/share/doc usr/share/doc/CopperSpice

    # Step 7 : build .deb
    #
    cd ..
    D_DIR="$PWD"
    echo "Building .deb IN $D_DIR"
    fakeroot dpkg-deb -Zgzip --build "$DEBIAN_DIR"

    # Step 8 : rename .deb
    #          file will be named copperspice_debian.deb and should just be copperspice-version-architecture-dev.deb
    #
    D_VERSION=$(grep -i "Version:" "$DEBIAN_DIR"/DEBIAN/control | cut -d' ' -f2)
    D_ARCH=$(grep -i "Architecture:" "$DEBIAN_DIR"/DEBIAN/control | cut -d' ' -f2)
    DEB_NAME="copperspice-$D_VERSION-$D_ARCH-dev.deb"
    echo "look for:  $DEB_NAME"

    mv copperspice_debian.deb "$DEB_NAME"

}

function runtime_deb()
{

    #  Step 5 : Move files to the debian tree
    #
    echo "*** Copying files to Debian tree"
    # deb_build.etc/preinst deb_build.etc/postinst deb_build.etc/prerm
    cp -f "$BUILD_DIR"/deb_build.etc/control "$BUILD_DIR"/deb_build.etc/postrm "$BUILD_DIR"/deb_build.etc/postinst "$DEBIAN_DIR"/DEBIAN
    #
    # Files in this directory need to be marked executable.
    #
    chmod 0664 "$DEBIAN_DIR"/DEBIAN/*
    chmod +x "$DEBIAN_DIR"/DEBIAN/postrm
    chmod +x "$DEBIAN_DIR"/DEBIAN/postinst

    #  Note: If you want changelog to actually have anything in it, you need to create one
    #        I put a placeholder in the project for now because I didn't want to
    #        saddle this build script with git-buildpackage dependencies
    #
    cp "$SCRIPT_DIR"/changelog "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog.Debian
    cp -Prv "$SCRIPT_DIR"/license/* "$DEBIAN_DIR"/usr/share/doc/CopperSpice/license/

    cp -Prv "$RELEASE_DIR"/bin/* "$DEBIAN_DIR"/usr/lib/copperspice/bin/
    cp -Prv "$RELEASE_DIR"/lib/*.so "$DEBIAN_DIR"/usr/lib/copperspice/

    chmod 0664 "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog*

    gzip --best --force "$DEBIAN_DIR"/usr/share/doc/CopperSpice/changelog*

    #  Step 6 : generate md5sum
    #
    echo "Generating md5sums"
    cd "$DEBIAN_DIR"
    md5deep -r  usr/share/doc/CopperSpice/* 2>/dev/null >DEBIAN/md5sums
    # don't currently have any pre files
    # DEBIAN/pre*
    #
    chmod go-w DEBIAN/md5sums DEBIAN/post* usr usr/share usr/share/doc usr/share/doc/CopperSpice

    # Step 7 : build .deb
    #
    cd ..
    D_DIR="$PWD"
    echo "Building .deb IN $D_DIR"
    fakeroot dpkg-deb -Zgzip --build "$DEBIAN_DIR"

    # Step 8 : rename .deb
    #          file will be named copperspice_debian.deb and should just be copperspice-version-architecture.deb
    #
    D_VERSION=$(grep -i "Version:" "$DEBIAN_DIR"/DEBIAN/control | cut -d' ' -f2)
    D_ARCH=$(grep -i "Architecture:" "$DEBIAN_DIR"/DEBIAN/control | cut -d' ' -f2)
    DEB_NAME="copperspice-$D_VERSION-$D_ARCH.deb"
    echo "look for:  $DEB_NAME"

    mv copperspice_debian.deb "$DEB_NAME"

}


#   See if user wants to build everything from source through package
#   build source only, or build package only from whatever got built already
#
BUILD_ALL="Y"
BUILD_SRC="N"
RUNTIME_PKG="N"
DEV_PKG="N"

SRC_BUILD_OPTION="src"
RUNTIME_OPTION="run"
DEV_OPTION="dev"

for option in "$@"
do
    if [ "${option,,}" = "${SRC_BUILD_OPTION,,}" ]; then
        BUILD_SRC="Y"
        BUILD_ALL="N"
    fi

    if [ "${option,,}" = "${RUNTIME_OPTION,,}" ]; then
        RUNTIME_PKG="Y"
        BUILD_ALL="N"
    fi

    if [ "${option,,}" = "${DEV_OPTION,,}" ]; then
        DEV_PKG="Y"
        BUILD_ALL="N"
    fi

done

if [ "$BUILD_ALL" = "Y" ]; then
    build_from_source
    runtime_deb
    dev_deb
fi

if [ "$BUILD_SRC" = "Y" ]; then
    build_from_source
fi

if [ "$RUNTIME_PKG" = "Y" ]; then
    runtime_deb
fi

if [ "$DEV_PKG" = "Y" ]; then
    dev_deb
fi

set -e

exit 0
