list(APPEND SQL_PUBLIC_INCLUDES
   QIBaseDriver
   QIBaseResult
)

list(APPEND SQL_INCLUDES
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/ibase/qsql_ibase.h
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/ibase/qibasedriver.h
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/ibase/qibaseresult.h
)

# if(WITH_IBASE_PLUGIN AND IBASE_FOUND), unsupported at this time
if (FALSE)

   add_library(CsSqlIBase MODULE "")
   add_library(CopperSpice::CsSqlIBase  ALIAS CsSqlIBase )

   set_target_properties(CsSqlIBase  PROPERTIES OUTPUT_NAME CsSqlIBase ${BUILD_ABI} PREFIX "")

   include_directories(${IBase_INCLUDE_DIRS})

   target_sources(CsSqlPsql
      PRIVATE
      ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/ibase/qsql_ibase.cpp
      ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/ibase/main.cpp
   )

   target_link_libraries(CsSqlIBase
      CsCore
      CsSql
      ${IBase_LIBRARY}
   )

   target_compile_definitions(CsSqlIBase
      PRIVATE
      -DIN_TRUE
      -DQT_PLUGIN
   )

   if(BUILDING_RPM OR BUILDING_DEBIAN)
      install(TARGETS CsSqlIBase  DESTINATION ${CMAKE_INSTALL_LIBDIR}/copperspice/plugins/sqldrivers)
   else()
      install(TARGETS CsSqlIBase  DESTINATION ${CMAKE_INSTALL_LIBDIR})
   endif()
endif()

