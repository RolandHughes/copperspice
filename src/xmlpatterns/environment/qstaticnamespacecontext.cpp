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

#include "qstaticnamespacecontext_p.h"

QT_BEGIN_NAMESPACE

using namespace QPatternist;

StaticNamespaceContext::StaticNamespaceContext(const NamespaceResolver::Ptr &resolver,
      const StaticContext::Ptr &context) : DelegatingStaticContext(context)
   , m_namespaceBindings(resolver)
{
   Q_ASSERT(m_namespaceBindings);
}

NamespaceResolver::Ptr StaticNamespaceContext::namespaceBindings() const
{
   return m_namespaceBindings;
}

QT_END_NAMESPACE
