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

#ifndef JSHTMLLinkElement_h
#define JSHTMLLinkElement_h

#include "JSHTMLElement.h"
#include <runtime/JSObjectWithGlobalObject.h>

namespace WebCore
{

class HTMLLinkElement;

class JSHTMLLinkElement : public JSHTMLElement
{
    typedef JSHTMLElement Base;
public:
    JSHTMLLinkElement( JSC::Structure *, JSDOMGlobalObject *, PassRefPtr<HTMLLinkElement> );
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

    static JSC::JSValue getConstructor( JSC::ExecState *, JSC::JSGlobalObject * );
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | Base::StructureFlags;
};


class JSHTMLLinkElementPrototype : public JSC::JSObjectWithGlobalObject
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
    JSHTMLLinkElementPrototype( JSC::JSGlobalData &globalData, JSC::JSGlobalObject *globalObject,
                                JSC::Structure *structure ) : JSC::JSObjectWithGlobalObject( globalData, globalObject, structure ) { }
protected:
    static const unsigned StructureFlags = Base::StructureFlags;
};

// Attributes

JSC::JSValue jsHTMLLinkElementDisabled( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementDisabled( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementCharset( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementCharset( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementHref( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementHref( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementHreflang( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementHreflang( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementMedia( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementMedia( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementRel( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementRel( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementRev( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementRev( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementTarget( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementTarget( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementType( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
void setJSHTMLLinkElementType( JSC::ExecState *, JSC::JSObject *, JSC::JSValue );
JSC::JSValue jsHTMLLinkElementSheet( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );
JSC::JSValue jsHTMLLinkElementConstructor( JSC::ExecState *, JSC::JSValue, const JSC::Identifier & );

} // namespace WebCore

#endif
