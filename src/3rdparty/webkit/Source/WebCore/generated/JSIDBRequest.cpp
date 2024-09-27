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

#include "JSIDBRequest.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "IDBAny.h"
#include "IDBRequest.h"
#include "IDBTransaction.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "JSIDBAny.h"
#include "JSIDBTransaction.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSIDBRequest );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBRequestTableValues[10] =
{
    { "result", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestResult ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "errorCode", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestErrorCode ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "webkitErrorMessage", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestWebkitErrorMessage ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "source", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestSource ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "transaction", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestTransaction ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "readyState", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestReadyState ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "onsuccess", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestOnsuccess ), ( intptr_t )setJSIDBRequestOnsuccess THUNK_GENERATOR( 0 ) },
    { "onerror", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestOnerror ), ( intptr_t )setJSIDBRequestOnerror THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBRequestTable = { 33, 31, JSIDBRequestTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBRequestConstructorTableValues[3] =
{
    { "LOADING", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestLOADING ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "DONE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestDONE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBRequestConstructorTable = { 4, 3, JSIDBRequestConstructorTableValues, 0 };

COMPILE_ASSERT( 1 == IDBRequest::LOADING, IDBRequestEnumLOADINGIsWrongUseDontCheckEnums );
COMPILE_ASSERT( 2 == IDBRequest::DONE, IDBRequestEnumDONEIsWrongUseDontCheckEnums );

class JSIDBRequestConstructor : public DOMConstructorObject
{
public:
    JSIDBRequestConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSIDBRequestConstructor::s_info = { "IDBRequestConstructor", &DOMConstructorObject::s_info, &JSIDBRequestConstructorTable, 0 };

JSIDBRequestConstructor::JSIDBRequestConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSIDBRequestPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSIDBRequestConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBRequestConstructor, JSDOMWrapper>( exec, &JSIDBRequestConstructorTable, this, propertyName, slot );
}

bool JSIDBRequestConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBRequestConstructor, JSDOMWrapper>( exec, &JSIDBRequestConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBRequestPrototypeTableValues[6] =
{
    { "LOADING", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestLOADING ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "DONE", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBRequestDONE ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "addEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBRequestPrototypeFunctionAddEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "removeEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBRequestPrototypeFunctionRemoveEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "dispatchEvent", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsIDBRequestPrototypeFunctionDispatchEvent ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBRequestPrototypeTable = { 16, 15, JSIDBRequestPrototypeTableValues, 0 };
const ClassInfo JSIDBRequestPrototype::s_info = { "IDBRequestPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBRequestPrototypeTable, 0 };

JSObject *JSIDBRequestPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSIDBRequest>( exec, globalObject );
}

bool JSIDBRequestPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticPropertySlot<JSIDBRequestPrototype, JSObject>( exec, &JSIDBRequestPrototypeTable, this, propertyName, slot );
}

bool JSIDBRequestPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticPropertyDescriptor<JSIDBRequestPrototype, JSObject>( exec, &JSIDBRequestPrototypeTable, this, propertyName,
            descriptor );
}

const ClassInfo JSIDBRequest::s_info = { "IDBRequest", &JSDOMWrapper::s_info, &JSIDBRequestTable, 0 };

JSIDBRequest::JSIDBRequest( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<IDBRequest> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

void JSIDBRequest::visitChildren( SlotVisitor &visitor )
{
    Base::visitChildren( visitor );
    impl()->visitJSEventListeners( visitor );
}

JSObject *JSIDBRequest::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSIDBRequestPrototype( exec->globalData(), globalObject,
            JSIDBRequestPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSIDBRequest::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBRequest, Base>( exec, &JSIDBRequestTable, this, propertyName, slot );
}

bool JSIDBRequest::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBRequest, Base>( exec, &JSIDBRequestTable, this, propertyName, descriptor );
}

JSValue jsIDBRequestResult( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->result( ec ) ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsIDBRequestErrorCode( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSC::JSValue result = jsNumber( imp->errorCode( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsIDBRequestWebkitErrorMessage( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    ExceptionCode ec = 0;
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSC::JSValue result = jsStringOrUndefined( exec, imp->webkitErrorMessage( ec ) );
    setDOMException( exec, ec );
    return result;
}


JSValue jsIDBRequestSource( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->source() ) );
    return result;
}


JSValue jsIDBRequestTransaction( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->transaction() ) );
    return result;
}


JSValue jsIDBRequestReadyState( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSValue result = jsNumber( imp->readyState() );
    return result;
}


JSValue jsIDBRequestOnsuccess( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );

    if ( EventListener *listener = imp->onsuccess() )
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


JSValue jsIDBRequestOnerror( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );

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


JSValue jsIDBRequestConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBRequest *domObject = static_cast<JSIDBRequest *>( asObject( slotBase ) );
    return JSIDBRequest::getConstructor( exec, domObject->globalObject() );
}

void JSIDBRequest::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSIDBRequest, Base>( exec, propertyName, value, &JSIDBRequestTable, this, slot );
}

void setJSIDBRequestOnsuccess( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( thisObject );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    imp->setOnsuccess( createJSAttributeEventListener( exec, value, thisObject ) );
}


void setJSIDBRequestOnerror( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( thisObject );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    imp->setOnerror( createJSAttributeEventListener( exec, value, thisObject ) );
}


JSValue JSIDBRequest::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSIDBRequestConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsIDBRequestPrototypeFunctionAddEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBRequest::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( thisValue ) );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
    JSValue listener = exec->argument( 1 );

    if ( !listener.isObject() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->addEventListener( ustringToAtomicString( exec->argument( 0 ).toString( exec ) ),
                           JSEventListener::create( asObject( listener ), castedThis, false, currentWorld( exec ) ), exec->argument( 2 ).toBoolean( exec ) );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsIDBRequestPrototypeFunctionRemoveEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBRequest::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( thisValue ) );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
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

EncodedJSValue JSC_HOST_CALL jsIDBRequestPrototypeFunctionDispatchEvent( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSIDBRequest::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSIDBRequest *castedThis = static_cast<JSIDBRequest *>( asObject( thisValue ) );
    IDBRequest *imp = static_cast<IDBRequest *>( castedThis->impl() );
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

// Constant getters

JSValue jsIDBRequestLOADING( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 1 ) );
}

