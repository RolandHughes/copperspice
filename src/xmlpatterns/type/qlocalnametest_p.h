/***********************************************************************
*
* Copyright (c) 2012-2023 Barbara Geller
* Copyright (c) 2012-2023 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
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

#ifndef QLocalNameTest_P_H
#define QLocalNameTest_P_H

#include <qabstractnodetest_p.h>
#include <qcontainerfwd.h>

namespace QPatternist {

class LocalNameTest : public AbstractNodeTest
{
 public:
   typedef QHash<QString, ItemType::Ptr> Hash;

   static ItemType::Ptr create(const ItemType::Ptr &primaryType, const QXmlName::LocalNameCode localName);

   /**
    * @note This function assumes that @p item is a QXmlNodeModelIndex.
    */
   bool itemMatches(const Item &item) const override;

   QString displayName(const NamePool::Ptr &np) const override;

   bool operator==(const ItemType &other) const override;
   PatternPriority patternPriority() const override;

 protected:
   InstanceOf instanceOf() const override;

 private:
   LocalNameTest(const ItemType::Ptr &primaryType, const QXmlName::LocalNameCode &ncName);

   const QXmlName::LocalNameCode m_ncName;
};

}

#endif
