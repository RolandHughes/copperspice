/***********************************************************************
*
* Copyright (c) 2012-2023 Barbara Geller
* Copyright (c) 2012-2023 Ansel Sermersheim
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

#include <qobject.h>
#include <qscopedpointer.h>

#include <cs_catch2.h>

TEST_CASE("QScopedPointer traits", "[qscopedpointer]")
{
   REQUIRE(std::is_copy_constructible_v<QScopedPointer<int>> == false);
   REQUIRE(std::is_move_constructible_v<QScopedPointer<int>> == true);

   REQUIRE(std::is_copy_assignable_v<QScopedPointer<int>> == false);
   REQUIRE(std::is_move_assignable_v<QScopedPointer<int>> == true);

   REQUIRE(std::has_virtual_destructor_v<QScopedPointer<int>> == false);
}

TEST_CASE("QScopedPointer convert", "[qscopedpointer]")
{
   QScopedPointer<int> ptr1 = QMakeScoped<int>(42);

   std::unique_ptr<int> ptr2 = std::move(ptr1);

   REQUIRE(ptr1 == nullptr);
   REQUIRE(ptr2 != nullptr);

   REQUIRE(*ptr2 == 42);
}

TEST_CASE("QScopedPointer custom_deleter", "[qscopedpointer]")
{
   bool deleterExecuted = false;

   {
      auto customDeleter = [&deleterExecuted] (int *obj) {
         deleterExecuted = true;
         delete obj;
      };

      QScopedPointer<int, decltype(customDeleter)> ptr(new int, customDeleter);
      REQUIRE(deleterExecuted == false);
   }

   REQUIRE(deleterExecuted == true);
}

TEST_CASE("QScopedPointer empty", "[qscopedpointer]")
{
   QScopedPointer<int> ptr;

   REQUIRE(ptr == nullptr);
   REQUIRE(nullptr == ptr);
   REQUIRE(ptr == ptr);

   REQUIRE(! (ptr != nullptr));
   REQUIRE(! (nullptr != ptr));
   REQUIRE(! (ptr != ptr)) ;

   REQUIRE(ptr.isNull() == true);
}

TEST_CASE("QScopedPointer move_assign", "[qscopedpointer]")
{
   QScopedPointer<int> ptr1;
   int *rawPointer = nullptr;

   {
      QScopedPointer<int> ptr2(new int);
      rawPointer = ptr2.data();
      ptr1 = std::move(ptr2);

      REQUIRE(ptr2.isNull());
   }

   REQUIRE(rawPointer == ptr1.get());
}

TEST_CASE("QScopedPointer move_construct", "[qscopedpointer]")
{
   QScopedPointer<int> ptr1 = QMakeUnique<int>();
   QScopedPointer<int> ptr2(std::move(ptr1));

   REQUIRE(ptr1.isNull() == true);
   REQUIRE(ptr2.isNull() == false);
}

TEST_CASE("QScopedPointer release", "[qscopedpointer]")
{
   QScopedPointer<int> ptr = QMakeScoped<int>();
   int *p1 = ptr.get();
   int *p2 = ptr.release();

   REQUIRE(p1 == p2);
   REQUIRE(ptr == nullptr);

   delete p2;

   REQUIRE(ptr.release() == nullptr);
}

TEST_CASE("QScopedPointer reset", "[qscopedpointer]")
{
   QScopedPointer<int> ptr = QMakeUnique<int>();
   ptr.reset();

   REQUIRE(ptr == nullptr);
   REQUIRE(ptr.isNull() == true);
}

TEST_CASE("QScopedPointer swap", "[qscopedpointer]")
{
   QScopedPointer<int> ptr1 = QMakeUnique<int>(8);
   QScopedPointer<int> ptr2 = QMakeUnique<int>(17);

   REQUIRE(*ptr1 == 8);
   REQUIRE(*ptr2 == 17);

   ptr1.swap(ptr2);

   REQUIRE(*ptr1 == 17);
   REQUIRE(*ptr2 == 8);

   ptr1.reset();
   ptr1.swap(ptr2);

   REQUIRE(*ptr1 == 8);
   REQUIRE(ptr2 == nullptr);

   ptr1.swap(ptr1);

   REQUIRE(*ptr1 == 8);
   REQUIRE(ptr2 == nullptr);

   ptr2.swap(ptr2);

   REQUIRE(*ptr1 == 8);
   REQUIRE(ptr2 == nullptr);
}

