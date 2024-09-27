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

#if ENABLE(WEB_TIMING)

#include "JSPerformanceTiming.h"

#include "PerformanceTiming.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSPerformanceTiming );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSPerformanceTimingTableValues[22] =
{
    { "navigationStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingNavigationStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "unloadEventStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingUnloadEventStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "unloadEventEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingUnloadEventEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "redirectStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingRedirectStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "redirectEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingRedirectEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "fetchStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingFetchStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domainLookupStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomainLookupStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domainLookupEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomainLookupEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "connectStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingConnectStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "connectEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingConnectEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "secureConnectionStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingSecureConnectionStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "requestStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingRequestStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "responseStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingResponseStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "responseEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingResponseEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domLoading", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomLoading ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domInteractive", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomInteractive ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domContentLoadedEventStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomContentLoadedEventStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domContentLoadedEventEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomContentLoadedEventEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "domComplete", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingDomComplete ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "loadEventStart", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingLoadEventStart ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "loadEventEnd", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsPerformanceTimingLoadEventEnd ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSPerformanceTimingTable = { 67, 63, JSPerformanceTimingTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSPerformanceTimingPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSPerformanceTimingPrototypeTable = { 1, 0, JSPerformanceTimingPrototypeTableValues, 0 };
const ClassInfo JSPerformanceTimingPrototype::s_info = { "PerformanceTimingPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSPerformanceTimingPrototypeTable, 0 };

JSObject *JSPerformanceTimingPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSPerformanceTiming>( exec, globalObject );
}

const ClassInfo JSPerformanceTiming::s_info = { "PerformanceTiming", &JSDOMWrapper::s_info, &JSPerformanceTimingTable, 0 };

JSPerformanceTiming::JSPerformanceTiming( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<PerformanceTiming> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSPerformanceTiming::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSPerformanceTimingPrototype( exec->globalData(), globalObject,
            JSPerformanceTimingPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSPerformanceTiming::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSPerformanceTiming, Base>( exec, &JSPerformanceTimingTable, this, propertyName, slot );
}

bool JSPerformanceTiming::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSPerformanceTiming, Base>( exec, &JSPerformanceTimingTable, this, propertyName, descriptor );
}

JSValue jsPerformanceTimingNavigationStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->navigationStart() );
    return result;
}


JSValue jsPerformanceTimingUnloadEventStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->unloadEventStart() );
    return result;
}


JSValue jsPerformanceTimingUnloadEventEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->unloadEventEnd() );
    return result;
}


JSValue jsPerformanceTimingRedirectStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->redirectStart() );
    return result;
}


JSValue jsPerformanceTimingRedirectEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->redirectEnd() );
    return result;
}


JSValue jsPerformanceTimingFetchStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->fetchStart() );
    return result;
}


JSValue jsPerformanceTimingDomainLookupStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domainLookupStart() );
    return result;
}


JSValue jsPerformanceTimingDomainLookupEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domainLookupEnd() );
    return result;
}


JSValue jsPerformanceTimingConnectStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->connectStart() );
    return result;
}


JSValue jsPerformanceTimingConnectEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->connectEnd() );
    return result;
}


JSValue jsPerformanceTimingSecureConnectionStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->secureConnectionStart() );
    return result;
}


JSValue jsPerformanceTimingRequestStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->requestStart() );
    return result;
}


JSValue jsPerformanceTimingResponseStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->responseStart() );
    return result;
}


JSValue jsPerformanceTimingResponseEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->responseEnd() );
    return result;
}


JSValue jsPerformanceTimingDomLoading( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domLoading() );
    return result;
}


JSValue jsPerformanceTimingDomInteractive( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domInteractive() );
    return result;
}


JSValue jsPerformanceTimingDomContentLoadedEventStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domContentLoadedEventStart() );
    return result;
}


JSValue jsPerformanceTimingDomContentLoadedEventEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domContentLoadedEventEnd() );
    return result;
}


JSValue jsPerformanceTimingDomComplete( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->domComplete() );
    return result;
}


JSValue jsPerformanceTimingLoadEventStart( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->loadEventStart() );
    return result;
}


JSValue jsPerformanceTimingLoadEventEnd( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSPerformanceTiming *castedThis = static_cast<JSPerformanceTiming *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    PerformanceTiming *imp = static_cast<PerformanceTiming *>( castedThis->impl() );
    JSValue result = jsNumber( imp->loadEventEnd() );
    return result;
}


JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, PerformanceTiming *impl )
{
    return wrap<JSPerformanceTiming>( exec, globalObject, impl );
}

PerformanceTiming *toPerformanceTiming( JSC::JSValue value )
{
    return value.inherits( &JSPerformanceTiming::s_info ) ? static_cast<JSPerformanceTiming *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(WEB_TIMING)
