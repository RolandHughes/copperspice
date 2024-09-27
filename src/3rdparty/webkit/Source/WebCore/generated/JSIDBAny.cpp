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

#if ENABLE(INDEXED_DATABASE)

#include "JSIDBAny.h"

#include "IDBAny.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSIDBAny );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBAnyTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsIDBAnyConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBAnyTable = { 2, 1, JSIDBAnyTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBAnyConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBAnyConstructorTable = { 1, 0, JSIDBAnyConstructorTableValues, 0 };
class JSIDBAnyConstructor : public DOMConstructorObject
{
public:
    JSIDBAnyConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSIDBAnyConstructor::s_info = { "IDBAnyConstructor", &DOMConstructorObject::s_info, &JSIDBAnyConstructorTable, 0 };

JSIDBAnyConstructor::JSIDBAnyConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSIDBAnyPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSIDBAnyConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBAnyConstructor, JSDOMWrapper>( exec, &JSIDBAnyConstructorTable, this, propertyName, slot );
}

bool JSIDBAnyConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBAnyConstructor, JSDOMWrapper>( exec, &JSIDBAnyConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSIDBAnyPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSIDBAnyPrototypeTable = { 1, 0, JSIDBAnyPrototypeTableValues, 0 };
const ClassInfo JSIDBAnyPrototype::s_info = { "IDBAnyPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSIDBAnyPrototypeTable, 0 };

JSObject *JSIDBAnyPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSIDBAny>( exec, globalObject );
}

const ClassInfo JSIDBAny::s_info = { "IDBAny", &JSDOMWrapper::s_info, &JSIDBAnyTable, 0 };

JSIDBAny::JSIDBAny( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<IDBAny> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSIDBAny::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSIDBAnyPrototype( exec->globalData(), globalObject,
                                           JSIDBAnyPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSIDBAny::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSIDBAny, Base>( exec, &JSIDBAnyTable, this, propertyName, slot );
}

bool JSIDBAny::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSIDBAny, Base>( exec, &JSIDBAnyTable, this, propertyName, descriptor );
}

JSValue jsIDBAnyConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSIDBAny *domObject = static_cast<JSIDBAny *>( asObject( slotBase ) );
    return JSIDBAny::getConstructor( exec, domObject->globalObject() );
}

JSValue JSIDBAny::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSIDBAnyConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

IDBAny *toIDBAny( JSC::JSValue value )
{
    return value.inherits( &JSIDBAny::s_info ) ? static_cast<JSIDBAny *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(INDEXED_DATABASE)
