list(APPEND SQL_PUBLIC_INCLUDES
   QPSQLDriver
   QPSQLResult
)

list(APPEND SQL_INCLUDES
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/psql/qsql_psql.h
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/psql/qpsqldriver.h
   ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/psql/qpsqlresult.h
)

if(WITH_PSQL_PLUGIN AND PostgreSQL_FOUND)

   add_library(CsSqlPsql MODULE "")
   add_library(CopperSpice::CsSqlPsql ALIAS CsSqlPsql)

   set_target_properties(CsSqlPsql PROPERTIES OUTPUT_NAME CsSqlPsql${BUILD_ABI} PREFIX "")

   include_directories(${PostgreSQL_INCLUDE_DIRS})

   target_sources(CsSqlPsql
      PRIVATE
      ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/psql/qsql_psql.cpp
      ${CMAKE_SOURCE_DIR}/src/plugins/sqldrivers/psql/main.cpp
   )

   target_link_libraries(CsSqlPsql
      CsCore
      CsSql
      ${PostgreSQL_LIBRARY}
   )

   target_compile_definitions(CsSqlPsql
      PRIVATE
      -DIN_TRUE
      -DQT_PLUGIN
   )

   if(BUILDING_RPM)
      install(TARGETS CsSqlPsql DESTINATION ${CMAKE_INSTALL_LIBDIR}/copperspice/plugins/sqldrivers)
   else()
      install(TARGETS CsSqlPsql DESTINATION ${CMAKE_INSTALL_LIBDIR})
   endif()
endif()
