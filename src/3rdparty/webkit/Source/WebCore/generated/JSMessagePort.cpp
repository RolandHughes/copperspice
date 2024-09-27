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
#include "JSMessagePort.h"

#include "Event.h"
#include "EventListener.h"
#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSEvent.h"
#include "JSEventListener.h"
#include "MessagePort.h"
#include "PlatformString.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSMessagePort );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMessagePortTableValues[3] =
{
    { "onmessage", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsMessagePortOnmessage ), ( intptr_t )setJSMessagePortOnmessage THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsMessagePortConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMessagePortTable = { 4, 3, JSMessagePortTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMessagePortConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMessagePortConstructorTable = { 1, 0, JSMessagePortConstructorTableValues, 0 };
class JSMessagePortConstructor : public DOMConstructorObject
{
public:
    JSMessagePortConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSMessagePortConstructor::s_info = { "MessagePortConstructor", &DOMConstructorObject::s_info, &JSMessagePortConstructorTable, 0 };

JSMessagePortConstructor::JSMessagePortConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSMessagePortPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSMessagePortConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSMessagePortConstructor, JSDOMWrapper>( exec, &JSMessagePortConstructorTable, this, propertyName,
            slot );
}

bool JSMessagePortConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSMessagePortConstructor, JSDOMWrapper>( exec, &JSMessagePortConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSMessagePortPrototypeTableValues[7] =
{
    { "postMessage", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionPostMessage ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "start", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "close", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionClose ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "addEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionAddEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "removeEventListener", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionRemoveEventListener ), ( intptr_t )3 THUNK_GENERATOR( 0 ) },
    { "dispatchEvent", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsMessagePortPrototypeFunctionDispatchEvent ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSMessagePortPrototypeTable = { 17, 15, JSMessagePortPrototypeTableValues, 0 };
static const HashTable *getJSMessagePortPrototypeTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSMessagePortPrototypeTable );
}

const ClassInfo JSMessagePortPrototype::s_info = { "MessagePortPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSMessagePortPrototypeTable };

JSObject *JSMessagePortPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSMessagePort>( exec, globalObject );
}

bool JSMessagePortPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, getJSMessagePortPrototypeTable( exec ), this, propertyName, slot );
}

bool JSMessagePortPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, getJSMessagePortPrototypeTable( exec ), this, propertyName, descriptor );
}

static const HashTable *getJSMessagePortTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSMessagePortTable );
}

const ClassInfo JSMessagePort::s_info = { "MessagePort", &JSDOMWrapper::s_info, 0, getJSMessagePortTable };

JSMessagePort::JSMessagePort( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<MessagePort> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSMessagePort::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSMessagePortPrototype( exec->globalData(), globalObject,
            JSMessagePortPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSMessagePort::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSMessagePort, Base>( exec, getJSMessagePortTable( exec ), this, propertyName, slot );
}

bool JSMessagePort::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSMessagePort, Base>( exec, getJSMessagePortTable( exec ), this, propertyName, descriptor );
}

JSValue jsMessagePortOnmessage( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );

    if ( EventListener *listener = imp->onmessage() )
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


JSValue jsMessagePortConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSMessagePort *domObject = static_cast<JSMessagePort *>( asObject( slotBase ) );
    return JSMessagePort::getConstructor( exec, domObject->globalObject() );
}

void JSMessagePort::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSMessagePort, Base>( exec, propertyName, value, getJSMessagePortTable( exec ), this, slot );
}

void setJSMessagePortOnmessage( ExecState *exec, JSObject *thisObject, JSValue value )
{
    UNUSED_PARAM( exec );
    JSMessagePort *castedThis = static_cast<JSMessagePort *>( thisObject );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );
    imp->setOnmessage( createJSAttributeEventListener( exec, value, thisObject ) );
}


JSValue JSMessagePort::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSMessagePortConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionPostMessage( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->postMessage( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionStart( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );

    imp->start();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionClose( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );

    imp->close();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionAddEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );
    JSValue listener = exec->argument( 1 );

    if ( !listener.isObject() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->addEventListener( ustringToAtomicString( exec->argument( 0 ).toString( exec ) ),
                           JSEventListener::create( asObject( listener ), castedThis, false, currentWorld( exec ) ), exec->argument( 2 ).toBoolean( exec ) );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionRemoveEventListener( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );
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

EncodedJSValue JSC_HOST_CALL jsMessagePortPrototypeFunctionDispatchEvent( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSMessagePort::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSMessagePort *castedThis = static_cast<JSMessagePort *>( asObject( thisValue ) );
    MessagePort *imp = static_cast<MessagePort *>( castedThis->impl() );
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

static inline bool isObservable( JSMessagePort *jsMessagePort )
{
    if ( jsMessagePort->hasCustomProperties() )
    {
        return true;
    }

    if ( jsMessagePort->impl()->hasEventListeners() )
    {
        return true;
    }

    return false;
}

bool JSMessagePortOwner::isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown> handle, void *, SlotVisitor &visitor )
{
    JSMessagePort *jsMessagePort = static_cast<JSMessagePort *>( handle.get().asCell() );

    if ( jsMessagePort->impl()->hasPendingActivity() )
    {
        return true;
    }

    if ( !isObservable( jsMessagePort ) )
    {
        return false;
    }

    MessagePort *root = jsMessagePort->impl();
    return visitor.containsOpaqueRoot( root );
}

void JSMessagePortOwner::finalize( JSC::Handle<JSC::Unknown> handle, void *context )
{
    JSMessagePort *jsMessagePort = static_cast<JSMessagePort *>( handle.get().asCell() );
    DOMWrapperWorld *world = static_cast<DOMWrapperWorld *>( context );
    uncacheWrapper( world, jsMessagePort->impl(), jsMessagePort );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, MessagePort *impl )
{
    return wrap<JSMessagePort>( exec, globalObject, impl );
}

MessagePort *toMessagePort( JSC::JSValue value )
{
    return value.inherits( &JSMessagePort::s_info ) ? static_cast<JSMessagePort *>( asObject( value ) )->impl() : 0;
}

}
