# Harfbuzz settings
add_definitions(
   -DHAVE_ATEXIT
   -DHB_EXTERN=
   -DHB_NO_UNICODE_FUNCS
   -DHB_NDEBUG
)

if(CMAKE_SYSTEM_NAME MATCHES "Windows")
   add_definitions(
      -DHB_NO_WIN1256
   )
endif()

list(APPEND CORE_PUBLIC_INCLUDES
   QArrayData
   QBitArray
   QBitRef
   QByteArray
   QByteRef
   QCommandLineOption
   QCommandLineParser
   QCryptographicHash
   QEasingCurve
   QElapsedTimer
   QLine
   QLineF
   QMargins
   QMarginsF
   QMessageAuthenticationCode
   QPair
   QPoint
   QPointF
   QRect
   QRectF
   QSize
   QSizeF
   QTextBoundaryFinder
   QTimeLine
   QVarLengthArray
   QVersionNumber
)

list(APPEND CORE_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qalgorithms.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qarraydata.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbitarray.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbitref.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbytearray.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbyteref.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcommandlineoption.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcommandlineparser.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcryptographichash.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qeasingcurve.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qelapsedtimer.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qline.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qlinef.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qmargins.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qmarginsf.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qmessageauthenticationcode.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qpair.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qpoint.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qpointf.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qrect.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qrectf.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qrefcount.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qsize.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qsizef.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qtextboundaryfinder.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qtimeline.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qvarlengtharray.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qversionnumber.h
)

list(APPEND CORE_PRIVATE_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbytedata_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qfreelist_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qharfbuzz_core_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qpodlist_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qringbuffer_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qsimd_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qtools_p.h
)

target_sources(CsCore
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qarraydata.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbitarray.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbytearray.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcryptographichash.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qeasingcurve.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qelapsedtimer.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qfreelist.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qharfbuzz_core.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qline.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qpoint.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qmargins.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qmessageauthenticationcode.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcommandlineoption.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qcommandlineparser.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qrect.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qrefcount.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qsimd.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qsize.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qtextboundaryfinder.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qtimeline.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/tools/qversionnumber.cpp

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/fonts/resource_harfbuzz.cpp
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-aat-layout.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-aat-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-blob.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-buffer-serialize.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-buffer.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-common.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-face.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-font.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-cff1-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-cff2-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-color.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-face.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-font.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-layout.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-math.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-name-language.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-name.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-arabic.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-default.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-hangul.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-hebrew.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-indic-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-indic.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-khmer.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-myanmar.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-thai.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-use-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-use.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-complex-vowel-constraints.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-fallback.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-normalize.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-tag.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-var.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-set.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shape.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shape-plan.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shaper.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-static.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff1.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff2.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff-common.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-glyf.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-input.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-plan.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-unicode.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-warning.cc
)

if(CMAKE_SYSTEM_NAME MATCHES "Darwin")
   target_sources(CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tools/qbytearray_mac.mm
      ${CMAKE_CURRENT_SOURCE_DIR}/tools/qelapsedtimer_mac.cpp
    )

elseif(CMAKE_SYSTEM_NAME MATCHES "(Linux|OpenBSD|FreeBSD|NetBSD)")
   target_sources(CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tools/qelapsedtimer_unix.cpp
   )

elseif(CMAKE_SYSTEM_NAME MATCHES "Windows")
   target_sources(CsCore
      PRIVATE
      ${CMAKE_CURRENT_SOURCE_DIR}/tools/qelapsedtimer_win.cpp
   )

endif()
