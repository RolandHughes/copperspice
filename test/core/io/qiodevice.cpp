/***********************************************************************
*
* Copyright (c) 2012-2024 Barbara Geller
* Copyright (c) 2012-2024 Ansel Sermersheim
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

#include <qiodevice.h>

#include <cs_catch2.h>

TEST_CASE( "QIODevice traits", "[qiodevice]" )
{
    REQUIRE( std::is_copy_constructible_v<QIODevice> == false );
    REQUIRE( std::is_move_constructible_v<QIODevice> == false );

    REQUIRE( std::is_copy_assignable_v<QIODevice> == false );
    REQUIRE( std::is_move_assignable_v<QIODevice> == false );

    REQUIRE( std::has_virtual_destructor_v<QIODevice> == true );
}