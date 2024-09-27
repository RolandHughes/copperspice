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

#include "JSSVGElementInstanceList.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSSVGElementInstance.h"
#include "SVGElementInstance.h"
#include "SVGElementInstanceList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGElementInstanceList );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementInstanceListTableValues[3] =
{
    { "length", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGElementInstanceListLength ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGElementInstanceListConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementInstanceListTable = { 5, 3, JSSVGElementInstanceListTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementInstanceListConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementInstanceListConstructorTable = { 1, 0, JSSVGElementInstanceListConstructorTableValues, 0 };
class JSSVGElementInstanceListConstructor : public DOMConstructorObject
{
public:
    JSSVGElementInstanceListConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSSVGElementInstanceListConstructor::s_info = { "SVGElementInstanceListConstructor", &DOMConstructorObject::s_info, &JSSVGElementInstanceListConstructorTable, 0 };

JSSVGElementInstanceListConstructor::JSSVGElementInstanceListConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGElementInstanceListPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSSVGElementInstanceListConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName,
        PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGElementInstanceListConstructor, JSDOMWrapper>( exec, &JSSVGElementInstanceListConstructorTable,
            this, propertyName, slot );
}

bool JSSVGElementInstanceListConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGElementInstanceListConstructor, JSDOMWrapper>( exec,
            &JSSVGElementInstanceListConstructorTable, this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGElementInstanceListPrototypeTableValues[2] =
{
    { "item", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsSVGElementInstanceListPrototypeFunctionItem ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGElementInstanceListPrototypeTable = { 2, 1, JSSVGElementInstanceListPrototypeTableValues, 0 };
const ClassInfo JSSVGElementInstanceListPrototype::s_info = { "SVGElementInstanceListPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGElementInstanceListPrototypeTable, 0 };

JSObject *JSSVGElementInstanceListPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGElementInstanceList>( exec, globalObject );
}

bool JSSVGElementInstanceListPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSSVGElementInstanceListPrototypeTable, this, propertyName, slot );
}

bool JSSVGElementInstanceListPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSSVGElementInstanceListPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSSVGElementInstanceList::s_info = { "SVGElementInstanceList", &JSDOMWrapper::s_info, &JSSVGElementInstanceListTable, 0 };

JSSVGElementInstanceList::JSSVGElementInstanceList( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<SVGElementInstanceList> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGElementInstanceList::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGElementInstanceListPrototype( exec->globalData(), globalObject,
            JSSVGElementInstanceListPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSSVGElementInstanceList::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGElementInstanceList, Base>( exec, &JSSVGElementInstanceListTable, this, propertyName, slot );
}

bool JSSVGElementInstanceList::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGElementInstanceList, Base>( exec, &JSSVGElementInstanceListTable, this, propertyName,
            descriptor );
}

JSValue jsSVGElementInstanceListLength( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGElementInstanceList *castedThis = static_cast<JSSVGElementInstanceList *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SVGElementInstanceList *imp = static_cast<SVGElementInstanceList *>( castedThis->impl() );
    JSValue result = jsNumber( imp->length() );
    return result;
}


JSValue jsSVGElementInstanceListConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGElementInstanceList *domObject = static_cast<JSSVGElementInstanceList *>( asObject( slotBase ) );
    return JSSVGElementInstanceList::getConstructor( exec, domObject->globalObject() );
}

JSValue JSSVGElementInstanceList::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGElementInstanceListConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsSVGElementInstanceListPrototypeFunctionItem( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSSVGElementInstanceList::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSSVGElementInstanceList *castedThis = static_cast<JSSVGElementInstanceList *>( asObject( thisValue ) );
    SVGElementInstanceList *imp = static_cast<SVGElementInstanceList *>( castedThis->impl() );
    unsigned index( exec->argument( 0 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->item( index ) ) );
    return JSValue::encode( result );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, SVGElementInstanceList *impl )
{
    return wrap<JSSVGElementInstanceList>( exec, globalObject, impl );
}

SVGElementInstanceList *toSVGElementInstanceList( JSC::JSValue value )
{
    return value.inherits( &JSSVGElementInstanceList::s_info ) ? static_cast<JSSVGElementInstanceList *>( asObject(
                value ) )->impl() : 0;
}

}

#endif // ENABLE(SVG)
