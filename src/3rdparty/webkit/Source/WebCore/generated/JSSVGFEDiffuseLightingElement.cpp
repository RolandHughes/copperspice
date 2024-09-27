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

#include "JSSVGFEDiffuseLightingElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedNumber.h"
#include "JSSVGAnimatedString.h"
#include "SVGFEDiffuseLightingElement.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGFEDiffuseLightingElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDiffuseLightingElementTableValues[14] =
{
    { "in1", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementIn1 ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "surfaceScale", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementSurfaceScale ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "diffuseConstant", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementDiffuseConstant ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "kernelUnitLengthX", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementKernelUnitLengthX ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "kernelUnitLengthY", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementKernelUnitLengthY ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "x", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementX ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "y", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementY ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "width", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementWidth ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "height", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementHeight ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "result", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementResult ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "className", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementClassName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "style", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementStyle ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDiffuseLightingElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementTable = { 35, 31, JSSVGFEDiffuseLightingElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDiffuseLightingElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementConstructorTable = { 1, 0, JSSVGFEDiffuseLightingElementConstructorTableValues, 0 };
class JSSVGFEDiffuseLightingElementConstructor : public DOMConstructorObject
{
public:
    JSSVGFEDiffuseLightingElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSSVGFEDiffuseLightingElementConstructor::s_info = { "SVGFEDiffuseLightingElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEDiffuseLightingElementConstructorTable, 0 };

JSSVGFEDiffuseLightingElementConstructor::JSSVGFEDiffuseLightingElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGFEDiffuseLightingElementPrototype::self( exec,
               globalObject ), DontDelete | ReadOnly );
}

bool JSSVGFEDiffuseLightingElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName,
        PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElementConstructor, JSDOMWrapper>( exec,
            &JSSVGFEDiffuseLightingElementConstructorTable, this, propertyName, slot );
}

bool JSSVGFEDiffuseLightingElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFEDiffuseLightingElementConstructor, JSDOMWrapper>( exec,
            &JSSVGFEDiffuseLightingElementConstructorTable, this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDiffuseLightingElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGFEDiffuseLightingElementPrototypeFunctionGetPresentationAttribute ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDiffuseLightingElementPrototypeTable = { 2, 1, JSSVGFEDiffuseLightingElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDiffuseLightingElementPrototype::s_info = { "SVGFEDiffuseLightingElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEDiffuseLightingElementPrototypeTable, 0 };

JSObject *JSSVGFEDiffuseLightingElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGFEDiffuseLightingElement>( exec, globalObject );
}

bool JSSVGFEDiffuseLightingElementPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName,
        PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSSVGFEDiffuseLightingElementPrototypeTable, this, propertyName, slot );
}

bool JSSVGFEDiffuseLightingElementPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSSVGFEDiffuseLightingElementPrototypeTable, this, propertyName,
            descriptor );
}

const ClassInfo JSSVGFEDiffuseLightingElement::s_info = { "SVGFEDiffuseLightingElement", &JSSVGElement::s_info, &JSSVGFEDiffuseLightingElementTable, 0 };

JSSVGFEDiffuseLightingElement::JSSVGFEDiffuseLightingElement( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<SVGFEDiffuseLightingElement> impl )
    : JSSVGElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGFEDiffuseLightingElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGFEDiffuseLightingElementPrototype( exec->globalData(), globalObject,
            JSSVGFEDiffuseLightingElementPrototype::createStructure( exec->globalData(), JSSVGElementPrototype::self( exec,
                    globalObject ) ) );
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFEDiffuseLightingElement, Base>( exec, &JSSVGFEDiffuseLightingElementTable, this, propertyName,
            slot );
}

bool JSSVGFEDiffuseLightingElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFEDiffuseLightingElement, Base>( exec, &JSSVGFEDiffuseLightingElementTable, this,
            propertyName, descriptor );
}

JSValue jsSVGFEDiffuseLightingElementIn1( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->in1Animated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementSurfaceScale( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->surfaceScaleAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementDiffuseConstant( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->diffuseConstantAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthX( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthXAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementKernelUnitLengthY( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->kernelUnitLengthYAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementX( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->xAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementY( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->yAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementWidth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->widthAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementHeight( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->heightAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementResult( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->resultAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementClassName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementStyle( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->style() ) );
    return result;
}


JSValue jsSVGFEDiffuseLightingElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDiffuseLightingElement *domObject = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( slotBase ) );
    return JSSVGFEDiffuseLightingElement::getConstructor( exec, domObject->globalObject() );
}

JSValue JSSVGFEDiffuseLightingElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGFEDiffuseLightingElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsSVGFEDiffuseLightingElementPrototypeFunctionGetPresentationAttribute( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGFEDiffuseLightingElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGFEDiffuseLightingElement *castedThis = static_cast<JSSVGFEDiffuseLightingElement *>( asObject( thisValue ) );
    SVGFEDiffuseLightingElement *imp = static_cast<SVGFEDiffuseLightingElement *>( castedThis->impl() );
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->getPresentationAttribute( name ) ) );
    return JSValue::encode( result );
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
