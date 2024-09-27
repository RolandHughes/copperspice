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
#include "JSHTMLStyleElement.h"

#include "HTMLNames.h"
#include "HTMLStyleElement.h"
#include "JSStyleSheet.h"
#include "KURL.h"
#include "StyleSheet.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLStyleElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLStyleElementTableValues[6] =
{
    { "disabled", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLStyleElementDisabled ), ( intptr_t )setJSHTMLStyleElementDisabled THUNK_GENERATOR( 0 ) },
    { "media", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLStyleElementMedia ), ( intptr_t )setJSHTMLStyleElementMedia THUNK_GENERATOR( 0 ) },
    { "type", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLStyleElementType ), ( intptr_t )setJSHTMLStyleElementType THUNK_GENERATOR( 0 ) },
    { "sheet", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLStyleElementSheet ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLStyleElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLStyleElementTable = { 17, 15, JSHTMLStyleElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLStyleElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLStyleElementConstructorTable = { 1, 0, JSHTMLStyleElementConstructorTableValues, 0 };
class JSHTMLStyleElementConstructor : public DOMConstructorObject
{
public:
    JSHTMLStyleElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLStyleElementConstructor::s_info = { "HTMLStyleElementConstructor", &DOMConstructorObject::s_info, &JSHTMLStyleElementConstructorTable, 0 };

JSHTMLStyleElementConstructor::JSHTMLStyleElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLStyleElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLStyleElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLStyleElementConstructor, JSDOMWrapper>( exec, &JSHTMLStyleElementConstructorTable, this,
            propertyName, slot );
}

bool JSHTMLStyleElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLStyleElementConstructor, JSDOMWrapper>( exec, &JSHTMLStyleElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLStyleElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLStyleElementPrototypeTable = { 1, 0, JSHTMLStyleElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLStyleElementPrototype::s_info = { "HTMLStyleElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLStyleElementPrototypeTable, 0 };

JSObject *JSHTMLStyleElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLStyleElement>( exec, globalObject );
}

const ClassInfo JSHTMLStyleElement::s_info = { "HTMLStyleElement", &JSHTMLElement::s_info, &JSHTMLStyleElementTable, 0 };

JSHTMLStyleElement::JSHTMLStyleElement( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<HTMLStyleElement> impl )
    : JSHTMLElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLStyleElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLStyleElementPrototype( exec->globalData(), globalObject,
            JSHTMLStyleElementPrototype::createStructure( exec->globalData(), JSHTMLElementPrototype::self( exec, globalObject ) ) );
}

bool JSHTMLStyleElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLStyleElement, Base>( exec, &JSHTMLStyleElementTable, this, propertyName, slot );
}

bool JSHTMLStyleElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLStyleElement, Base>( exec, &JSHTMLStyleElementTable, this, propertyName, descriptor );
}

JSValue jsHTMLStyleElementDisabled( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->disabled() );
    return result;
}


JSValue jsHTMLStyleElementMedia( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::mediaAttr ) );
    return result;
}


JSValue jsHTMLStyleElementType( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::typeAttr ) );
    return result;
}


JSValue jsHTMLStyleElementSheet( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->sheet() ) );
    return result;
}


JSValue jsHTMLStyleElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLStyleElement *domObject = static_cast<JSHTMLStyleElement *>( asObject( slotBase ) );
    return JSHTMLStyleElement::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLStyleElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSHTMLStyleElement, Base>( exec, propertyName, value, &JSHTMLStyleElementTable, this, slot );
}

void setJSHTMLStyleElementDisabled( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( thisObject );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    imp->setDisabled( value.toBoolean( exec ) );
}


void setJSHTMLStyleElementMedia( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( thisObject );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::mediaAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLStyleElementType( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLStyleElement *castedThis = static_cast<JSHTMLStyleElement *>( thisObject );
    HTMLStyleElement *imp = static_cast<HTMLStyleElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::typeAttr, valueToStringWithNullCheck( exec, value ) );
}


JSValue JSHTMLStyleElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLStyleElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}