JSValue jsIDBRequestDONE( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 2 ) );
}

static inline bool isObservable( JSIDBRequest *jsIDBRequest )
{
    if ( jsIDBRequest->hasCustomProperties() )
    {
        return true;
    }

    if ( jsIDBRequest->impl()->hasEventListeners() )
    {
        return true;
    }

    return false;
}

bool JSIDBRequestOwner::isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown> handle, void *, SlotVisitor &visitor )
{
    JSIDBRequest *jsIDBRequest = static_cast<JSIDBRequest *>( handle.get().asCell() );

    if ( jsIDBRequest->impl()->hasPendingActivity() )
    {
        return true;
    }

    if ( !isObservable( jsIDBRequest ) )
    {
        return false;
    }

    UNUSED_PARAM( visitor );
    return false;
}

void JSIDBRequestOwner::finalize( JSC::Handle<JSC::Unknown> handle, void *context )
{
    JSIDBRequest *jsIDBRequest = static_cast<JSIDBRequest *>( handle.get().asCell() );
    DOMWrapperWorld *world = static_cast<DOMWrapperWorld *>( context );
    uncacheWrapper( world, jsIDBRequest->impl(), jsIDBRequest );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, IDBRequest *impl )
{
    return wrap<JSIDBRequest>( exec, globalObject, impl );
}

IDBRequest *toIDBRequest( JSC::JSValue value )
{
    return value.inherits( &JSIDBRequest::s_info ) ? static_cast<JSIDBRequest *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
