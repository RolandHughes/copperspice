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

#if ENABLE(XPATH)

#include "JSXPathResult.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "KURL.h"
#include "Node.h"
#include "XPathResult.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSXPathResult );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathResultTableValues[9] =
{
    { "resultType", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultResultType ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "numberValue", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultNumberValue ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "stringValue", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultStringValue ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "booleanValue", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultBooleanValue ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "singleNodeValue", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultSingleNodeValue ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "invalidIteratorState", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultInvalidIteratorState ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "snapshotLength", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultSnapshotLength ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathResultTable = { 18, 15, JSXPathResultTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathResultConstructorTableValues[11] =
{
    { "ANY_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultANY_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "NUMBER_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultNUMBER_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "STRING_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultSTRING_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "BOOLEAN_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultBOOLEAN_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "UNORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultUNORDERED_NODE_ITERATOR_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultORDERED_NODE_ITERATOR_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "UNORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultUNORDERED_NODE_SNAPSHOT_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultORDERED_NODE_SNAPSHOT_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ANY_UNORDERED_NODE_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultANY_UNORDERED_NODE_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "FIRST_ORDERED_NODE_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultFIRST_ORDERED_NODE_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathResultConstructorTable = { 33, 31, JSXPathResultConstructorTableValues, 0 };

COMPILE_ASSERT( 0 == XPathResult::ANY_TYPE, XPathResultEnumANY_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 1 == XPathResult::NUMBER_TYPE, XPathResultEnumNUMBER_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 2 == XPathResult::STRING_TYPE, XPathResultEnumSTRING_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 3 == XPathResult::BOOLEAN_TYPE, XPathResultEnumBOOLEAN_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 4 == XPathResult::UNORDERED_NODE_ITERATOR_TYPE,
                XPathResultEnumUNORDERED_NODE_ITERATOR_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 5 == XPathResult::ORDERED_NODE_ITERATOR_TYPE, XPathResultEnumORDERED_NODE_ITERATOR_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 6 == XPathResult::UNORDERED_NODE_SNAPSHOT_TYPE,
                XPathResultEnumUNORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 7 == XPathResult::ORDERED_NODE_SNAPSHOT_TYPE, XPathResultEnumORDERED_NODE_SNAPSHOT_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 8 == XPathResult::ANY_UNORDERED_NODE_TYPE, XPathResultEnumANY_UNORDERED_NODE_TYPEIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 9 == XPathResult::FIRST_ORDERED_NODE_TYPE, XPathResultEnumFIRST_ORDERED_NODE_TYPEIsWrongUseDontCheckEnums );

class JSXPathResultConstructor : public DOMConstructorObject
{
public:
    JSXPathResultConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSXPathResultConstructor::s_info = { "XPathResultConstructor", &DOMConstructorObject::s_info, &JSXPathResultConstructorTable, 0 };

JSXPathResultConstructor::JSXPathResultConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSXPathResultPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSXPathResultConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSXPathResultConstructor, JSDOMWrapper>( exec, &JSXPathResultConstructorTable, this, propertyName,
            slot );
}

bool JSXPathResultConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSXPathResultConstructor, JSDOMWrapper>( exec, &JSXPathResultConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSXPathResultPrototypeTableValues[13] =
{
    { "ANY_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultANY_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "NUMBER_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultNUMBER_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "STRING_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultSTRING_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "BOOLEAN_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultBOOLEAN_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "UNORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultUNORDERED_NODE_ITERATOR_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ORDERED_NODE_ITERATOR_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultORDERED_NODE_ITERATOR_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "UNORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultUNORDERED_NODE_SNAPSHOT_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ORDERED_NODE_SNAPSHOT_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultORDERED_NODE_SNAPSHOT_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ANY_UNORDERED_NODE_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultANY_UNORDERED_NODE_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "FIRST_ORDERED_NODE_TYPE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsXPathResultFIRST_ORDERED_NODE_TYPE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "iterateNext", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsXPathResultPrototypeFunctionIterateNext ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "snapshotItem", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsXPathResultPrototypeFunctionSnapshotItem ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSXPathResultPrototypeTable = { 33, 31, JSXPathResultPrototypeTableValues, 0 };
const ClassInfo JSXPathResultPrototype::s_info = { "XPathResultPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSXPathResultPrototypeTable, 0 };

JSObject *JSXPathResultPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSXPathResult>( exec, globalObject );
}

bool JSXPathResultPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticPropertySlot<JSXPathResultPrototype, JSObject>( exec, &JSXPathResultPrototypeTable, this, propertyName, slot );
}

bool JSXPathResultPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticPropertyDescriptor<JSXPathResultPrototype, JSObject>( exec, &JSXPathResultPrototypeTable, this, propertyName,
            descriptor );
}

const ClassInfo JSXPathResult::s_info = { "XPathResult", &JSDOMWrapper::s_info, &JSXPathResultTable, 0 };

JSXPathResult::JSXPathResult( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<XPathResult> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSXPathResult::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSXPathResultPrototype( exec->globalData(), globalObject,
            JSXPathResultPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSXPathResult::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSXPathResult, Base>( exec, &JSXPathResultTable, this, propertyName, slot );
}

bool JSXPathResult::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSXPathResult, Base>( exec, &JSXPathResultTable, this, propertyName, descriptor );
}

JSValue jsXPathResultResultType( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSValue result = jsNumber( imp->resultType() );
    return result;
}


JSValue jsXPathResultNumberValue( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSC::JSValue result = jsNumber( imp->numberValue( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsXPathResultStringValue( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSC::JSValue result = jsString( exec, imp->stringValue( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsXPathResultBooleanValue( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSC::JSValue result = jsBoolean( imp->booleanValue( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsXPathResultSingleNodeValue( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->singleNodeValue( ec ) ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsXPathResultInvalidIteratorState( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->invalidIteratorState() );
    return result;
}


JSValue jsXPathResultSnapshotLength( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    JSC::JSValue result = jsNumber( imp->snapshotLength( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsXPathResultConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSXPathResult *domObject = static_cast<JSXPathResult *>( asObject( slotBase ) );
    return JSXPathResult::getConstructor( exec, domObject->globalObject() );
}

JSValue JSXPathResult::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSXPathResultConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionIterateNext( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSXPathResult::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( thisValue ) );
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    ExceptionCode ec = 0;


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->iterateNext( ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsXPathResultPrototypeFunctionSnapshotItem( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSXPathResult::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSXPathResult *castedThis = static_cast<JSXPathResult *>( asObject( thisValue ) );
    XPathResult *imp = static_cast<XPathResult *>( castedThis->impl() );
    ExceptionCode ec = 0;
    unsigned index( exec->argument( 0 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->snapshotItem( index, ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

// Constant getters

JSValue jsXPathResultANY_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 0 ) );
}

JSValue jsXPathResultNUMBER_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 1 ) );
}

JSValue jsXPathResultSTRING_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 2 ) );
}

JSValue jsXPathResultBOOLEAN_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 3 ) );
}

JSValue jsXPathResultUNORDERED_NODE_ITERATOR_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 4 ) );
}

JSValue jsXPathResultORDERED_NODE_ITERATOR_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 5 ) );
}

JSValue jsXPathResultUNORDERED_NODE_SNAPSHOT_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 6 ) );
}

JSValue jsXPathResultORDERED_NODE_SNAPSHOT_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 7 ) );
}

JSValue jsXPathResultANY_UNORDERED_NODE_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 8 ) );
}

JSValue jsXPathResultFIRST_ORDERED_NODE_TYPE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 9 ) );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, XPathResult *impl )
{
    return wrap<JSXPathResult>( exec, globalObject, impl );
}

XPathResult *toXPathResult( JSC::JSValue value )
{
    return value.inherits( &JSXPathResult::s_info ) ? static_cast<JSXPathResult *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(XPATH)
