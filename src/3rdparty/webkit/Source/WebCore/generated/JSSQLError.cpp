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

#if ENABLE(DATABASE)

#include "JSSQLError.h"

#include "KURL.h"
#include "SQLError.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSSQLError );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLErrorTableValues[3] =
{
    { "code", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorCode ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "message", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorMessage ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLErrorTable = { 4, 3, JSSQLErrorTableValues, 0 };
/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSSQLErrorPrototypeTableValues[9] =
{
    { "UNKNOWN_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorUNKNOWN_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "DATABASE_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorDATABASE_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "VERSION_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorVERSION_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "TOO_LARGE_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorTOO_LARGE_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "QUOTA_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorQUOTA_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "SYNTAX_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorSYNTAX_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "CONSTRAINT_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorCONSTRAINT_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "TIMEOUT_ERR", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsSQLErrorTIMEOUT_ERR ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSSQLErrorPrototypeTable = { 16, 15, JSSQLErrorPrototypeTableValues, 0 };
static const HashTable *getJSSQLErrorPrototypeTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSSQLErrorPrototypeTable );
}

const ClassInfo JSSQLErrorPrototype::s_info = { "SQLErrorPrototype", &JSC::JSObjectWithGlobalObject::s_info, 0, getJSSQLErrorPrototypeTable };

JSObject *JSSQLErrorPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSSQLError>( exec, globalObject );
}

bool JSSQLErrorPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSQLErrorPrototype, JSObject>( exec, getJSSQLErrorPrototypeTable( exec ), this, propertyName, slot );
}

bool JSSQLErrorPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSQLErrorPrototype, JSObject>( exec, getJSSQLErrorPrototypeTable( exec ), this, propertyName,
            descriptor );
}

static const HashTable *getJSSQLErrorTable( ExecState *exec )
{
    return getHashTableForGlobalData( exec->globalData(), &JSSQLErrorTable );
}

const ClassInfo JSSQLError::s_info = { "SQLError", &JSDOMWrapper::s_info, 0, getJSSQLErrorTable };

JSSQLError::JSSQLError( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<SQLError> impl )
    : JSDOMWrapper( structure, globalObject )
    , m_impl( impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSSQLError::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSSQLErrorPrototype( exec->globalData(), globalObject,
            JSSQLErrorPrototype::createStructure( globalObject->globalData(), globalObject->objectPrototype() ) );
}

bool JSSQLError::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSSQLError, Base>( exec, getJSSQLErrorTable( exec ), this, propertyName, slot );
}

bool JSSQLError::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName, PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSSQLError, Base>( exec, getJSSQLErrorTable( exec ), this, propertyName, descriptor );
}

JSValue jsSQLErrorCode( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSQLError *castedThis = static_cast<JSSQLError *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SQLError *imp = static_cast<SQLError *>( castedThis->impl() );
    JSValue result = jsNumber( imp->code() );
    return result;
}


JSValue jsSQLErrorMessage( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSSQLError *castedThis = static_cast<JSSQLError *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    SQLError *imp = static_cast<SQLError *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->message() );
    return result;
}


// Constant getters

JSValue jsSQLErrorUNKNOWN_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 0 ) );
}

JSValue jsSQLErrorDATABASE_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 1 ) );
}

JSValue jsSQLErrorVERSION_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 2 ) );
}

JSValue jsSQLErrorTOO_LARGE_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 3 ) );
}

JSValue jsSQLErrorQUOTA_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 4 ) );
}

JSValue jsSQLErrorSYNTAX_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 5 ) );
}

JSValue jsSQLErrorCONSTRAINT_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 6 ) );
}

JSValue jsSQLErrorTIMEOUT_ERR( ExecState *exec, JSValue, const Identifier & )
{
    UNUSED_PARAM( exec );
    return jsNumber( static_cast<int>( 7 ) );
}

JSC::JSValue toJS( JSC::ExecState *exec, JSDOMGlobalObject *globalObject, SQLError *impl )
{
    return wrap<JSSQLError>( exec, globalObject, impl );
}

SQLError *toSQLError( JSC::JSValue value )
{
    return value.inherits( &JSSQLError::s_info ) ? static_cast<JSSQLError *>( asObject( value ) )->impl() : 0;
}

}

#endif // ENABLE(DATABASE)
