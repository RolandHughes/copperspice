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

#ifndef JSFileReader_h
#define JSFileReader_h

#if ENABLE(BLOB)

#include "JSDOMBinding.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObjectWithGlobalObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore
{

class FileReader;

class JSFileReader : public JSDOMWrapper
{
    typedef JSDOMWrapper Base;
public:
    JSFileReader( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<FileReader> );
    static JSC::JSObject *createPrototype( JSC::ExecState *, JSC::JSGlobalObject * );
    virtual bool getOwnPropertySlot( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertySlot & );
    virtual bool getOwnPropertyDescriptor( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::PropertyDescriptor & );
    virtual void put( JSC::ExecState *, const JSC::Identifier &propertyName, JSC::JSValue, JSC::PutPropertySlot & );
    static const JSC::ClassInfo s_info;

    static JSC::Structure *createStructure( JSC::JSGlobalData &globalData, JSC::JSValue prototype )
    {
        return JSC::Structure::create( globalData, prototype, JSC::TypeInfo( JSC::ObjectType, StructureFlags ), AnonymousSlotCount,
                                       &s_info );
    }

    virtual void visitChildren( JSC::SlotVisitor & );

    static JSC::JSValue getConstructor( JSC::ExecState *, JSC::JSGlobalObject * );

    // Custom attributes
    JSC::JSValue result( JSC::ExecState * ) const;
    FileReader *impl() const
    {
        return m_impl.get();
    }

private:
    RefPtr<FileReader> m_impl;
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSFileReaderOwner : public JSC::WeakHandleOwner
{
    virtual bool isReachableFromOpaqueRoots( JSC::Handle<JSC::Unknown>, void *context, JSC::SlotVisitor & );
    virtual void finalize( JSC::Handle<JSC::Unknown>, void *context );
};

inline JSC::WeakHandleOwner *wrapperOwner( DOMWrapperWorld *, FileReader * )
{
    DEFINE_STATIC_LOCAL( JSFileReaderOwner, jsFileReaderOwner, () );
    return &jsFileReaderOwner;
}

inline void *wrapperContext( DOMWrapperWorld *world, FileReader * )
{
    return world;
}

JSC::JSValue toJS( JSC::ExecState *, JSDOMGlobalObject *, FileReader * );
FileReader *toFileReader( JSC::JSValue );

class JSFileReaderPrototype : public JSC::JSObjectWithGlobalObject
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
    JSFileReaderPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                           JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsFileReaderPrototypeFunctionReadAsArrayBuffer( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsFileReaderPrototypeFunctionReadAsBinaryString( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsFileReaderPrototypeFunctionReadAsText( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsFileReaderPrototypeFunctionReadAsDataURL( JSC::ExecState * );
JSC::EncodedJSValue JSC_HOST_CALL jsFileReaderPrototypeFunctionAbort( JSC::ExecState * );
// Attributes

JSC::JSValue jsFileReaderReadyState( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsFileReaderResult( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsFileReaderError( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsFileReaderOnloadstart( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnloadstart( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderOnprogress( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnprogress( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderOnload( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnload( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderOnabort( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnabort( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderOnerror( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnerror( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderOnloadend( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSFileReaderOnloadend( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsFileReaderConstructor( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
// Constants

JSC::JSValue jsFileReaderEMPTY( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsFileReaderLOADING( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsFileReaderDONE( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );

} // namespace WebCore

#endif // ENABLE(BLOB)

#endif
