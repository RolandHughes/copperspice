/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG) && ENABLE(FILTERS)

#include "JSSVGFETurbulenceElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedEnumeration.h"
#include "JSSVGAnimatedInteger.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFETurbulenceElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGFETurbulenceElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFETurbulenceElementTableValues[15] =
{
    { "baseFrequencyX", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementBaseFrequencyX ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "baseFrequencyY", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementBaseFrequencyY ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "numOctaves", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementNumOctaves ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "seed", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSeed ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "stitchTiles", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementStitchTiles ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "type", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementType ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "x", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementX ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "y", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementY ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "width", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementWidth ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "height", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementHeight ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "result", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementResult ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "className", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementClassName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "style", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementStyle ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFETurbulenceElementTable = { 35, 31, JSSVGFETurbulenceElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFETurbulenceElementConstructorTableValues[7] =
{
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_STITCH", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFETurbulenceElementConstructorTable = { 18, 15, JSSVGFETurbulenceElementConstructorTableValues, 0 };
class JSSVGFETurbulenceElementConstructor : public DOMConstructorObject
{
public:
    JSSVGFETurbulenceElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &, JSC::PropertyDescriptor & );
    static const JSC::ClassInfo s_info;
    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance |
                                           DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGFETurbulenceElementConstructor::s_info = { "SVGFETurbulenceElementConstructor", &DOMConstructorObject::s_info, &JSSVGFETurbulenceElementConstructorTable, 0 };

JSSVGFETurbulenceElementConstructor::JSSVGFETurbulenceElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGFETurbulenceElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSSVGFETurbulenceElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName,
        PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFETurbulenceElementConstructor, JSDOMWrapper>( exec, &JSSVGFETurbulenceElementConstructorTable,
            this, propertyName, slot );
}

bool JSSVGFETurbulenceElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFETurbulenceElementConstructor, JSDOMWrapper>( exec,
            &JSSVGFETurbulenceElementConstructorTable, this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFETurbulenceElementPrototypeTableValues[8] =
{
    { "SVG_TURBULENCE_TYPE_UNKNOWN", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_TURBULENCE_TYPE_FRACTALNOISE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_TURBULENCE_TYPE_TURBULENCE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_UNKNOWN", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_STITCH", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SVG_STITCHTYPE_NOSTITCH", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "getPresentationAttribute", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGFETurbulenceElementPrototypeFunctionGetPresentationAttribute ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFETurbulenceElementPrototypeTable = { 18, 15, JSSVGFETurbulenceElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFETurbulenceElementPrototype::s_info = { "SVGFETurbulenceElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFETurbulenceElementPrototypeTable, 0 };

JSObject *JSSVGFETurbulenceElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGFETurbulenceElement>( exec, globalObject );
}

bool JSSVGFETurbulenceElementPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticPropertySlot<JSSVGFETurbulenceElementPrototype, JSObject>( exec, &JSSVGFETurbulenceElementPrototypeTable, this,
            propertyName, slot );
}

bool JSSVGFETurbulenceElementPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticPropertyDescriptor<JSSVGFETurbulenceElementPrototype, JSObject>( exec, &JSSVGFETurbulenceElementPrototypeTable,
            this, propertyName, descriptor );
}

const ClassInfo JSSVGFETurbulenceElement::s_info = { "SVGFETurbulenceElement", &JSSVGElement::s_info, &JSSVGFETurbulenceElementTable, 0 };

JSSVGFETurbulenceElement::JSSVGFETurbulenceElement( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<SVGFETurbulenceElement> impl )
    : JSSVGElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGFETurbulenceElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGFETurbulenceElementPrototype( exec->globalData(), globalObject,
            JSSVGFETurbulenceElementPrototype::createStructure( exec->globalData(), JSSVGElementPrototype::self( exec, globalObject ) ) );
}

bool JSSVGFETurbulenceElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFETurbulenceElement, Base>( exec, &JSSVGFETurbulenceElementTable, this, propertyName, slot );
}

bool JSSVGFETurbulenceElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFETurbulenceElement, Base>( exec, &JSSVGFETurbulenceElementTable, this, propertyName,
            descriptor );
}

JSValue jsSVGFETurbulenceElementBaseFrequencyX( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->baseFrequencyXAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementBaseFrequencyY( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->baseFrequencyYAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementNumOctaves( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedInteger> obj = imp->numOctavesAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementSeed( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->seedAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementStitchTiles( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedEnumeration> obj = imp->stitchTilesAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementType( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedEnumeration> obj = imp->typeAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementX( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementY( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementWidth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementHeight( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementResult( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementClassName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFETurbulenceElementStyle( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->style() ) );
    return result;
}


JSValue jsSVGFETurbulenceElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFETurbulenceElement *domObject = static_cast<JSSVGFETurbulenceElement *>( asObject( slotBase ) );
    return JSSVGFETurbulenceElement::getConstructor( exec, domObject->globalObject() );
}

JSValue JSSVGFETurbulenceElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGFETurbulenceElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsSVGFETurbulenceElementPrototypeFunctionGetPresentationAttribute( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGFETurbulenceElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGFETurbulenceElement *castedThis = static_cast<JSSVGFETurbulenceElement *>( asObject( thisValue ) );
    SVGFETurbulenceElement *imp = static_cast<SVGFETurbulenceElement *>( castedThis->impl() );
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->getPresentationAttribute( name ) ) );
    return JSValue::encode( result );
}

// Constant getters

JSValue jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_UNKNOWN( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 0 ) );
}

JSValue jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_FRACTALNOISE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 1 ) );
}

JSValue jsSVGFETurbulenceElementSVG_TURBULENCE_TYPE_TURBULENCE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 2 ) );
}

JSValue jsSVGFETurbulenceElementSVG_STITCHTYPE_UNKNOWN( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 0 ) );
}

JSValue jsSVGFETurbulenceElementSVG_STITCHTYPE_STITCH( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 1 ) );
}

JSValue jsSVGFETurbulenceElementSVG_STITCHTYPE_NOSTITCH( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 2 ) );
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
