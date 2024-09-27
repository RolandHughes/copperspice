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

#if ENABLE(SVG)

#include "JSSVGPathSegClosePath.h"

#include "SVGPathSegClosePath.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSVGPathSegClosePath );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegClosePathTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSVGPathSegClosePathConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegClosePathTable = { 2, 1, JSSVGPathSegClosePathTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegClosePathConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegClosePathConstructorTable = { 1, 0, JSSVGPathSegClosePathConstructorTableValues, 0 };
class JSSVGPathSegClosePathConstructor : public DOMConstructorObject
{
public:
    JSSVGPathSegClosePathConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSSVGPathSegClosePathConstructor::s_info = { "SVGPathSegClosePathConstructor", &DOMConstructorObject::s_info, &JSSVGPathSegClosePathConstructorTable, 0 };

JSSVGPathSegClosePathConstructor::JSSVGPathSegClosePathConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSSVGPathSegClosePathPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSSVGPathSegClosePathConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGPathSegClosePathConstructor, JSDOMWrapper>( exec, &JSSVGPathSegClosePathConstructorTable, this,
            propertyName, slot );
}

bool JSSVGPathSegClosePathConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGPathSegClosePathConstructor, JSDOMWrapper>( exec, &JSSVGPathSegClosePathConstructorTable,
            this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSVGPathSegClosePathPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSVGPathSegClosePathPrototypeTable = { 1, 0, JSSVGPathSegClosePathPrototypeTableValues, 0 };
const ClassInfo JSSVGPathSegClosePathPrototype::s_info = { "SVGPathSegClosePathPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSSVGPathSegClosePathPrototypeTable, 0 };

JSObject *JSSVGPathSegClosePathPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSVGPathSegClosePath>( exec, globalObject );
}

const ClassInfo JSSVGPathSegClosePath::s_info = { "SVGPathSegClosePath", &JSSVGPathSeg::s_info, &JSSVGPathSegClosePathTable, 0 };

JSSVGPathSegClosePath::JSSVGPathSegClosePath( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<SVGPathSegClosePath> impl )
    : JSSVGPathSeg( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSVGPathSegClosePath::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSVGPathSegClosePathPrototype( exec->globalData(), globalObject,
            JSSVGPathSegClosePathPrototype::createStructure( exec->globalData(), JSSVGPathSegPrototype::self( exec, globalObject ) ) );
}

bool JSSVGPathSegClosePath::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSVGPathSegClosePath, Base>( exec, &JSSVGPathSegClosePathTable, this, propertyName, slot );
}

bool JSSVGPathSegClosePath::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSVGPathSegClosePath, Base>( exec, &JSSVGPathSegClosePathTable, this, propertyName, descriptor );
}

JSValue jsSVGPathSegClosePathConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSVGPathSegClosePath *domObject = static_cast<JSSVGPathSegClosePath *>( asObject( slotBase ) );
    return JSSVGPathSegClosePath::getConstructor( exec, domObject->globalObject() );
}

JSValue JSSVGPathSegClosePath::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSSVGPathSegClosePathConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}


}

#endif // ENABLE(SVG)
