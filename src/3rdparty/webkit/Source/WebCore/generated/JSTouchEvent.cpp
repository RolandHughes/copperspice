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

#if ENABLE(TOUCH_EVENTS)

#include "JSTouchEvent.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSTouchList.h"
#include "TouchEvent.h"
#include "TouchList.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSTouchEvent );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTouchEventTableValues[9] =
{
    { "touches", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventTouches ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "targetTouches", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventTargetTouches ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "changedTouches", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventChangedTouches ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "ctrlKey", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventCtrlKey ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "shiftKey", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventShiftKey ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "altKey", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventAltKey ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "metaKey", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventMetaKey ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsTouchEventConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTouchEventTable = { 19, 15, JSTouchEventTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTouchEventConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTouchEventConstructorTable = { 1, 0, JSTouchEventConstructorTableValues, 0 };
class JSTouchEventConstructor : public DOMConstructorObject
{
public:
    JSTouchEventConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSTouchEventConstructor::s_info = { "TouchEventConstructor", &DOMConstructorObject::s_info, &JSTouchEventConstructorTable, 0 };

JSTouchEventConstructor::JSTouchEventConstructor( ExecState *exec, Structure *structure, JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSTouchEventPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSTouchEventConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSTouchEventConstructor, JSDOMWrapper>( exec, &JSTouchEventConstructorTable, this, propertyName, slot );
}

bool JSTouchEventConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSTouchEventConstructor, JSDOMWrapper>( exec, &JSTouchEventConstructorTable, this, propertyName,
            descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSTouchEventPrototypeTableValues[2] =
{
    { "initTouchEvent", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsTouchEventPrototypeFunctionInitTouchEvent ), ( intptr_t )13 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSTouchEventPrototypeTable = { 2, 1, JSTouchEventPrototypeTableValues, 0 };
const ClassInfo JSTouchEventPrototype::s_info = { "TouchEventPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSTouchEventPrototypeTable, 0 };

JSObject *JSTouchEventPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSTouchEvent>( exec, globalObject );
}

bool JSTouchEventPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSTouchEventPrototypeTable, this, propertyName, slot );
}

bool JSTouchEventPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSTouchEventPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSTouchEvent::s_info = { "TouchEvent", &JSUIEvent::s_info, &JSTouchEventTable, 0 };

JSTouchEvent::JSTouchEvent( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<TouchEvent> impl )
    : JSUIEvent( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSTouchEvent::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSTouchEventPrototype( exec->globalData(), globalObject,
            JSTouchEventPrototype::createStructure( exec->globalData(), JSUIEventPrototype::self( exec, globalObject ) ) );
}

bool JSTouchEvent::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSTouchEvent, Base>( exec, &JSTouchEventTable, this, propertyName, slot );
}

bool JSTouchEvent::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSTouchEvent, Base>( exec, &JSTouchEventTable, this, propertyName, descriptor );
}

JSValue jsTouchEventTouches( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->touches() ) );
    return result;
}


JSValue jsTouchEventTargetTouches( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->targetTouches() ) );
    return result;
}


JSValue jsTouchEventChangedTouches( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->changedTouches() ) );
    return result;
}


JSValue jsTouchEventCtrlKey( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->ctrlKey() );
    return result;
}


JSValue jsTouchEventShiftKey( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->shiftKey() );
    return result;
}


JSValue jsTouchEventAltKey( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->altKey() );
    return result;
}


JSValue jsTouchEventMetaKey( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->metaKey() );
    return result;
}


JSValue jsTouchEventConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSTouchEvent *domObject = static_cast<JSTouchEvent *>( asObject( slotBase ) );
    return JSTouchEvent::getConstructor( exec, domObject->globalObject() );
}

JSValue JSTouchEvent::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSTouchEventConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsTouchEventPrototypeFunctionInitTouchEvent( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSTouchEvent::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSTouchEvent *castedThis = static_cast<JSTouchEvent *>( asObject( thisValue ) );
    TouchEvent *imp = static_cast<TouchEvent *>( castedThis->impl() );
    TouchList *touches( toTouchList( exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    TouchList *targetTouches( toTouchList( exec->argument( 1 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    TouchList *changedTouches( toTouchList( exec->argument( 2 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    const String &type( ustringToString( exec->argument( 3 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    DOMWindow *view( toDOMWindow( exec->argument( 4 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    int screenX( exec->argument( 5 ).toInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    int screenY( exec->argument( 6 ).toInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    int clientX( exec->argument( 7 ).toInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    int clientY( exec->argument( 8 ).toInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    bool ctrlKey( exec->argument( 9 ).toBoolean( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    bool altKey( exec->argument( 10 ).toBoolean( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    bool shiftKey( exec->argument( 11 ).toBoolean( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    bool metaKey( exec->argument( 12 ).toBoolean( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->initTouchEvent( touches, targetTouches, changedTouches, type, view, screenX, screenY, clientX, clientY, ctrlKey, altKey,
                         shiftKey, metaKey );
    return JSValue::encode( jsUndefined() );
}


}

#endif // ENABLE(TOUCH_EVENTS)
