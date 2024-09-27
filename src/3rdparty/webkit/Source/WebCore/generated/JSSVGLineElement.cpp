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

#if ENABLE(SVG)

#include "JSSVGLineElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "ExceptionCode.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSDOMBinding.h"
#include "JSSVGAnimatedBoolean.h"
#include "JSSVGAnimatedLength.h"
#include "JSSVGAnimatedString.h"
#include "JSSVGAnimatedTransformList.h"
#include "JSSVGElement.h"
#include "JSSVGMatrix.h"
#include "JSSVGRect.h"
#include "JSSVGStringList.h"
#include "KURL.h"
#include "SVGElement.h"
#include "SVGLineElement.h"
#include "SVGMatrix.h"
#include "SVGRect.h"
#include "SVGStringList.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGLineElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLineElementTableValues[17] =
{
    { "x1", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementX1 ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "y1", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementY1 ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "x2", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementX2 ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "y2", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementY2 ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "requiredFeatures", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementRequiredFeatures ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "requiredExtensions", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementRequiredExtensions ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "systemLanguage", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementSystemLanguage ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "xmllang", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementXmllang ), ( intptr_t )setJSSVGLineElementXmllang THUNK_GENERATOR( 0 ) },
    { "xmlspace", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementXmlspace ), ( intptr_t )setJSSVGLineElementXmlspace THUNK_GENERATOR( 0 ) },
    { "externalResourcesRequired", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementExternalResourcesRequired ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "className", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementClassName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "style", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementStyle ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "transform", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementTransform ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "nearestViewportElement", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementNearestViewportElement ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "farthestViewportElement", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementFarthestViewportElement ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGLineElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLineElementTable = { 36, 31, JSSVGLineElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLineElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLineElementConstructorTable = { 1, 0, JSSVGLineElementConstructorTableValues, 0 };
class JSSVGLineElementConstructor : public DOMConstructorObject
{
public:
    JSSVGLineElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSSVGLineElementConstructor::s_info = { "SVGLineElementConstructor", &DOMConstructorObject::s_info, &JSSVGLineElementConstructorTable, 0 };

JSSVGLineElementConstructor::JSSVGLineElementConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGLineElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSSVGLineElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGLineElementConstructor, JSDOMWrapper>( exec, &JSSVGLineElementConstructorTable, this, propertyName,
            slot );
}

bool JSSVGLineElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGLineElementConstructor, JSDOMWrapper>( exec, &JSSVGLineElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGLineElementPrototypeTableValues[7] =
{
    { "hasExtension", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionHasExtension ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "getPresentationAttribute", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionGetPresentationAttribute ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "getBBox", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionGetBBox ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "getCTM", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionGetCTM ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "getScreenCTM", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionGetScreenCTM ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "getTransformToElement", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGLineElementPrototypeFunctionGetTransformToElement ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGLineElementPrototypeTable = { 17, 15, JSSVGLineElementPrototypeTableValues, 0 };
const ClassInfo JSSVGLineElementPrototype::s_info = { "SVGLineElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGLineElementPrototypeTable, 0 };

JSObject *JSSVGLineElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGLineElement>( exec, globalObject );
}

bool JSSVGLineElementPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSSVGLineElementPrototypeTable, this, propertyName, slot );
}

bool JSSVGLineElementPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSSVGLineElementPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSSVGLineElement::s_info = { "SVGLineElement", &JSSVGElement::s_info, &JSSVGLineElementTable, 0 };

JSSVGLineElement::JSSVGLineElement( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<SVGLineElement> impl )
    : JSSVGElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGLineElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGLineElementPrototype( exec->globalData(), globalObject,
            JSSVGLineElementPrototype::createStructure( exec->globalData(), JSSVGElementPrototype::self( exec, globalObject ) ) );
}

bool JSSVGLineElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGLineElement, Base>( exec, &JSSVGLineElementTable, this, propertyName, slot );
}

bool JSSVGLineElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGLineElement, Base>( exec, &JSSVGLineElementTable, this, propertyName, descriptor );
}

