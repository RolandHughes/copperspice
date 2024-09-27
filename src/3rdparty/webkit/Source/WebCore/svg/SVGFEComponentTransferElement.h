/*
 * Copyright (C) 2004, 2005, 2007 Nikolas Zimmermann <zimmermann@kde.org>
 * Copyright (C) 2004, 2005 Rob Buis <buis@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef SVGFEComponentTransferElement_h
#define SVGFEComponentTransferElement_h

#if ENABLE(SVG) && ENABLE(FILTERS)
#include "FEComponentTransfer.h"
#include "SVGFilterPrimitiveStandardAttributes.h"

namespace WebCore
{

class SVGFEComponentTransferElement : public SVGFilterPrimitiveStandardAttributes
{
public:
    static PassRefPtr<SVGFEComponentTransferElement> create( const QualifiedName &, Document * );

private:
    SVGFEComponentTransferElement( const QualifiedName &, Document * );

    virtual void parseMappedAttribute( Attribute * );
    virtual void synchronizeProperty( const QualifiedName & );
    virtual void fillAttributeToPropertyTypeMap();
    virtual AttributeToPropertyTypeMap &attributeToPropertyTypeMap();
    virtual PassRefPtr<FilterEffect> build( SVGFilterBuilder *, Filter * );

    // Animated property declarations
    DECLARE_ANIMATED_STRING( In1, in1 )
};

} // namespace WebCore

#endif // ENABLE(SVG)
#endif
