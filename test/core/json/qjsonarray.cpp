/***********************************************************************
*
* Copyright (c) 2012-2021 Barbara Geller
* Copyright (c) 2012-2021 Ansel Sermersheim
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

#include <qstring8.h>
#include <qjsonarray.h>

#include <catch2/catch.hpp>

TEST_CASE("QJsonArray traits", "[qjsonoarray]")
{
   REQUIRE(std::is_copy_constructible_v<QJsonArray> == true);
   REQUIRE(std::is_move_constructible_v<QJsonArray> == true);

   REQUIRE(std::is_copy_assignable_v<QJsonArray> == true);
   REQUIRE(std::is_move_assignable_v<QJsonArray> == true);

   REQUIRE(std::is_nothrow_move_constructible_v<QJsonArray> == false);
   REQUIRE(std::is_nothrow_move_assignable_v<QJsonArray> == false);

   REQUIRE(std::has_virtual_destructor_v<QJsonArray> == false);
}

