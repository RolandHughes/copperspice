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
#include "JSHTMLQuoteElement.h"

#include "HTMLNames.h"
#include "HTMLQuoteElement.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLQuoteElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLQuoteElementTableValues[3] =
{
    { "cite", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLQuoteElementCite ), ( intptr_t )setJSHTMLQuoteElementCite THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLQuoteElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLQuoteElementTable = { 5, 3, JSHTMLQuoteElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLQuoteElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLQuoteElementConstructorTable = { 1, 0, JSHTMLQuoteElementConstructorTableValues, 0 };
class JSHTMLQuoteElementConstructor : public DOMConstructorObject
{
public:
    JSHTMLQuoteElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLQuoteElementConstructor::s_info = { "HTMLQuoteElementConstructor", &DOMConstructorObject::s_info, &JSHTMLQuoteElementConstructorTable, 0 };

JSHTMLQuoteElementConstructor::JSHTMLQuoteElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLQuoteElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLQuoteElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLQuoteElementConstructor, JSDOMWrapper>( exec, &JSHTMLQuoteElementConstructorTable, this,
            propertyName, slot );
}

bool JSHTMLQuoteElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLQuoteElementConstructor, JSDOMWrapper>( exec, &JSHTMLQuoteElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLQuoteElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLQuoteElementPrototypeTable = { 1, 0, JSHTMLQuoteElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLQuoteElementPrototype::s_info = { "HTMLQuoteElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLQuoteElementPrototypeTable, 0 };

JSObject *JSHTMLQuoteElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLQuoteElement>( exec, globalObject );
}

const ClassInfo JSHTMLQuoteElement::s_info = { "HTMLQuoteElement", &JSHTMLElement::s_info, &JSHTMLQuoteElementTable, 0 };

JSHTMLQuoteElement::JSHTMLQuoteElement( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<HTMLQuoteElement> impl )
    : JSHTMLElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLQuoteElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLQuoteElementPrototype( exec->globalData(), globalObject,
            JSHTMLQuoteElementPrototype::createStructure( exec->globalData(), JSHTMLElementPrototype::self( exec, globalObject ) ) );
}

bool JSHTMLQuoteElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLQuoteElement, Base>( exec, &JSHTMLQuoteElementTable, this, propertyName, slot );
}

bool JSHTMLQuoteElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLQuoteElement, Base>( exec, &JSHTMLQuoteElementTable, this, propertyName, descriptor );
}

JSValue jsHTMLQuoteElementCite( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLQuoteElement *castedThis = static_cast<JSHTMLQuoteElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLQuoteElement *imp = static_cast<HTMLQuoteElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getURLAttribute( WebCore::HTMLNames::citeAttr ) );
    return result;
}


JSValue jsHTMLQuoteElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLQuoteElement *domObject = static_cast<JSHTMLQuoteElement *>( asObject( slotBase ) );
    return JSHTMLQuoteElement::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLQuoteElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSHTMLQuoteElement, Base>( exec, propertyName, value, &JSHTMLQuoteElementTable, this, slot );
}

void setJSHTMLQuoteElementCite( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLQuoteElement *castedThis = static_cast<JSHTMLQuoteElement *>( thisObject );
    HTMLQuoteElement *imp = static_cast<HTMLQuoteElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::citeAttr, valueToStringWithNullCheck( exec, value ) );
}


JSValue JSHTMLQuoteElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLQuoteElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}