JSValue jsSVGLineElementX1( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->x1Animated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementY1( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->y1Animated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementX2( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->x2Animated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementY2( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedLength> obj = imp->y2Animated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementRequiredFeatures( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(),
                           WTF::getPtr( SVGStaticListPropertyTearOff<SVGStringList>::create(
                                            GetOwnerElementForType<SVGLineElement, IsDerivedFromSVGElement<SVGLineElement>::value>::ownerElement( imp ),
                                            imp->requiredFeatures() ) ) );
    return result;
}


JSValue jsSVGLineElementRequiredExtensions( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(),
                           WTF::getPtr( SVGStaticListPropertyTearOff<SVGStringList>::create(
                                            GetOwnerElementForType<SVGLineElement, IsDerivedFromSVGElement<SVGLineElement>::value>::ownerElement( imp ),
                                            imp->requiredExtensions() ) ) );
    return result;
}


JSValue jsSVGLineElementSystemLanguage( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(),
                           WTF::getPtr( SVGStaticListPropertyTearOff<SVGStringList>::create(
                                            GetOwnerElementForType<SVGLineElement, IsDerivedFromSVGElement<SVGLineElement>::value>::ownerElement( imp ),
                                            imp->systemLanguage() ) ) );
    return result;
}


JSValue jsSVGLineElementXmllang( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->xmllang() );
    return result;
}


JSValue jsSVGLineElementXmlspace( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->xmlspace() );
    return result;
}


JSValue jsSVGLineElementExternalResourcesRequired( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedBoolean> obj = imp->externalResourcesRequiredAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementClassName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementStyle( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->style() ) );
    return result;
}


JSValue jsSVGLineElementTransform( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedTransformList> obj = imp->transformAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGLineElementNearestViewportElement( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->nearestViewportElement() ) );
    return result;
}


JSValue jsSVGLineElementFarthestViewportElement( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->farthestViewportElement() ) );
    return result;
}


JSValue jsSVGLineElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGLineElement *domObject = static_cast<JSSVGLineElement *>( asObject( slotBase ) );
    return JSSVGLineElement::getConstructor( exec, domObject->globalObject() );
}

void JSSVGLineElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSSVGLineElement, Base>( exec, propertyName, value, &JSSVGLineElementTable, this, slot );
}

void setJSSVGLineElementXmllang( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( thisObject );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    imp->setXmllang( ustringToString( value.toString( exec ) ) );
}


void setJSSVGLineElementXmlspace( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( thisObject );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    imp->setXmlspace( ustringToString( value.toString( exec ) ) );
}


JSValue JSSVGLineElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGLineElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionHasExtension( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    const String &extension( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = jsBoolean( imp->hasExtension( extension ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetPresentationAttribute( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->getPresentationAttribute( name ) ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetBBox( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );


    JSC::JSValue result = toJS( exec, castedThis->globalObject(),
                                WTF::getPtr( SVGPropertyTearOff<FloatRect>::create( imp->getBBox() ) ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetCTM( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );


    JSC::JSValue result = toJS( exec, castedThis->globalObject(),
                                WTF::getPtr( SVGPropertyTearOff<SVGMatrix>::create( imp->getCTM() ) ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetScreenCTM( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );


    JSC::JSValue result = toJS( exec, castedThis->globalObject(),
                                WTF::getPtr( SVGPropertyTearOff<SVGMatrix>::create( imp->getScreenCTM() ) ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsSVGLineElementPrototypeFunctionGetTransformToElement( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGLineElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGLineElement *castedThis = static_cast<JSSVGLineElement *>( asObject( thisValue ) );
    SVGLineElement *imp = static_cast<SVGLineElement *>( castedThis->impl() );
    ExceptionCode ec = 0;
    SVGElement *element( toSVGElement( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(),
                                WTF::getPtr( SVGPropertyTearOff<SVGMatrix>::create( imp->getTransformToElement( element, ec ) ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}


}

#endif // ENABLE(SVG)
