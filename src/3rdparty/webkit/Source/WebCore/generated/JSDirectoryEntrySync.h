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

#ifndef JSDirectoryEntrySync_h
#define JSDirectoryEntrySync_h

#if ENABLE(FILE_SYSTEM)

#include "DirectoryEntrySync.h"
#include "JSEntrySync.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore
{

class DirectoryEntrySync;

class JSDirectoryEntrySync : public JSEntrySync
{
    typedef JSEntrySync Base;
public:
    JSDirectoryEntrySync( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<DirectoryEntrySync> );
    static JSC::JSObject *createPrototype( JSC::ExecState *, JSC::JSGlobalObject * );
    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertyDescriptor & );
    static const JSC::ClassInfo s_info;

    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }

    static JSC::JSValue getConstructor( JSC::ExecState *, JSC::JSGlobalObject * );

    // Custom functions
    JSC::JSValue getFile( JSC::ExecState * );
    JSC::JSValue getDirectory( JSC::ExecState * );
    DirectoryEntrySync *impl() const
    {
        return static_cast<DirectoryEntrySync *>( Base::impl() );
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

JSC::JSValue toJS( JSC::ExecState *, JSDOMGlobalObject *, DirectoryEntrySync * );
DirectoryEntrySync *toDirectoryEntrySync( JSC::JSValue );

class JSDirectoryEntrySyncPrototype : public JSC::JSObjectWithGlobalObject
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
    JSDirectoryEntrySyncPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                                   JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionCreateReader( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetFile( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionGetDirectory( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsDirectoryEntrySyncPrototypeFunctionRemoveRecursively( JSC::ExecState * );
// Attributes

JSC::JSValue jsDirectoryEntrySyncConstructor( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );

} // namespace WebCore

#endif // ENABLE(FILE_SYSTEM)

#endif
