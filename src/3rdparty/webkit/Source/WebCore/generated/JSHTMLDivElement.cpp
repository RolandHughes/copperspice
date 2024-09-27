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
#include "JSHTMLDivElement.h"

#include "HTMLDivElement.h"
#include "HTMLNames.h"
#include "KURL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLDivElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDivElementTableValues[3] =
{
    { "align", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLDivElementAlign ), ( intptr_t )setJSHTMLDivElementAlign THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLDivElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDivElementTable = { 5, 3, JSHTMLDivElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDivElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDivElementConstructorTable = { 1, 0, JSHTMLDivElementConstructorTableValues, 0 };
class JSHTMLDivElementConstructor : public DOMConstructorObject
{
public:
    JSHTMLDivElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLDivElementConstructor::s_info = { "HTMLDivElementConstructor", &DOMConstructorObject::s_info, &JSHTMLDivElementConstructorTable, 0 };

JSHTMLDivElementConstructor::JSHTMLDivElementConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLDivElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLDivElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLDivElementConstructor, JSDOMWrapper>( exec, &JSHTMLDivElementConstructorTable, this, propertyName,
            slot );
}

bool JSHTMLDivElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLDivElementConstructor, JSDOMWrapper>( exec, &JSHTMLDivElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLDivElementPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLDivElementPrototypeTable = { 1, 0, JSHTMLDivElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLDivElementPrototype::s_info = { "HTMLDivElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLDivElementPrototypeTable, 0 };

JSObject *JSHTMLDivElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLDivElement>( exec, globalObject );
}

const ClassInfo JSHTMLDivElement::s_info = { "HTMLDivElement", &JSHTMLElement::s_info, &JSHTMLDivElementTable, 0 };

JSHTMLDivElement::JSHTMLDivElement( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<HTMLDivElement> impl )
    : JSHTMLElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLDivElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLDivElementPrototype( exec->globalData(), globalObject,
            JSHTMLDivElementPrototype::createStructure( exec->globalData(), JSHTMLElementPrototype::self( exec, globalObject ) ) );
}

bool JSHTMLDivElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLDivElement, Base>( exec, &JSHTMLDivElementTable, this, propertyName, slot );
}

bool JSHTMLDivElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLDivElement, Base>( exec, &JSHTMLDivElementTable, this, propertyName, descriptor );
}

JSValue jsHTMLDivElementAlign( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLDivElement *castedThis = static_cast<JSHTMLDivElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLDivElement *imp = static_cast<HTMLDivElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::alignAttr ) );
    return result;
}


JSValue jsHTMLDivElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLDivElement *domObject = static_cast<JSHTMLDivElement *>( asObject( slotBase ) );
    return JSHTMLDivElement::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLDivElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSHTMLDivElement, Base>( exec, propertyName, value, &JSHTMLDivElementTable, this, slot );
}

void setJSHTMLDivElementAlign( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLDivElement *castedThis = static_cast<JSHTMLDivElement *>( thisObject );
    HTMLDivElement *imp = static_cast<HTMLDivElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck( exec, value ) );
}


JSValue JSHTMLDivElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLDivElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}
