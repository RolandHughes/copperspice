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

#if ENABLE(WEBGL)

#include "JSWebGLFramebuffer.h"

#include "WebGLFramebuffer.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSWebGLFramebuffer );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLFramebufferTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsWebGLFramebufferConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLFramebufferTable = { 2, 1, JSWebGLFramebufferTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLFramebufferConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLFramebufferConstructorTable = { 1, 0, JSWebGLFramebufferConstructorTableValues, 0 };
class JSWebGLFramebufferConstructor : public DOMConstructorObject
{
public:
    JSWebGLFramebufferConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSWebGLFramebufferConstructor::s_info = { "WebGLFramebufferConstructor", &DOMConstructorObject::s_info, &JSWebGLFramebufferConstructorTable, 0 };

JSWebGLFramebufferConstructor::JSWebGLFramebufferConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSWebGLFramebufferPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSWebGLFramebufferConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSWebGLFramebufferConstructor, JSDOMWrapper>( exec, &JSWebGLFramebufferConstructorTable, this,
            propertyName, slot );
}

bool JSWebGLFramebufferConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSWebGLFramebufferConstructor, JSDOMWrapper>( exec, &JSWebGLFramebufferConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSWebGLFramebufferPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSWebGLFramebufferPrototypeTable = { 1, 0, JSWebGLFramebufferPrototypeTableValues, 0 };
const ClassInfo JSWebGLFramebufferPrototype::s_info = { "WebGLFramebufferPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSWebGLFramebufferPrototypeTable, 0 };

JSObject *JSWebGLFramebufferPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSWebGLFramebuffer>( exec, globalObject );
}

const ClassInfo JSWebGLFramebuffer::s_info = { "WebGLFramebuffer", &JSDOMWrapper::s_info, &JSWebGLFramebufferTable, 0 };

JSWebGLFramebuffer::JSWebGLFramebuffer( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<WebGLFramebuffer> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSWebGLFramebuffer::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSWebGLFramebufferPrototype( exec->globalData(), globalObject,
            JSWebGLFramebufferPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSWebGLFramebuffer::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSWebGLFramebuffer, Base>( exec, &JSWebGLFramebufferTable, this, propertyName, slot );
}

bool JSWebGLFramebuffer::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSWebGLFramebuffer, Base>( exec, &JSWebGLFramebufferTable, this, propertyName, descriptor );
}

JSValue jsWebGLFramebufferConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSWebGLFramebuffer *domObject = static_cast<JSWebGLFramebuffer *>( asObject( slotBase ) );
    return JSWebGLFramebuffer::getConstructor( exec, domObject->globalObject() );
}

JSValue JSWebGLFramebuffer::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSWebGLFramebufferConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, WebGLFramebuffer *impl )
{
    return wrap<JSWebGLFramebuffer>( exec, globalObject, impl );
}

WebGLFramebuffer *toWebGLFramebuffer( JSC::JSValue value )
{
    return value.inherits( &JSWebGLFramebuffer::s_info ) ? static_cast<JSWebGLFramebuffer *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(WEBGL)
