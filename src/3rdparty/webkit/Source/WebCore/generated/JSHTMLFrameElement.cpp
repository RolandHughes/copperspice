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
#include "JSHTMLFrameElement.h"

#include "DOMWindow.h"
#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLFrameElement.h"
#include "HTMLNames.h"
#include "JSDOMBinding.h"
#include "JSDOMWindow.h"
#include "JSDocument.h"
#include "JSSVGDocument.h"
#include "KURL.h"
#include "SVGDocument.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLFrameElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFrameElementTableValues[15] =
{
    { "frameBorder", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementFrameBorder ), ( intptr_t )setJSHTMLFrameElementFrameBorder THUNK_GENERATOR( 0 ) },
    { "longDesc", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementLongDesc ), ( intptr_t )setJSHTMLFrameElementLongDesc THUNK_GENERATOR( 0 ) },
    { "marginHeight", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementMarginHeight ), ( intptr_t )setJSHTMLFrameElementMarginHeight THUNK_GENERATOR( 0 ) },
    { "marginWidth", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementMarginWidth ), ( intptr_t )setJSHTMLFrameElementMarginWidth THUNK_GENERATOR( 0 ) },
    { "name", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementName ), ( intptr_t )setJSHTMLFrameElementName THUNK_GENERATOR( 0 ) },
    { "noResize", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementNoResize ), ( intptr_t )setJSHTMLFrameElementNoResize THUNK_GENERATOR( 0 ) },
    { "scrolling", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementScrolling ), ( intptr_t )setJSHTMLFrameElementScrolling THUNK_GENERATOR( 0 ) },
    { "src", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementSrc ), ( intptr_t )setJSHTMLFrameElementSrc THUNK_GENERATOR( 0 ) },
    { "contentDocument", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementContentDocument ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "contentWindow", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementContentWindow ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "location", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementLocation ), ( intptr_t )setJSHTMLFrameElementLocation THUNK_GENERATOR( 0 ) },
    { "width", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementWidth ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "height", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementHeight ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLFrameElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFrameElementTable = { 36, 31, JSHTMLFrameElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFrameElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFrameElementConstructorTable = { 1, 0, JSHTMLFrameElementConstructorTableValues, 0 };
class JSHTMLFrameElementConstructor : public DOMConstructorObject
{
public:
    JSHTMLFrameElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLFrameElementConstructor::s_info = { "HTMLFrameElementConstructor", &DOMConstructorObject::s_info, &JSHTMLFrameElementConstructorTable, 0 };

JSHTMLFrameElementConstructor::JSHTMLFrameElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLFrameElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLFrameElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLFrameElementConstructor, JSDOMWrapper>( exec, &JSHTMLFrameElementConstructorTable, this,
            propertyName, slot );
}

bool JSHTMLFrameElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLFrameElementConstructor, JSDOMWrapper>( exec, &JSHTMLFrameElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLFrameElementPrototypeTableValues[2] =
{
    { "getSVGDocument", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLFrameElementPrototypeFunctionGetSVGDocument ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLFrameElementPrototypeTable = { 2, 1, JSHTMLFrameElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLFrameElementPrototype::s_info = { "HTMLFrameElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLFrameElementPrototypeTable, 0 };

JSObject *JSHTMLFrameElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLFrameElement>( exec, globalObject );
}

bool JSHTMLFrameElementPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSHTMLFrameElementPrototypeTable, this, propertyName, slot );
}

bool JSHTMLFrameElementPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSHTMLFrameElementPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSHTMLFrameElement::s_info = { "HTMLFrameElement", &JSHTMLElement::s_info, &JSHTMLFrameElementTable, 0 };

JSHTMLFrameElement::JSHTMLFrameElement( Structure *structure, JSDOMGlobalObject *globalObject, PassRefPtr<HTMLFrameElement> impl )
    : JSHTMLElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLFrameElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLFrameElementPrototype( exec->globalData(), globalObject,
            JSHTMLFrameElementPrototype::createStructure( exec->globalData(), JSHTMLElementPrototype::self( exec, globalObject ) ) );
}

bool JSHTMLFrameElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLFrameElement, Base>( exec, &JSHTMLFrameElementTable, this, propertyName, slot );
}

bool JSHTMLFrameElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLFrameElement, Base>( exec, &JSHTMLFrameElementTable, this, propertyName, descriptor );
}

JSValue jsHTMLFrameElementFrameBorder( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::frameborderAttr ) );
    return result;
}


JSValue jsHTMLFrameElementLongDesc( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::longdescAttr ) );
    return result;
}


JSValue jsHTMLFrameElementMarginHeight( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::marginheightAttr ) );
    return result;
}


JSValue jsHTMLFrameElementMarginWidth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::marginwidthAttr ) );
    return result;
}


JSValue jsHTMLFrameElementName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::nameAttr ) );
    return result;
}


JSValue jsHTMLFrameElementNoResize( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->hasAttribute( WebCore::HTMLNames::noresizeAttr ) );
    return result;
}


JSValue jsHTMLFrameElementScrolling( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::scrollingAttr ) );
    return result;
}


JSValue jsHTMLFrameElementSrc( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getURLAttribute( WebCore::HTMLNames::srcAttr ) );
    return result;
}


JSValue jsHTMLFrameElementContentDocument( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    return checkNodeSecurity( exec, imp->contentDocument() ) ? toJS( exec, castedThis->globalObject(),
            WTF::getPtr( imp->contentDocument() ) ) : jsUndefined();
}


JSValue jsHTMLFrameElementContentWindow( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->contentWindow() ) );
    return result;
}


JSValue jsHTMLFrameElementLocation( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->location() );
    return result;
}


JSValue jsHTMLFrameElementWidth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsNumber( imp->width() );
    return result;
}


JSValue jsHTMLFrameElementHeight( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    JSValue result = jsNumber( imp->height() );
    return result;
}


JSValue jsHTMLFrameElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLFrameElement *domObject = static_cast<JSHTMLFrameElement *>( asObject( slotBase ) );
    return JSHTMLFrameElement::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLFrameElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    lookupPut<JSHTMLFrameElement, Base>( exec, propertyName, value, &JSHTMLFrameElementTable, this, slot );
}

void setJSHTMLFrameElementFrameBorder( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::frameborderAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementLongDesc( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::longdescAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementMarginHeight( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::marginheightAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementMarginWidth( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::marginwidthAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementName( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementNoResize( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setBooleanAttribute( WebCore::HTMLNames::noresizeAttr, value.toBoolean( exec ) );
}


void setJSHTMLFrameElementScrolling( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::scrollingAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementSrc( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( thisObject );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::srcAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLFrameElementLocation( ExecState *exec, JSObject *thisObject, JSValue value )
{
    static_cast<JSHTMLFrameElement *>( thisObject )->setLocation( exec, value );
}


JSValue JSHTMLFrameElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLFrameElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsHTMLFrameElementPrototypeFunctionGetSVGDocument( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLFrameElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLFrameElement *castedThis = static_cast<JSHTMLFrameElement *>( asObject( thisValue ) );
    HTMLFrameElement *imp = static_cast<HTMLFrameElement *>( castedThis->impl() );
    ExceptionCode ec = 0;

    if ( !checkNodeSecurity( exec, imp->getSVGDocument( ec ) ) )
    {
        return JSValue::encode( jsUndefined() );
    }


    JSC::JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->getSVGDocument( ec ) ) );
    setDOMException( exec, ec );
    return JSValue::encode( result );
}


}
