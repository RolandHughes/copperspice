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

#ifndef JSEntryArraySync_h
#define JSEntryArraySync_h

#if ENABLE(FILE_SYSTEM)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore
{

class EntryArraySync;

class JSEntryArraySync : public JSDOMWrapper
{
    typedef JSDOMWrapper Base;
public:
    JSEntryArraySync( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<EntryArraySync> );
    static JSC::JSObject *createPrototype( JSC::ExecState *, JSC::JSGlobalObject * );
    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertyDescriptor & );
    virtual bool getOwnPropertySlot( JSC::ExecState *, unsigned propertyName, JSC::PropertySlot & );
    static const JSC::ClassInfo s_info;

    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }

    virtual void getOwnPropertyNames( JSC::ExecState *, JSC::PropertyNameArray &,
                                      JSC::EnumerationMode mode = JSC::ExcludeDontEnumProperties );
    static JSC::JSValue getConstructor( JSC::ExecState *, JSC::JSGlobalObject * );
    EntryArraySync *impl() const
    {
        return m_impl.get();
    }

private:
    RefPtr<EntryArraySync> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetPropertyNames | JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
    static JSC::JSValue indexGetter( JSC::ExecState *, JSC::JSValue, unsigned );
};

JSC::JSValue toJS( JSC::ExecState *, JSDOMGlobalObject *, EntryArraySync * );
EntryArraySync *toEntryArraySync( JSC::JSValue );

class JSEntryArraySyncPrototype : public JSC::JSObjectWithGlobalObject
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
    JSEntryArraySyncPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                               JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsEntryArraySyncPrototypeFunctionItem( JSC::ExecState * );
// Attributes

JSC::JSValue jsEntryArraySyncLength( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsEntryArraySyncConstructor( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)

#endif
