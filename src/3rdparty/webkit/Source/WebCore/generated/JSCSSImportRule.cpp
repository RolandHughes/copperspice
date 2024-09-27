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
#include "JSCSSImportRule.h"

#include "CSSImportRule.h"
#include "CSSStyleSheet.h"
#include "JSCSSStyleSheet.h"
#include "JSMediaList.h"
#include "KURL.h"
#include "MediaList.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSCSSImportRule );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSImportRuleTableValues[5] =
{
    { "href", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsCSSImportRuleHref ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "media", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsCSSImportRuleMedia ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "styleSheet", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsCSSImportRuleStyleSheet ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsCSSImportRuleConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSImportRuleTable = { 8, 7, JSCSSImportRuleTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSImportRuleConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSImportRuleConstructorTable = { 1, 0, JSCSSImportRuleConstructorTableValues, 0 };
class JSCSSImportRuleConstructor : public DOMConstructorObject
{
public:
    JSCSSImportRuleConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSCSSImportRuleConstructor::s_info = { "CSSImportRuleConstructor", &DOMConstructorObject::s_info, &JSCSSImportRuleConstructorTable, 0 };

JSCSSImportRuleConstructor::JSCSSImportRuleConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSCSSImportRulePrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSCSSImportRuleConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSCSSImportRuleConstructor, JSDOMWrapper>( exec, &JSCSSImportRuleConstructorTable, this, propertyName,
            slot );
}

bool JSCSSImportRuleConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSCSSImportRuleConstructor, JSDOMWrapper>( exec, &JSCSSImportRuleConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSCSSImportRulePrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSCSSImportRulePrototypeTable = { 1, 0, JSCSSImportRulePrototypeTableValues, 0 };
const ClassInfo JSCSSImportRulePrototype::s_info = { "CSSImportRulePrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSCSSImportRulePrototypeTable, 0 };

JSObject *JSCSSImportRulePrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSCSSImportRule>( exec, globalObject );
}

const ClassInfo JSCSSImportRule::s_info = { "CSSImportRule", &JSCSSRule::s_info, &JSCSSImportRuleTable, 0 };

JSCSSImportRule::JSCSSImportRule( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<CSSImportRule> impl )
    : JSCSSRule( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSCSSImportRule::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSCSSImportRulePrototype( exec->globalData(), globalObject,
            JSCSSImportRulePrototype::createStructure( exec->globalData(), JSCSSRulePrototype::self( exec, globalObject ) ) );
}

bool JSCSSImportRule::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSCSSImportRule, Base>( exec, &JSCSSImportRuleTable, this, propertyName, slot );
}

bool JSCSSImportRule::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSCSSImportRule, Base>( exec, &JSCSSImportRuleTable, this, propertyName, descriptor );
}

JSValue jsCSSImportRuleHref( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSCSSImportRule *castedThis = static_cast<JSCSSImportRule *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    CSSImportRule *imp = static_cast<CSSImportRule *>( castedThis->impl() );
    JSValue result = jsStringOrNull( exec, imp->href() );
    return result;
}


JSValue jsCSSImportRuleMedia( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSCSSImportRule *castedThis = static_cast<JSCSSImportRule *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    CSSImportRule *imp = static_cast<CSSImportRule *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->media() ) );
    return result;
}


JSValue jsCSSImportRuleStyleSheet( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSCSSImportRule *castedThis = static_cast<JSCSSImportRule *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    CSSImportRule *imp = static_cast<CSSImportRule *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->styleSheet() ) );
    return result;
}


JSValue jsCSSImportRuleConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSCSSImportRule *domObject = static_cast<JSCSSImportRule *>( asObject( slotBase ) );
    return JSCSSImportRule::getConstructor( exec, domObject->globalObject() );
}

JSValue JSCSSImportRule::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSCSSImportRuleConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}
