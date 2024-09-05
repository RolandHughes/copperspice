list(APPEND CORE_PUBLIC_INCLUDES
   QAbstractFileEngine
   QAbstractFileEngineHandler
   QAbstractFileEngineIterator
   QBuffer
   QDataStream
   QDebug
   QDir
   QDirIterator
   QFSFileEngine
   QFile
   QFileDevice
   QFileInfo
   QFileInfoList
   QFileInfoListIterator
   QFileSystemWatcher
   QIODevice
   QLockFile
   QNoDebug
   QProcess
   QProcessEnvironment
   QResource
   QSaveFile
   QSettings
   QStandardPaths
   QTemporaryDir
   QTemporaryFile
   QTextStream
   QTextStreamFunction
   QTextStreamManipulator
   QUrl
   QUrlQuery
)

list(APPEND CORE_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qabstractfileengine.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qabstractfileenginehandler.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qabstractfileengineiterator.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qbuffer.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdatastream.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdebug.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdir.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdiriterator.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfile.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfiledevice.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfileinfo.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfileinfolist.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfileinfolistiterator.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qiodevice.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qnodebug.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocessenvironment.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qresource.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsavefile.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsettings.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtemporarydir.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtemporaryfile.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtextstream.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtextstreamfunction.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtextstreammanipulator.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurl.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurlquery.h
)

list(APPEND CORE_PRIVATE_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qabstractfileengine_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdebug_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdatastream_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdataurl_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdir_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfileinfo_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfile_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfiledevice_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qiodevice_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qipaddress_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qnoncontiguousbytedevice_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qresource_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qresource_iterator_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurltlds_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurl_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtldurl_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsavefile_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsettings_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_iterator_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_dnotify_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_fsevents_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_inotify_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_kqueue_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_win_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystementry_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemmetadata_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemiterator_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtemporaryfile_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qwindowspipereader_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qwindowspipewriter_p.h
)

target_sources(Ls-CsCore
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qabstractfileengine.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qbuffer.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdatastream.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdataurl.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtldurl.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdebug.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdir.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qdiriterator.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfile.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfiledevice.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfileinfo.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qiodevice.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qipaddress.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qnoncontiguousbytedevice.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtextstream.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtemporarydir.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qtemporaryfile.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qresource.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qresource_iterator.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurl.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurlidna.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurlrecode.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qurlquery.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsavefile.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qsettings.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_iterator.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystementry.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine.cpp
)

if(CMAKE_SYSTEM_NAME MATCHES "Darwin")
   target_sources(Ls-CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemiterator_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_fsevents.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_kqueue.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qsettings_mac.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/forkfd_qt.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths_mac.mm
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qurl_mac.mm
   )

elseif(CMAKE_SYSTEM_NAME MATCHES "Linux")
   target_sources(Ls-CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_inotify.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_dnotify.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemiterator_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/forkfd_qt.cpp
   )

elseif(CMAKE_SYSTEM_NAME MATCHES "(OpenBSD|FreeBSD|NetBSD)")
   target_sources(Ls-CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_kqueue.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemiterator_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths_unix.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/forkfd_qt.cpp
   )

elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
   target_sources(Ls-CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qlockfile_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qwindowspipereader.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qwindowspipewriter.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemiterator_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qsettings_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qprocess_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfsfileengine_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemengine_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qfilesystemwatcher_win.cpp
      ${CMAKE_CURRENT_SOURCE_DIR}/io/qstandardpaths_win.cpp
   )

endif()
