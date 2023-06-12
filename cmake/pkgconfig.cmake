# ***********************************************************************
#
# Copyright (c) 2012-2023 Barbara Geller
# Copyright (c) 2012-2023 Ansel Sermersheim
#
# This file is part of CopperSpice.
#
# CopperSpice is free software. You can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public License
# version 2.1 as published by the Free Software Foundation.
#
# CopperSpice is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#
# https://www.gnu.org/licenses/
#
# ***********************************************************************

prefix=@CS_INST_PREFIX@
exec_prefix=@CS_INST_PREFIX@
libdir=@CS_INST_LIB@
includedir=@CS_INST_INCLUDE@/@PC_REALNAME@

Name: @PC_NAME@
Description: @PC_NAME@ library
Version: @PACKAGE_VERSION@
Libs: -L${libdir} -l@PC_NAME@@BUILD_ABI@
Cflags: @PC_CFLAGS@ -I@CMAKE_INSTALL_FULL_INCLUDEDIR@ -I${includedir}
Requires: @PC_REQUIRES@
