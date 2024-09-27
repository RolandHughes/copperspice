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

#ifndef JSPerformanceTiming_h
#define JSPerformanceTiming_h

#if ENABLE(WEB_TIMING)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore
{

class PerformanceTiming;

class JSPerformanceTiming : public JSDOMWrapper
{
    typedef JSDOMWrapper Base;
public:
    JSPerformanceTiming( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<PerformanceTiming> );
    static JSC::JSObject *createPrototype( JSC::ExecState *, JSC::JSGlobalObject * );
    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertyDescriptor & );
    static const JSC::ClassInfo s_info;

    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }

    PerformanceTiming *impl() const
    {
        return m_impl.get();
    }

private:
    RefPtr<PerformanceTiming> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS( JSC::ExecState *, JSDOMGlobalObject *, PerformanceTiming * );
PerformanceTiming *toPerformanceTiming( JSC::JSValue );

class JSPerformanceTimingPrototype : public JSC::JSObjectWithGlobalObject
{
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject *self( JSC::ExecState *, JSC::JSGlobalObject * );
    static const JSC::ClassInfo s_info;
    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }
    JSPerformanceTimingPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                                  JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsPerformanceTimingNavigationStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingUnloadEventStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingUnloadEventEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingRedirectStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingRedirectEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingFetchStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomainLookupStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomainLookupEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingConnectStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingConnectEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingSecureConnectionStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingRequestStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingResponseStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingResponseEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomLoading( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomInteractive( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomContentLoadedEventStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomContentLoadedEventEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingDomComplete( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingLoadEventStart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsPerformanceTimingLoadEventEnd( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );

} // namespace WebCore

#endif // ENABLE(WEB_TIMING)

#endif
