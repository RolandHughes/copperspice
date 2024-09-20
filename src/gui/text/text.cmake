# Harfbuzz settings
add_definitions(
   -DHAVE_ATEXIT
   -DHB_EXTERN=
   -DHB_NO_UNICODE_FUNCS
   -DHB_NDEBUG
   -DFT2_BUILD_LIBRARY
)

# Harfbuzz settings
if(CMAKE_SYSTEM_NAME MATCHES "Windows")
   add_definitions(
      -DHB_NO_WIN1256
   )
else()
   add_definitions(
      -DHAVE_PTHREAD
   )
endif()

list(APPEND GUI_PUBLIC_INCLUDES
   QAbstractTextDocumentLayout
   QAbstractGraphicsShapeItem
   QAbstractUndoItem
   QFont
   QFontDatabase
   QFontInfo
   QFontMetrics
   QFontMetricsF
   QGlyphRun
   QRawFont
   QStaticText
   QSupportedWritingSystems
   QSyntaxHighlighter
   QTextCursor
   QTextBlock
   QTextBlockFormat
   QTextBlockGroup
   QTextBlockUserData
   QTextCharFormat
   QTextDocument
   QTextDocumentFragment
   QTextDocumentWriter
   QTextFormat
   QTextFragment
   QTextFrame
   QTextFrameFormat
   QTextFrameLayoutData
   QTextInlineObject
   QTextImageFormat
   QTextLayout
   QTextLine
   QTextListFormat
   QTextLength
   QTextList
   QTextObject
   QTextObjectInterface
   QTextOption
   QTextTable
   QTextTableCell
   QTextTableCellFormat
   QTextTableFormat
)

list(APPEND GUI_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qabstractgraphicsshapeitem.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qabstracttextdocumentlayout.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qabstractundoitem.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfont.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontdatabase.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontinfo.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontmetrics.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontmetricsf.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qglyphrun.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qrawfont.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qstatictext.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qsupportedwritingsystems.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qsyntaxhighlighter.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextblock.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextblockformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextblockgroup.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextblockuserdata.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcharformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcursor.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocument.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentfragment.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentwriter.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextfragment.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextframe.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextframeformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextframelayoutdata.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextinlineobject.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextimageformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlayout.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextline.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlistformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlength.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlist.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextobject.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextobjectinterface.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextoption.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttable.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttablecell.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttablecellformat.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttableformat.h
)

list(APPEND GUI_PRIVATE_INCLUDES
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qcssscanner_p.cpp

   ${CMAKE_CURRENT_SOURCE_DIR}/text/qabstracttextdocumentlayout_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qcssparser_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfont_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengine_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengine_faceid_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengine_qpf2_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengineglyphcache_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontsubset_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontsubset_agl_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfragmentmap_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qglyphrun_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qharfbuzz_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qinputcontrol_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qrawfont_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qstatictext_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcontrol_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcontrol_p_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcursor_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocument_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentfragment_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentlayout_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextengine_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextformat_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexthtmlparser_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextimagehandler_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextobject_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextodfwriter_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttable_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qzipreader_p.h
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qzipwriter_p.h
)

target_sources(LsCsGui
   PRIVATE
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qcssparser.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfont.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengine.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengine_qpf2.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontengineglyphcache.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontsubset.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontmetrics.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qfontdatabase.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qglyphrun.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qharfbuzz_script.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qharfbuzz_font.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qinputcontrol.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qrawfont.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qstatictext.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qsyntaxhighlighter.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcontrol.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextengine.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlayout.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextformat.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextobject.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextoption.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocument.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocument_p.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexthtmlparser.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qabstracttextdocumentlayout.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentlayout.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextcursor.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentfragment.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextimagehandler.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtexttable.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextlist.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextdocumentwriter.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qtextodfwriter.cpp
   ${CMAKE_CURRENT_SOURCE_DIR}/text/qzip.cpp

   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/autofit/autofit.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftbase.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftbbox.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftbitmap.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftdebug.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftglyph.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftinit.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftmm.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftsynth.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/fttype1.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/bdf/bdf.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/cache/ftccache.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/cache/ftcmanag.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/cache/ftcmru.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/cff/cff.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/cid/type1cid.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/gzip/ftgzip.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/lzw/ftlzw.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/otvalid/otvbase.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/otvalid/otvcommn.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pcf/pcf.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrcmap.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrdrivr.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrgload.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrload.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrobjs.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pfr/pfrsbit.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/psaux/psaux.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/pshinter/pshinter.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/psnames/psnames.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/raster/raster.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/sdf/ftbsdf.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/sdf/ftsdf.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/sdf/ftsdfrend.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/sdf/ftsdfcommon.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/sfnt/sfnt.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/smooth/smooth.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/truetype/truetype.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/type1/type1.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/type42/type42.c
   ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/winfonts/winfnt.c

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/fonts/resource_harfbuzz.cpp

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-aat-layout.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-aat-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-blob.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-buffer.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-buffer-serialize.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-buffer-verify.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-common.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-draw.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-face.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-face-builder.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-fallback-shape.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-font.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-number.cc

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-cff1-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-cff2-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-color.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-face.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-font.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-layout.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-map.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-math.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-metrics.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-name.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-fallback.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shape-normalize.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-arabic.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-default.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-hangul.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-hebrew.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-indic.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-indic-table.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-khmer.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-myanmar.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-syllabic.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-thai.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-use.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-shaper-vowel-constraints.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-tag.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-ot-var.cc

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-outline.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-paint.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-paint-extents.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-set.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shape.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shape-plan.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-shaper.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-static.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff1.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff2.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-cff-common.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-input.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-instancer-solver.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-subset-plan.cc
   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-unicode.cc

   ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/graph/gsubgpos-context.cc
)

if (GTK2_FOUND)
   target_sources(LsCsGui
      PRIVATE
      ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-glib.cc
      ${CMAKE_SOURCE_DIR}/src/3rdparty/harfbuzz/src/hb-gobject-structs.cc
   )
endif()

if (CMAKE_SYSTEM_NAME MATCHES "Windows")
   target_sources(LsCsGui
      PRIVATE
      ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/base/ftsystem.c
   )
else()
   target_sources(LsCsGui
      PRIVATE
      ${CMAKE_SOURCE_DIR}/src/3rdparty/freetype/src/builds/unix/ftsystem.c
   )
   add_definitions(
      -DHAVE_FCNTL_H
   )
endif()
