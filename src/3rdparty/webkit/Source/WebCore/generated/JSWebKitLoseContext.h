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

#ifndef JSWebKitLoseContext_h
#define JSWebKitLoseContext_h

#if ENABLE(WEBGL)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore
{

class WebKitLoseContext;

class JSWebKitLoseContext : public JSDOMWrapper
{
    typedef JSDOMWrapper Base;
public:
    JSWebKitLoseContext( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<WebKitLoseContext> );
    static JSC::JSObject *createPrototype( JSC::ExecState *, JSC::JSGlobalObject * );
    static const JSC::ClassInfo s_info;

    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }

    WebKitLoseContext *impl() const
    {
        return m_impl.get();
    }

private:
    RefPtr<WebKitLoseContext> m_impl;
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

class JSWebKitLoseContextOwner : public JSC::WeakHandleOwner
{
    virtual bool isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown>, void *context, JSC::SlotVisitor & );
    virtual void finalize( JSC::Handle<JSC::Unknown>, void *context );
};

inline JSC::WeakHandleOwner *wrapperOwner( DOMWrapperWorld *, WebKitLoseContext * )
{
    DEFINE_STATIC_LOCAL( JSWebKitLoseContextOwner, jsWebKitLoseContextOwner, () );
    return &jsWebKitLoseContextOwner;
}

inline void *wrapperContext( DOMWrapperWorld *world, WebKitLoseContext * )
{
    return world;
}

JSC::JSValue toJS( JSC::ExecState *, JSDOMGlobalObject *, WebKitLoseContext * );
WebKitLoseContext *toWebKitLoseContext( JSC::JSValue );

class JSWebKitLoseContextPrototype : public JSC::JSObjectWithGlobalObject
{
    typedef JSC::JSObjectWithGlobalObject Base;
public:
    static JSC::JSObject *self( JSC::ExecState *, JSC::JSGlobalObject * );
    static const JSC::ClassInfo s_info;
    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &, JSC::PropertyDescriptor & );
    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }
    JSWebKitLoseContextPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                                  JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsWebKitLoseContextPrototypeFunctionLoseContext( JSC::ExecState * );

} // namespace WebCore

#endif // ENABLE(WEBGL)

#endif
