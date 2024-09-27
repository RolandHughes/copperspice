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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBIndex.h"

#include "ExceptionCode.h"
#include "IDBBindingUtilities.h"
#include "IDBIndex.h"
#include "IDBKey.h"
#include "IDBObjectStore.h"
#include "IDBRequest.h"
#include "JSDOMBinding.h"
#include "JSIDBKeyRange.h"
#include "JSIDBObjectStore.h"
#include "JSIDBRequest.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSIDBIndex );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBIndexTableValues[6] =
{
    { "name", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBIndexName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "objectStore", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBIndexObjectStore ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "keyPath", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBIndexKeyPath ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "unique", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBIndexUnique ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBIndexConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBIndexTable = { 17, 15, JSIDBIndexTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBIndexConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBIndexConstructorTable = { 1, 0, JSIDBIndexConstructorTableValues, 0 };
class JSIDBIndexConstructor : public DOMConstructorObject
{
public:
    JSIDBIndexConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSIDBIndexConstructor::s_info = { "IDBIndexConstructor", &DOMConstructorObject::s_info, &JSIDBIndexConstructorTable, 0 };

JSIDBIndexConstructor::JSIDBIndexConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSIDBIndexPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSIDBIndexConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBIndexConstructor, JSDOMWrapper>( exec, &JSIDBIndexConstructorTable, this, propertyName, slot );
}

bool JSIDBIndexConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBIndexConstructor, JSDOMWrapper>( exec, &JSIDBIndexConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBIndexPrototypeTableValues[5] =
{
    { "openCursor", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBIndexPrototypeFunctionOpenCursor ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "openKeyCursor", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBIndexPrototypeFunctionOpenKeyCursor ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "get", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBIndexPrototypeFunctionGet ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "getKey", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBIndexPrototypeFunctionGetKey ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBIndexPrototypeTable = { 8, 7, JSIDBIndexPrototypeTableValues, 0 };
const ClassInfo JSIDBIndexPrototype::s_info = { "IDBIndexPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBIndexPrototypeTable, 0 };

JSObject *JSIDBIndexPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSIDBIndex>( exec, globalObject );
}

bool JSIDBIndexPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSIDBIndexPrototypeTable, this, propertyName, slot );
}

bool JSIDBIndexPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSIDBIndexPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSIDBIndex::s_info = { "IDBIndex", &JSDOMWrapper::s_info, &JSIDBIndexTable, 0 };

JSIDBIndex::JSIDBIndex( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<IDBIndex> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSIDBIndex::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSIDBIndexPrototype( exec->globalData(), globalObject,
            JSIDBIndexPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSIDBIndex::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBIndex, Base>( exec, &JSIDBIndexTable, this, propertyName, slot );
}

bool JSIDBIndex::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBIndex, Base>( exec, &JSIDBIndexTable, this, propertyName, descriptor );
}

JSValue jsIDBIndexName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->name() );
    return result;
}


JSValue jsIDBIndexObjectStore( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->objectStore() ) );
    return result;
}


JSValue jsIDBIndexKeyPath( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->keyPath() );
    return result;
}


JSValue jsIDBIndexUnique( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->unique() );
    return result;
}


JSValue jsIDBIndexConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBIndex *domObject = static_cast<JSIDBIndex *>( asObject( slotBase ) );
    return JSIDBIndex::getConstructor( exec, domObject->globalObject() );
}

JSValue JSIDBIndex::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSIDBIndexConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsIDBIndexPrototypeFunctionOpenCursor( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBIndex::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( thisValue ) );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    int argsCount = exec->argumentCount();

    if ( argsCount <= 0 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openCursor( scriptContext, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    IDBKeyRange *range( toIDBKeyRange( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    if ( argsCount <= 1 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openCursor( scriptContext, range, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    unsigned short direction( exec->argument( 1 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openCursor( scriptContext, range, direction,
                                ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBIndexPrototypeFunctionOpenKeyCursor( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBIndex::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( thisValue ) );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    int argsCount = exec->argumentCount();

    if ( argsCount <= 0 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openKeyCursor( scriptContext, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    IDBKeyRange *range( toIDBKeyRange( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    if ( argsCount <= 1 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openKeyCursor( scriptContext, range, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    unsigned short direction( exec->argument( 1 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->openKeyCursor( scriptContext, range, direction,
                                ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBIndexPrototypeFunctionGet( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBIndex::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( thisValue ) );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    RefPtr<IDBKey> key( createIDBKeyFromValue( exec, exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->get( scriptContext, key, ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBIndexPrototypeFunctionGetKey( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBIndex::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBIndex *castedThis = static_cast<JSIDBIndex *>( asObject( thisValue ) );
    IDBIndex *imp = static_cast<IDBIndex *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    RefPtr<IDBKey> key( createIDBKeyFromValue( exec, exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->getKey( scriptContext, key, ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, IDBIndex *impl )
{
    return wrap<JSIDBIndex>( exec, globalObject, impl );
}

IDBIndex *toIDBIndex( JSC::JSValue value )
{
    return value.inherits( &JSIDBIndex::s_info ) ? static_cast<JSIDBIndex *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
