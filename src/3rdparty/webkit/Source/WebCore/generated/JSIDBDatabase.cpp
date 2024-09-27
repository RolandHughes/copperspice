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

#include "JSIDBDatabase.h"

#include "DOMStringList.h"
#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "IDBDatabase.h"
#include "IDBObjectStore.h"
#include "IDBTransaction.h"
#include "IDBVersionChangeRequest.h"
#include "JSDOMBinding.h"
#include "JSDOMStringList.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSIDBObjectStore.h"
#include "JSIDBTransaction.h"
#include "JSIDBVersionChangeRequest.h"
#include "JSOptionsObject.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSIDBDatabase );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseTableValues[8] =
{
    { "name", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "version", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseVersion ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "objectStoreNames", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseObjectStoreNames ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "onabort", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseOnabort ), ( intptr_t )setJSIDBDatabaseOnabort THUNK_GENERATOR( 0 ) },
    { "onerror", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseOnerror ), ( intptr_t )setJSIDBDatabaseOnerror THUNK_GENERATOR( 0 ) },
    { "onversionchange", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseOnversionchange ), ( intptr_t )setJSIDBDatabaseOnversionchange THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBDatabaseConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseTable = { 17, 15, JSIDBDatabaseTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabaseConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabaseConstructorTable = { 1, 0, JSIDBDatabaseConstructorTableValues, 0 };
class JSIDBDatabaseConstructor : public DOMConstructorObject
{
public:
    JSIDBDatabaseConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSIDBDatabaseConstructor::s_info = { "IDBDatabaseConstructor", &DOMConstructorObject::s_info, &JSIDBDatabaseConstructorTable, 0 };

JSIDBDatabaseConstructor::JSIDBDatabaseConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSIDBDatabasePrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSIDBDatabaseConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBDatabaseConstructor, JSDOMWrapper>( exec, &JSIDBDatabaseConstructorTable, this, propertyName,
            slot );
}

bool JSIDBDatabaseConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBDatabaseConstructor, JSDOMWrapper>( exec, &JSIDBDatabaseConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBDatabasePrototypeTableValues[9] =
{
    { "createObjectStore", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionCreateObjectStore ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "deleteObjectStore", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionDeleteObjectStore ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "setVersion", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionSetVersion ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "transaction", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionTransaction ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "close", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionClose ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "addEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionAddEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "removeEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionRemoveEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "dispatchEvent", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBDatabasePrototypeFunctionDispatchEvent ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBDatabasePrototypeTable = { 16, 15, JSIDBDatabasePrototypeTableValues, 0 };
const ClassInfo JSIDBDatabasePrototype::s_info = { "IDBDatabasePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBDatabasePrototypeTable, 0 };

JSObject *JSIDBDatabasePrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSIDBDatabase>( exec, globalObject );
}

bool JSIDBDatabasePrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSIDBDatabasePrototypeTable, this, propertyName, slot );
}

bool JSIDBDatabasePrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSIDBDatabasePrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSIDBDatabase::s_info = { "IDBDatabase", &JSDOMWrapper::s_info, &JSIDBDatabaseTable, 0 };

JSIDBDatabase::JSIDBDatabase( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<IDBDatabase> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

void JSIDBDatabase::visitChildren( SlotVisitor &visitor )
{
    Base::visitChildren( visitor );
    impl()->visitJSEventListeners( visitor );
}

JSObject *JSIDBDatabase::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSIDBDatabasePrototype( exec->globalData(), globalObject,
            JSIDBDatabasePrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSIDBDatabase::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBDatabase, Base>( exec, &JSIDBDatabaseTable, this, propertyName, slot );
}

bool JSIDBDatabase::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBDatabase, Base>( exec, &JSIDBDatabaseTable, this, propertyName, descriptor );
}

JSValue jsIDBDatabaseName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->name() );
    return result;
}


JSValue jsIDBDatabaseVersion( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->version() );
    return result;
}


JSValue jsIDBDatabaseObjectStoreNames( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->objectStoreNames() ) );
    return result;
}


JSValue jsIDBDatabaseOnabort( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );

    if ( EventListener *listener = imp->onabort() )
    {
        if ( const JSEventListener *jsListener = JSEventListener::cast( listener ) )
        {
            if ( JSObject *jsFunction = jsListener->jsFunction( imp->scriptExecutionContext() ) )
            {
                return jsFunction;
            }
        }
    }

    return jsNull();
}


JSValue jsIDBDatabaseOnerror( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );

    if ( EventListener *listener = imp->onerror() )
    {
        if ( const JSEventListener *jsListener = JSEventListener::cast( listener ) )
        {
            if ( JSObject *jsFunction = jsListener->jsFunction( imp->scriptExecutionContext() ) )
            {
                return jsFunction;
            }
        }
    }

    return jsNull();
}


