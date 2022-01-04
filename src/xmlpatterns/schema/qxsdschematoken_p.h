/***********************************************************************
*
* Copyright (c) 2012-2022 Barbara Geller
* Copyright (c) 2012-2022 Ansel Sermersheim
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

// NOTE: This file is AUTO GENERATED by qautomaton2cpp.xsl

#ifndef QXsdSchemaToken_P_H
#define QXsdSchemaToken_P_H

#include <qstring.h>

class XsdSchemaToken
{
 public:
   enum NodeName

   {
      NoKeyword,
      Abstract,
      All,
      Alternative,
      Annotation,
      Any,
      AnyAttribute,
      Appinfo,
      AppliesToEmpty,
      Assert,
      Assertion,
      Attribute,
      AttributeFormDefault,
      AttributeGroup,
      Base,
      Block,
      BlockDefault,
      Choice,
      Collapse,
      ComplexContent,
      ComplexType,
      Default,
      DefaultAttributes,
      DefaultAttributesApply,
      DefaultOpenContent,
      Documentation,
      Element,
      ElementFormDefault,
      Enumeration,
      Extension,
      Field,
      Final,
      FinalDefault,
      Fixed,
      Form,
      FractionDigits,
      Group,
      Id,
      Import,
      Include,
      ItemType,
      Key,
      Keyref,
      Length,
      List,
      MaxExclusive,
      MaxInclusive,
      MaxLength,
      MaxOccurs,
      MemberTypes,
      MinExclusive,
      MinInclusive,
      MinLength,
      MinOccurs,
      Mixed,
      Mode,
      Name,
      Namespace,
      Nillable,
      NotNamespace,
      NotQName,
      Notation,
      OpenContent,
      Override,
      Pattern,
      Preserve,
      ProcessContents,
      Public,
      Redefine,
      Ref,
      Refer,
      Replace,
      Restriction,
      Schema,
      SchemaLocation,
      Selector,
      Sequence,
      SimpleContent,
      SimpleType,
      Source,
      SubstitutionGroup,
      System,
      TargetNamespace,
      Test,
      TotalDigits,
      Type,
      Union,
      Unique,
      Use,
      Value,
      Version,
      WhiteSpace,
      XML_NS_SCHEMA_URI,
      XPathDefaultNamespace,
      XmlLanguage,
      Xpath
   };

   static inline NodeName toToken(const QString &value);
   static inline NodeName toToken(QStringView value);
   static NodeName toToken(QStringView data, int length);

   static QString toString(NodeName token);

 private:
   static inline NodeName classifier2(QStringView data);
   static inline NodeName classifier3(QStringView data);
   static inline NodeName classifier4(QStringView data);
   static inline NodeName classifier5(QStringView data);
   static inline NodeName classifier6(QStringView data);
   static inline NodeName classifier7(QStringView data);
   static inline NodeName classifier8(QStringView data);
   static inline NodeName classifier9(QStringView data);
   static inline NodeName classifier10(QStringView data);
   static inline NodeName classifier11(QStringView data);
   static inline NodeName classifier12(QStringView data);
   static inline NodeName classifier13(QStringView data);
   static inline NodeName classifier14(QStringView data);
   static inline NodeName classifier15(QStringView data);
   static inline NodeName classifier17(QStringView data);
   static inline NodeName classifier18(QStringView data);
   static inline NodeName classifier20(QStringView data);
   static inline NodeName classifier21(QStringView data);
   static inline NodeName classifier22(QStringView data);
   static inline NodeName classifier32(QStringView data);

};

inline XsdSchemaToken::NodeName XsdSchemaToken::toToken(const QString &value)
{
   return toToken(QStringView(value), value.length());
}

inline XsdSchemaToken::NodeName XsdSchemaToken::toToken(QStringView value)
{
   return toToken(value, value.length());
}

#endif
