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
#include "JSHTMLAllCollection.h"

#include "ExceptionCode.h"
#include "HTMLAllCollection.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "JSNodeList.h"
#include "NameNodeList.h"
#include "Node.h"
#include "NodeList.h"
#include "wtf/text/AtomicString.h"
#include <runtime/Error.h>
#include <runtime/PropertyNameArray.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLAllCollection );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLAllCollectionTableValues[3] =
{
    { "length", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLAllCollectionLength ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLAllCollectionConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLAllCollectionTable = { 5, 3, JSHTMLAllCollectionTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLAllCollectionConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLAllCollectionConstructorTable = { 1, 0, JSHTMLAllCollectionConstructorTableValues, 0 };
class JSHTMLAllCollectionConstructor : public DOMConstructorObject
{
public:
    JSHTMLAllCollectionConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLAllCollectionConstructor::s_info = { "HTMLAllCollectionConstructor", &DOMConstructorObject::s_info, &JSHTMLAllCollectionConstructorTable, 0 };

JSHTMLAllCollectionConstructor::JSHTMLAllCollectionConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLAllCollectionPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLAllCollectionConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLAllCollectionConstructor, JSDOMWrapper>( exec, &JSHTMLAllCollectionConstructorTable, this,
            propertyName, slot );
}

bool JSHTMLAllCollectionConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLAllCollectionConstructor, JSDOMWrapper>( exec, &JSHTMLAllCollectionConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLAllCollectionPrototypeTableValues[4] =
{
    { "item", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLAllCollectionPrototypeFunctionItem ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "namedItem", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLAllCollectionPrototypeFunctionNamedItem ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "tags", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLAllCollectionPrototypeFunctionTags ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLAllCollectionPrototypeTable = { 8, 7, JSHTMLAllCollectionPrototypeTableValues, 0 };
const ClassInfo JSHTMLAllCollectionPrototype::s_info = { "HTMLAllCollectionPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLAllCollectionPrototypeTable, 0 };

JSObject *JSHTMLAllCollectionPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLAllCollection>( exec, globalObject );
}

bool JSHTMLAllCollectionPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSHTMLAllCollectionPrototypeTable, this, propertyName, slot );
}

bool JSHTMLAllCollectionPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSHTMLAllCollectionPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSHTMLAllCollection::s_info = { "HTMLAllCollection", &JSDOMWrapper::s_info, &JSHTMLAllCollectionTable, 0 };

JSHTMLAllCollection::JSHTMLAllCollection( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<HTMLAllCollection> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLAllCollection::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLAllCollectionPrototype( exec->globalData(), globalObject,
            JSHTMLAllCollectionPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSHTMLAllCollection::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    JSValue proto = prototype();

    if ( proto.isObject() && static_cast<JSObject *>( asObject( proto ) )->hasProperty( exec, propertyName ) )
    {
        return false;
    }

    const HashEntry *entry = JSHTMLAllCollectionTable.entry( exec, propertyName );

    if ( entry )
    {
        slot.setCustom( this, entry->propertyGetter() );
        return true;
    }

    bool ok;
    unsigned index = propertyName.toUInt32( ok );

    if ( ok && index < static_cast<HTMLAllCollection *>( impl() )->length() )
    {
        slot.setCustomIndex( this, index, indexGetter );
        return true;
    }

    if ( canGetItemsForName( exec, static_cast<HTMLAllCollection *>( impl() ), propertyName ) )
    {
        slot.setCustom( this, nameGetter );
        return true;
    }

    return getStaticValueSlot<JSHTMLAllCollection, Base>( exec, &JSHTMLAllCollectionTable, this, propertyName, slot );
}

bool JSHTMLAllCollection::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    JSValue proto = prototype();

    if ( proto.isObject() && static_cast<JSObject *>( asObject( proto ) )->hasProperty( exec, propertyName ) )
    {
        return false;
    }

    const HashEntry *entry = JSHTMLAllCollectionTable.entry( exec, propertyName );

    if ( entry )
    {
        PropertySlot slot;
        slot.setCustom( this, entry->propertyGetter() );
        descriptor.setDescriptor( slot.getValue( exec, propertyName ), entry->attributes() );
        return true;
    }

    bool ok;
    unsigned index = propertyName.toUInt32( ok );

    if ( ok && index < static_cast<HTMLAllCollection *>( impl() )->length() )
    {
        PropertySlot slot;
        slot.setCustomIndex( this, index, indexGetter );
        descriptor.setDescriptor( slot.getValue( exec, propertyName ), DontDelete | ReadOnly );
        return true;
    }

    if ( canGetItemsForName( exec, static_cast<HTMLAllCollection *>( impl() ), propertyName ) )
    {
        PropertySlot slot;
        slot.setCustom( this, nameGetter );
        descriptor.setDescriptor( slot.getValue( exec, propertyName ), ReadOnly | DontDelete | DontEnum );
        return true;
    }

    return getStaticValueDescriptor<JSHTMLAllCollection, Base>( exec, &JSHTMLAllCollectionTable, this, propertyName, descriptor );
}

bool JSHTMLAllCollection::getOwnPropertySlot( ExecState *exec, unsigned propertyName, PropertySlot &slot )
{
    if ( propertyName < static_cast<HTMLAllCollection *>( impl() )->length() )
    {
        slot.setCustomIndex( this, propertyName, indexGetter );
        return true;
    }

    return getOwnPropertySlot( exec, Identifier::from( exec, propertyName ), slot );
}

JSValue jsHTMLAllCollectionLength( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLAllCollection *castedThis = static_cast<JSHTMLAllCollection *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLAllCollection *imp = static_cast<HTMLAllCollection *>( castedThis->impl() );
    JSValue result = jsNumber( imp->length() );
    return result;
}


JSValue jsHTMLAllCollectionConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLAllCollection *domObject = static_cast<JSHTMLAllCollection *>( asObject( slotBase ) );
    return JSHTMLAllCollection::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLAllCollection::getOwnPropertyNames( ExecState *exec, PropertyNameArray &propertyNames, EnumerationMode mode )
{
    for ( unsigned i = 0; i < static_cast<HTMLAllCollection *>( impl() )->length(); ++i )
    {
        propertyNames.add( Identifier::from( exec, i ) );
    }

    Base::getOwnPropertyNames( exec, propertyNames, mode );
}

JSValue JSHTMLAllCollection::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLAllCollectionConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionItem( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLAllCollection::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLAllCollection *castedThis = static_cast<JSHTMLAllCollection *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->item( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionNamedItem( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLAllCollection::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLAllCollection *castedThis = static_cast<JSHTMLAllCollection *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->namedItem( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsHTMLAllCollectionPrototypeFunctionTags( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLAllCollection::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLAllCollection *castedThis = static_cast<JSHTMLAllCollection *>( asObject( thisValue ) );
    HTMLAllCollection *imp = static_cast<HTMLAllCollection *>( castedThis->impl() );
    const String &name( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->tags( name ) ) );
    return JSValue::encode( result );
}


JSValue JSHTMLAllCollection::indexGetter( ExecState *exec, JSValue slotBase, unsigned index )
{
    JSHTMLAllCollection *thisObj = static_cast<JSHTMLAllCollection *>( asObject( slotBase ) );
    return toJS( exec, thisObj->globalObject(), static_cast<HTMLAllCollection *>( thisObj->impl() )->item( index ) );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, HTMLAllCollection *impl )
{
    return wrap<JSHTMLAllCollection>( exec, globalObject, impl );
}

HTMLAllCollection *toHTMLAllCollection( JSC::JSValue value )
{
    return value.inherits( &JSHTMLAllCollection::s_info ) ? static_cast<JSHTMLAllCollection *>( asObject( value ) )->impl() : 0;
}

}
