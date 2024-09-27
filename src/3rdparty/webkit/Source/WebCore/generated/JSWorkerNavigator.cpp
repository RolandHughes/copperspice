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

#if ENABLE(WORKERS)

#include "JSWorkerNavigator.h"

#include "KURL.h"
#include "WorkerNavigator.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSWorkerNavigator );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerNavigatorTableValues[6] =
{
    { "appName", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWorkerNavigatorAppName ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "appVersion", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWorkerNavigatorAppVersion ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "platform", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWorkerNavigatorPlatform ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "userAgent", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWorkerNavigatorUserAgent ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "onLine", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWorkerNavigatorOnLine ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerNavigatorTable = { 18, 15, JSWorkerNavigatorTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWorkerNavigatorPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWorkerNavigatorPrototypeTable = { 1, 0, JSWorkerNavigatorPrototypeTableValues, 0 };
static const HashTable *getJSWorkerNavigatorPrototypeTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSWorkerNavigatorPrototypeTable );
}

const ClassInfo JSWorkerNavigatorPrototype::s_info = { "WorkerNavigatorPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSWorkerNavigatorPrototypeTable };

JSObject *JSWorkerNavigatorPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSWorkerNavigator>( exec, globalObject );
}

static const HashTable *getJSWorkerNavigatorTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSWorkerNavigatorTable );
}

const ClassInfo JSWorkerNavigator::s_info = { "WorkerNavigator", &JSDOMWrapper::s_info, 0, getJSWorkerNavigatorTable };

JSWorkerNavigator::JSWorkerNavigator( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<WorkerNavigator> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSWorkerNavigator::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSWorkerNavigatorPrototype( exec->globalData(), globalObject,
            JSWorkerNavigatorPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSWorkerNavigator::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSWorkerNavigator, Base>( exec, getJSWorkerNavigatorTable( exec ), this, propertyName, slot );
}

bool JSWorkerNavigator::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSWorkerNavigator, Base>( exec, getJSWorkerNavigatorTable( exec ), this, propertyName,
            descriptor );
}

JSValue jsWorkerNavigatorAppName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWorkerNavigator *castedThis = static_cast<JSWorkerNavigator *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    WorkerNavigator *imp = static_cast<WorkerNavigator *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->appName() );
    return result;
}


JSValue jsWorkerNavigatorAppVersion( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWorkerNavigator *castedThis = static_cast<JSWorkerNavigator *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    WorkerNavigator *imp = static_cast<WorkerNavigator *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->appVersion() );
    return result;
}


JSValue jsWorkerNavigatorPlatform( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWorkerNavigator *castedThis = static_cast<JSWorkerNavigator *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    WorkerNavigator *imp = static_cast<WorkerNavigator *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->platform() );
    return result;
}


JSValue jsWorkerNavigatorUserAgent( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWorkerNavigator *castedThis = static_cast<JSWorkerNavigator *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    WorkerNavigator *imp = static_cast<WorkerNavigator *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->userAgent() );
    return result;
}


JSValue jsWorkerNavigatorOnLine( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWorkerNavigator *castedThis = static_cast<JSWorkerNavigator *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    WorkerNavigator *imp = static_cast<WorkerNavigator *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->onLine() );
    return result;
}


static inline bool isObservable( JSWorkerNavigator *jsWorkerNavigator )
{
    if ( jsWorkerNavigator->hasCustomProperties() )
    {
        return true;
    }

    return false;
}

bool JSWorkerNavigatorOwner::isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown> handle, void *, SlotVisitor &visitor )
{
    JSWorkerNavigator *jsWorkerNavigator = static_cast<JSWorkerNavigator *>( handle.get().asCell() );

    if ( !isObservable( jsWorkerNavigator ) )
    {
        return false;
    }

    WorkerNavigator *root = jsWorkerNavigator->impl();
    return visitor.containsOpaqueRoot( root );
}

void JSWorkerNavigatorOwner::finalize( JSC::Handle<JSC::Unknown> handle, void *context )
{
    JSWorkerNavigator *jsWorkerNavigator = static_cast<JSWorkerNavigator *>( handle.get().asCell() );
    DOMWrapperWorld *world = static_cast<DOMWrapperWorld *>( context );
    uncacheWrapper( world, jsWorkerNavigator->impl(), jsWorkerNavigator );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, WorkerNavigator *impl )
{
    return wrap<JSWorkerNavigator>( exec, globalObject, impl );
}

WorkerNavigator *toWorkerNavigator( JSC::JSValue value )
{
    return value.inherits( &JSWorkerNavigator::s_info ) ? static_cast<JSWorkerNavigator *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(WORKERS)
