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

#ifndef QDocumentContentValidator_P_H
#define QDocumentContentValidator_P_H

#include <qdynamiccontext_p.h>
#include <qexpression_p.h>
#include <qabstractxmlreceiver.h>

namespace QPatternist {
class DocumentContentValidator : public QAbstractXmlReceiver
{
 public:

   DocumentContentValidator(QAbstractXmlReceiver *const receiver, const DynamicContext::Ptr &context, const Expression::ConstPtr &expr);

   void namespaceBinding(const QXmlName &nb) override;
   void characters(QStringView value) override;
   void comment(const QString &value) override;

   void startElement(const QXmlName &name) override;
   void endElement() override;

   void attribute(const QXmlName &name, QStringView value) override;

   void processingInstruction(const QXmlName &name, const QString &value) override;

   void item(const Item &item) override;

   void startDocument() override;
   void endDocument() override;
   void atomicValue(const QVariant &value) override;
   void startOfSequence() override;
   void endOfSequence() override;

 private:
   QAbstractXmlReceiver *const      m_receiver;
   const DynamicContext::Ptr       m_context;
   const Expression::ConstPtr      m_expr;
   xsInteger                       m_elementDepth;
};
}

#endif
