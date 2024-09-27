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

#if ENABLE(INSPECTOR)

#include "JSInspectorFrontendHost.h"

#include "ExceptionCode.h"
#include "InspectorFrontendHost.h"
#include "JSDOMBinding.h"
#include "KURL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSInspectorFrontendHost );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInspectorFrontendHostTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsInspectorFrontendHostConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostTable = { 2, 1, JSInspectorFrontendHostTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInspectorFrontendHostConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostConstructorTable = { 1, 0, JSInspectorFrontendHostConstructorTableValues, 0 };
class JSInspectorFrontendHostConstructor : public DOMConstructorObject
{
public:
    JSInspectorFrontendHostConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSInspectorFrontendHostConstructor::s_info = { "InspectorFrontendHostConstructor", &DOMConstructorObject::s_info, &JSInspectorFrontendHostConstructorTable, 0 };

JSInspectorFrontendHostConstructor::JSInspectorFrontendHostConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSInspectorFrontendHostPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSInspectorFrontendHostConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSInspectorFrontendHostConstructor, JSDOMWrapper>( exec, &JSInspectorFrontendHostConstructorTable, this,
            propertyName, slot );
}

bool JSInspectorFrontendHostConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSInspectorFrontendHostConstructor, JSDOMWrapper>( exec, &JSInspectorFrontendHostConstructorTable,
            this, propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSInspectorFrontendHostPrototypeTableValues[21] =
{
    { "loaded", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionLoaded ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "closeWindow", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionCloseWindow ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "disconnectFromBackend", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionDisconnectFromBackend ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "bringToFront", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionBringToFront ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "inspectedURLChanged", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionInspectedURLChanged ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "requestAttachWindow", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionRequestAttachWindow ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "requestDetachWindow", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionRequestDetachWindow ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "setAttachedWindowHeight", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "moveWindowBy", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionMoveWindowBy ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "setExtensionAPI", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionSetExtensionAPI ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "localizedStringsURL", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "hiddenPanels", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionHiddenPanels ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "saveSessionSetting", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionSaveSessionSetting ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "loadSessionSetting", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionLoadSessionSetting ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "copyText", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionCopyText ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "saveAs", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionSaveAs ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "platform", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionPlatform ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "port", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionPort ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "showContextMenu", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionShowContextMenu ), ( intptr_t )2 THUNK_GENERATOR( 0 ) },
    { "sendMessageToBackend", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsInspectorFrontendHostPrototypeFunctionSendMessageToBackend ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSInspectorFrontendHostPrototypeTable = { 67, 63, JSInspectorFrontendHostPrototypeTableValues, 0 };
const ClassInfo JSInspectorFrontendHostPrototype::s_info = { "InspectorFrontendHostPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSInspectorFrontendHostPrototypeTable, 0 };

JSObject *JSInspectorFrontendHostPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSInspectorFrontendHost>( exec, globalObject );
}

bool JSInspectorFrontendHostPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSInspectorFrontendHostPrototypeTable, this, propertyName, slot );
}

bool JSInspectorFrontendHostPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSInspectorFrontendHostPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSInspectorFrontendHost::s_info = { "InspectorFrontendHost", &JSDOMWrapper::s_info, &JSInspectorFrontendHostTable, 0 };

JSInspectorFrontendHost::JSInspectorFrontendHost( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<InspectorFrontendHost> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSInspectorFrontendHost::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSInspectorFrontendHostPrototype( exec->globalData(), globalObject,
            JSInspectorFrontendHostPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSInspectorFrontendHost::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSInspectorFrontendHost, Base>( exec, &JSInspectorFrontendHostTable, this, propertyName, slot );
}

bool JSInspectorFrontendHost::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSInspectorFrontendHost, Base>( exec, &JSInspectorFrontendHostTable, this, propertyName,
            descriptor );
}

JSValue jsInspectorFrontendHostConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSInspectorFrontendHost *domObject = static_cast<JSInspectorFrontendHost *>( asObject( slotBase ) );
    return JSInspectorFrontendHost::getConstructor( exec, domObject->globalObject() );
}

JSValue JSInspectorFrontendHost::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSInspectorFrontendHostConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoaded( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->loaded();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCloseWindow( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->closeWindow();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionDisconnectFromBackend( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->disconnectFromBackend();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionBringToFront( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->bringToFront();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionInspectedURLChanged( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &newURL( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->inspectedURLChanged( newURL );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestAttachWindow( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->requestAttachWindow();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionRequestDetachWindow( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );

    imp->requestDetachWindow();
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetAttachedWindowHeight( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    unsigned height( exec->argument( 0 ).toUInt32( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->setAttachedWindowHeight( height );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionMoveWindowBy( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    float x( exec->argument( 0 ).toFloat( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    float y( exec->argument( 1 ).toFloat( exec ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->moveWindowBy( x, y );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSetExtensionAPI( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &script( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->setExtensionAPI( script );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLocalizedStringsURL( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );


    JSC::JSValue result = jsString( exec, imp->localizedStringsURL() );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionHiddenPanels( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );


    JSC::JSValue result = jsString( exec, imp->hiddenPanels() );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSaveSessionSetting( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &key( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    const String &value( ustringToString( exec->argument( 1 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->saveSessionSetting( key, value );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionLoadSessionSetting( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &key( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = jsString( exec, imp->loadSessionSetting( key ) );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionCopyText( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &text( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->copyText( text );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSaveAs( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &fileName( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    const String &content( ustringToString( exec->argument( 1 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->saveAs( fileName, content );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPlatform( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->platform( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionPort( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->port( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionShowContextMenu( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    return JSValue::encode( castedThis->showContextMenu( exec ) );
}

EncodedJSValue JSC_HOST_CALL jsInspectorFrontendHostPrototypeFunctionSendMessageToBackend( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSInspectorFrontendHost::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSInspectorFrontendHost *castedThis = static_cast<JSInspectorFrontendHost *>( asObject( thisValue ) );
    InspectorFrontendHost *imp = static_cast<InspectorFrontendHost *>( castedThis->impl() );
    const String &message( ustringToString( exec->argument( 0 ).toString( exec ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->sendMessageToBackend( message );
    return JSValue::encode( jsUndefined() );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, InspectorFrontendHost *impl )
{
    return wrap<JSInspectorFrontendHost>( exec, globalObject, impl );
}

InspectorFrontendHost *toInspectorFrontendHost( JSC::JSValue value )
{
    return value.inherits( &JSInspectorFrontendHost::s_info ) ? static_cast<JSInspectorFrontendHost *>( asObject(
                value ) )->impl() : 0;
}

}

#endif // ENABLE(INSPECTOR)