JSValue jsIDBDatabaseOnversionchange( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );

    if ( EventListener *listener = imp->onversionchange() )
    {
        if ( const JSEventListener *jsListener = JSEventListener::cast( listener ) )
        {
            if ( JSObject *jsFunction = jsListener->jsFunction( imp->scriptExecutionContext() ) )
            {
                return jsFunction;
            }
        }
    }

    return jsNull();
}


JSValue jsIDBDatabaseConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBDatabase *domObject = static_cast<JSIDBDatabase *>( asObject( slotBase ) );
    return JSIDBDatabase::getConstructor( exec, domObject->globalObject() );
}

void JSIDBDatabase::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSIDBDatabase, Base>( exec, propertyName, value, &JSIDBDatabaseTable, this, slot );
}

void setJSIDBDatabaseOnabort( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( thisObject );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    imp->setOnabort( createJSAttributeEventListener( exec, value, thisObject ) );
}


void setJSIDBDatabaseOnerror( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( thisObject );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    imp->setOnerror( createJSAttributeEventListener( exec, value, thisObject ) );
}


void setJSIDBDatabaseOnversionchange( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( thisObject );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    imp->setOnversionchange( createJSAttributeEventListener( exec, value, thisObject ) );
}


JSValue JSIDBDatabase::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSIDBDatabaseConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionCreateObjectStore( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    ExceptionCode ec = 0;
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    int argsCount = exec->argumentCount();

    if ( argsCount <= 1 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->createObjectStore( name, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    OptionsObject *options( toOptionsObject( exec->argument( 1 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->createObjectStore( name, options, ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionDeleteObjectStore( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    ExceptionCode ec = 0;
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->deleteObjectStore( name, ec );
    setDOMException( exec, ec );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionSetVersion( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    const String &version( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->setVersion( scriptContext, version, ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionTransaction( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    ExceptionCode ec = 0;
    ScriptExecutionContext *scriptContext = static_cast<JSDOMGlobalObject *>( exec->lexicalGlobalObject() )->scriptExecutionContext();

    if ( !scriptContext )
    {
        return JSValue::encode( jsUndefined() );
    }

    int argsCount = exec->argumentCount();

    if ( argsCount <= 0 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->transaction( scriptContext, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    DOMStringList *storeNames( toDOMStringList( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    if ( argsCount <= 1 )
    {

        JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->transaction( scriptContext, storeNames, ec ) ) );
        setDOMException( exec, ec );
        return JSValue::encode( result );
    }

    unsigned short mode( exec->argument( 1 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->transaction( scriptContext, storeNames, mode,
                                ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionClose( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );

    imp->close();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionAddEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    JSValue listener = exec->argument( 1 );

    if ( !listener.isObject() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->addEventListener( ustringToAtomicString( exec->argument( 0 ).toString( exec ) ),
                           JSEventListener::create( asObject( listener ), castedThis, false, currentWorld( exec ) ), exec->argument( 2 ).toBoolean( exec ) );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionRemoveEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    JSValue listener = exec->argument( 1 );

    if ( !listener.isObject() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->removeEventListener( ustringToAtomicString( exec->argument( 0 ).toString( exec ) ),
                              JSEventListener::create( asObject( listener ), castedThis, false, currentWorld( exec ) ).get(),
                              exec->argument( 2 ).toBoolean( exec ) );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsIDBDatabasePrototypeFunctionDispatchEvent( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBDatabase::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBDatabase *castedThis = static_cast<JSIDBDatabase *>( asObject( thisValue ) );
    IDBDatabase *imp = static_cast<IDBDatabase *>( castedThis->impl() );
    ExceptionCode ec = 0;
    Event *evt( toEvent( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = jsBoolean( imp->dispatchEvent( evt, ec ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}

static inline bool isObservable( JSIDBDatabase *jsIDBDatabase )
{
    if ( jsIDBDatabase->hasCustomProperties() )
    {
        return true;
    }

    if ( jsIDBDatabase->impl()->hasEventListeners() )
    {
        return true;
    }

    return false;
}

bool JSIDBDatabaseOwner::isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown> handle, void *, SlotVisitor &visitor )
{
    JSIDBDatabase *jsIDBDatabase = static_cast<JSIDBDatabase *>( handle.get().asCell() );

    if ( jsIDBDatabase->impl()->hasPendingActivity() )
    {
        return true;
    }

    if ( !isObservable( jsIDBDatabase ) )
    {
        return false;
    }

    UNUSED_PARAM( visitor );
    return false;
}

void JSIDBDatabaseOwner::finalize( JSC::Handle<JSC::Unknown> handle, void *context )
{
    JSIDBDatabase *jsIDBDatabase = static_cast<JSIDBDatabase *>( handle.get().asCell() );
    DOMWrapperWorld *world = static_cast<DOMWrapperWorld *>( context );
    uncacheWrapper( world, jsIDBDatabase->impl(), jsIDBDatabase );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, IDBDatabase *impl )
{
    return wrap<JSIDBDatabase>( exec, globalObject, impl );
}

IDBDatabase *toIDBDatabase( JSC::JSValue value )
{
    return value.inherits( &JSIDBDatabase::s_info ) ? static_cast<JSIDBDatabase *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
