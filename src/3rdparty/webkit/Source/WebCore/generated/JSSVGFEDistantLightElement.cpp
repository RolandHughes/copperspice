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

#include "JSSVGFEDistantLightElement.h"

#include "JSSVGAnimatedNumber.h"
#include "SVGFEDistantLightElement.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGFEDistantLightElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDistantLightElementTableValues[4] =
{
    { "azimuth", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDistantLightElementAzimuth ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "elevation", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDistantLightElementElevation ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGFEDistantLightElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDistantLightElementTable = { 9, 7, JSSVGFEDistantLightElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDistantLightElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDistantLightElementConstructorTable = { 1, 0, JSSVGFEDistantLightElementConstructorTableValues, 0 };
class JSSVGFEDistantLightElementConstructor : public DOMConstructorObject
{
public:
    JSSVGFEDistantLightElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSSVGFEDistantLightElementConstructor::s_info = { "SVGFEDistantLightElementConstructor", &DOMConstructorObject::s_info, &JSSVGFEDistantLightElementConstructorTable, 0 };

JSSVGFEDistantLightElementConstructor::JSSVGFEDistantLightElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGFEDistantLightElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSSVGFEDistantLightElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName,
        PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFEDistantLightElementConstructor, JSDOMWrapper>( exec, &JSSVGFEDistantLightElementConstructorTable,
            this, propertyName, slot );
}

bool JSSVGFEDistantLightElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFEDistantLightElementConstructor, JSDOMWrapper>( exec,
            &JSSVGFEDistantLightElementConstructorTable, this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGFEDistantLightElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGFEDistantLightElementPrototypeTable = { 1, 0, JSSVGFEDistantLightElementPrototypeTableValues, 0 };
const ClassInfo JSSVGFEDistantLightElementPrototype::s_info = { "SVGFEDistantLightElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGFEDistantLightElementPrototypeTable, 0 };

JSObject *JSSVGFEDistantLightElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGFEDistantLightElement>( exec, globalObject );
}

const ClassInfo JSSVGFEDistantLightElement::s_info = { "SVGFEDistantLightElement", &JSSVGElement::s_info, &JSSVGFEDistantLightElementTable, 0 };

JSSVGFEDistantLightElement::JSSVGFEDistantLightElement( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<SVGFEDistantLightElement> impl )
    : JSSVGElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGFEDistantLightElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGFEDistantLightElementPrototype( exec->globalData(), globalObject,
            JSSVGFEDistantLightElementPrototype::createStructure( exec->globalData(), JSSVGElementPrototype::self( exec, globalObject ) ) );
}

bool JSSVGFEDistantLightElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGFEDistantLightElement, Base>( exec, &JSSVGFEDistantLightElementTable, this, propertyName, slot );
}

bool JSSVGFEDistantLightElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGFEDistantLightElement, Base>( exec, &JSSVGFEDistantLightElementTable, this, propertyName,
            descriptor );
}

JSValue jsSVGFEDistantLightElementAzimuth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDistantLightElement *castedThis = static_cast<JSSVGFEDistantLightElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDistantLightElement *imp = static_cast<SVGFEDistantLightElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->azimuthAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDistantLightElementElevation( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDistantLightElement *castedThis = static_cast<JSSVGFEDistantLightElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGFEDistantLightElement *imp = static_cast<SVGFEDistantLightElement *>( castedThis->impl() );
    RefPtr<SVGAnimatedNumber> obj = imp->elevationAnimated();
    JSValue result =  toJS( exec, castedThis->globalObject(), obj.get() );
    return result;
}


JSValue jsSVGFEDistantLightElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGFEDistantLightElement *domObject = static_cast<JSSVGFEDistantLightElement *>( asObject( slotBase ) );
    return JSSVGFEDistantLightElement::getConstructor( exec, domObject->globalObject() );
}

JSValue JSSVGFEDistantLightElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGFEDistantLightElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}

#endif // ENABLE(SVG) && ENABLE(FILTERS)
