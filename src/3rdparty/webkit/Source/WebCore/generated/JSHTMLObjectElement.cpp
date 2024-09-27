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
#include "JSHTMLObjectElement.h"

#include "Document.h"
#include "ExceptionCode.h"
#include "HTMLFormElement.h"
#include "HTMLNames.h"
#include "HTMLObjectElement.h"
#include "JSDOMBinding.h"
#include "JSDocument.h"
#include "JSHTMLFormElement.h"
#include "JSHTMLObjectElementCustom.h"
#include "JSSVGDocument.h"
#include "JSValidityState.h"
#include "KURL.h"
#include "SVGDocument.h"
#include "ValidityState.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore
{

ASSERT_CLASS_FITS_IN_CELL( JSHTMLObjectElement );

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLObjectElementTableValues[23] =
{
    { "form", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementForm ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "code", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementCode ), ( intptr_t )setJSHTMLObjectElementCode THUNK_GENERATOR( 0 ) },
    { "align", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementAlign ), ( intptr_t )setJSHTMLObjectElementAlign THUNK_GENERATOR( 0 ) },
    { "archive", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementArchive ), ( intptr_t )setJSHTMLObjectElementArchive THUNK_GENERATOR( 0 ) },
    { "border", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementBorder ), ( intptr_t )setJSHTMLObjectElementBorder THUNK_GENERATOR( 0 ) },
    { "codeBase", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementCodeBase ), ( intptr_t )setJSHTMLObjectElementCodeBase THUNK_GENERATOR( 0 ) },
    { "codeType", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementCodeType ), ( intptr_t )setJSHTMLObjectElementCodeType THUNK_GENERATOR( 0 ) },
    { "data", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementData ), ( intptr_t )setJSHTMLObjectElementData THUNK_GENERATOR( 0 ) },
    { "declare", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementDeclare ), ( intptr_t )setJSHTMLObjectElementDeclare THUNK_GENERATOR( 0 ) },
    { "height", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementHeight ), ( intptr_t )setJSHTMLObjectElementHeight THUNK_GENERATOR( 0 ) },
    { "hspace", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementHspace ), ( intptr_t )setJSHTMLObjectElementHspace THUNK_GENERATOR( 0 ) },
    { "name", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementName ), ( intptr_t )setJSHTMLObjectElementName THUNK_GENERATOR( 0 ) },
    { "standby", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementStandby ), ( intptr_t )setJSHTMLObjectElementStandby THUNK_GENERATOR( 0 ) },
    { "type", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementType ), ( intptr_t )setJSHTMLObjectElementType THUNK_GENERATOR( 0 ) },
    { "useMap", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementUseMap ), ( intptr_t )setJSHTMLObjectElementUseMap THUNK_GENERATOR( 0 ) },
    { "vspace", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementVspace ), ( intptr_t )setJSHTMLObjectElementVspace THUNK_GENERATOR( 0 ) },
    { "width", DontDelete, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementWidth ), ( intptr_t )setJSHTMLObjectElementWidth THUNK_GENERATOR( 0 ) },
    { "willValidate", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementWillValidate ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "validity", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementValidity ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "validationMessage", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementValidationMessage ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "contentDocument", DontDelete | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementContentDocument ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "constructor", DontEnum | ReadOnly, ( intptr_t )static_cast<PropertySlot::GetValueFunc>( jsHTMLObjectElementConstructor ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLObjectElementTable = { 68, 63, JSHTMLObjectElementTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLObjectElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLObjectElementConstructorTable = { 1, 0, JSHTMLObjectElementConstructorTableValues, 0 };
class JSHTMLObjectElementConstructor : public DOMConstructorObject
{
public:
    JSHTMLObjectElementConstructor( JSC::ExecState *, JSC::Structure *, JSDOMGlobalObject * );

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

const ClassInfo JSHTMLObjectElementConstructor::s_info = { "HTMLObjectElementConstructor", &DOMConstructorObject::s_info, &JSHTMLObjectElementConstructorTable, 0 };

JSHTMLObjectElementConstructor::JSHTMLObjectElementConstructor( ExecState *exec, Structure *structure,
        JSDOMGlobalObject *globalObject )
    : DOMConstructorObject( structure, globalObject )
{
    ASSERT( inherits( &s_info ) );
    putDirect( exec->globalData(), exec->propertyNames().prototype, JSHTMLObjectElementPrototype::self( exec, globalObject ),
               DontDelete | ReadOnly );
}

bool JSHTMLObjectElementConstructor::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticValueSlot<JSHTMLObjectElementConstructor, JSDOMWrapper>( exec, &JSHTMLObjectElementConstructorTable, this,
            propertyName, slot );
}

bool JSHTMLObjectElementConstructor::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticValueDescriptor<JSHTMLObjectElementConstructor, JSDOMWrapper>( exec, &JSHTMLObjectElementConstructorTable, this,
            propertyName, descriptor );
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSHTMLObjectElementPrototypeTableValues[4] =
{
    { "checkValidity", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLObjectElementPrototypeFunctionCheckValidity ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { "setCustomValidity", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLObjectElementPrototypeFunctionSetCustomValidity ), ( intptr_t )1 THUNK_GENERATOR( 0 ) },
    { "getSVGDocument", DontDelete | Function, ( intptr_t )static_cast<NativeFunction>( jsHTMLObjectElementPrototypeFunctionGetSVGDocument ), ( intptr_t )0 THUNK_GENERATOR( 0 ) },
    { 0, 0, 0, 0 THUNK_GENERATOR( 0 ) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSHTMLObjectElementPrototypeTable = { 9, 7, JSHTMLObjectElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLObjectElementPrototype::s_info = { "HTMLObjectElementPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSHTMLObjectElementPrototypeTable, 0 };

JSObject *JSHTMLObjectElementPrototype::self( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMPrototype<JSHTMLObjectElement>( exec, globalObject );
}

bool JSHTMLObjectElementPrototype::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    return getStaticFunctionSlot<JSObject>( exec, &JSHTMLObjectElementPrototypeTable, this, propertyName, slot );
}

bool JSHTMLObjectElementPrototype::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    return getStaticFunctionDescriptor<JSObject>( exec, &JSHTMLObjectElementPrototypeTable, this, propertyName, descriptor );
}

const ClassInfo JSHTMLObjectElement::s_info = { "HTMLObjectElement", &JSHTMLElement::s_info, &JSHTMLObjectElementTable, 0 };

JSHTMLObjectElement::JSHTMLObjectElement( Structure *structure, JSDOMGlobalObject *globalObject,
        PassRefPtr<HTMLObjectElement> impl )
    : JSHTMLElement( structure, globalObject, impl )
{
    ASSERT( inherits( &s_info ) );
}

JSObject *JSHTMLObjectElement::createPrototype( ExecState *exec, JSGlobalObject *globalObject )
{
    return new ( exec ) JSHTMLObjectElementPrototype( exec->globalData(), globalObject,
            JSHTMLObjectElementPrototype::createStructure( exec->globalData(), JSHTMLElementPrototype::self( exec, globalObject ) ) );
}

bool JSHTMLObjectElement::getOwnPropertySlot( ExecState *exec, const Identifier &propertyName, PropertySlot &slot )
{
    if ( getOwnPropertySlotDelegate( exec, propertyName, slot ) )
    {
        return true;
    }

    return getStaticValueSlot<JSHTMLObjectElement, Base>( exec, &JSHTMLObjectElementTable, this, propertyName, slot );
}

bool JSHTMLObjectElement::getOwnPropertyDescriptor( ExecState *exec, const Identifier &propertyName,
        PropertyDescriptor &descriptor )
{
    if ( getOwnPropertyDescriptorDelegate( exec, propertyName, descriptor ) )
    {
        return true;
    }

    return getStaticValueDescriptor<JSHTMLObjectElement, Base>( exec, &JSHTMLObjectElementTable, this, propertyName, descriptor );
}

JSValue jsHTMLObjectElementForm( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->form() ) );
    return result;
}


JSValue jsHTMLObjectElementCode( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::codeAttr ) );
    return result;
}


JSValue jsHTMLObjectElementAlign( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::alignAttr ) );
    return result;
}


JSValue jsHTMLObjectElementArchive( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::archiveAttr ) );
    return result;
}


JSValue jsHTMLObjectElementBorder( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::borderAttr ) );
    return result;
}


JSValue jsHTMLObjectElementCodeBase( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::codebaseAttr ) );
    return result;
}


JSValue jsHTMLObjectElementCodeType( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::codetypeAttr ) );
    return result;
}


JSValue jsHTMLObjectElementData( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getURLAttribute( WebCore::HTMLNames::dataAttr ) );
    return result;
}


JSValue jsHTMLObjectElementDeclare( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->hasAttribute( WebCore::HTMLNames::declareAttr ) );
    return result;
}


JSValue jsHTMLObjectElementHeight( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::heightAttr ) );
    return result;
}


JSValue jsHTMLObjectElementHspace( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsNumber( imp->getIntegralAttribute( WebCore::HTMLNames::hspaceAttr ) );
    return result;
}


JSValue jsHTMLObjectElementName( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::nameAttr ) );
    return result;
}


JSValue jsHTMLObjectElementStandby( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::standbyAttr ) );
    return result;
}


JSValue jsHTMLObjectElementType( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::typeAttr ) );
    return result;
}


JSValue jsHTMLObjectElementUseMap( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::usemapAttr ) );
    return result;
}


JSValue jsHTMLObjectElementVspace( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsNumber( imp->getIntegralAttribute( WebCore::HTMLNames::vspaceAttr ) );
    return result;
}


JSValue jsHTMLObjectElementWidth( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->getAttribute( WebCore::HTMLNames::widthAttr ) );
    return result;
}


JSValue jsHTMLObjectElementWillValidate( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsBoolean( imp->willValidate() );
    return result;
}


JSValue jsHTMLObjectElementValidity( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = toJS( exec, castedThis->globalObject(), WTF::getPtr( imp->validity() ) );
    return result;
}


JSValue jsHTMLObjectElementValidationMessage( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    UNUSED_PARAM( exec );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    JSValue result = jsString( exec, imp->validationMessage() );
    return result;
}


JSValue jsHTMLObjectElementContentDocument( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    return checkNodeSecurity( exec, imp->contentDocument() ) ? toJS( exec, castedThis->globalObject(),
            WTF::getPtr( imp->contentDocument() ) ) : jsUndefined();
}


JSValue jsHTMLObjectElementConstructor( ExecState *exec, JSValue slotBase, const Identifier & )
{
    JSHTMLObjectElement *domObject = static_cast<JSHTMLObjectElement *>( asObject( slotBase ) );
    return JSHTMLObjectElement::getConstructor( exec, domObject->globalObject() );
}

void JSHTMLObjectElement::put( ExecState *exec, const Identifier &propertyName, JSValue value, PutPropertySlot &slot )
{
    if ( putDelegate( exec, propertyName, value, slot ) )
    {
        return;
    }

    lookupPut<JSHTMLObjectElement, Base>( exec, propertyName, value, &JSHTMLObjectElementTable, this, slot );
}

void setJSHTMLObjectElementCode( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::codeAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementAlign( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::alignAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementArchive( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::archiveAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementBorder( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::borderAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementCodeBase( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::codebaseAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementCodeType( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::codetypeAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementData( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::dataAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementDeclare( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setBooleanAttribute( WebCore::HTMLNames::declareAttr, value.toBoolean( exec ) );
}


void setJSHTMLObjectElementHeight( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::heightAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementHspace( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setIntegralAttribute( WebCore::HTMLNames::hspaceAttr, value.toInt32( exec ) );
}


void setJSHTMLObjectElementName( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::nameAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementStandby( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::standbyAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementType( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::typeAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementUseMap( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::usemapAttr, valueToStringWithNullCheck( exec, value ) );
}


void setJSHTMLObjectElementVspace( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setIntegralAttribute( WebCore::HTMLNames::vspaceAttr, value.toInt32( exec ) );
}


void setJSHTMLObjectElementWidth( ExecState *exec, JSObject *thisObject, JSValue value )
{
    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( thisObject );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    imp->setAttribute( WebCore::HTMLNames::widthAttr, valueToStringWithNullCheck( exec, value ) );
}


JSValue JSHTMLObjectElement::getConstructor( ExecState *exec, JSGlobalObject *globalObject )
{
    return getDOMConstructor<JSHTMLObjectElementConstructor>( exec, static_cast<JSDOMGlobalObject *>( globalObject ) );
}

EncodedJSValue JSC_HOST_CALL jsHTMLObjectElementPrototypeFunctionCheckValidity( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLObjectElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( thisValue ) );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );


    JSC::JSValue result = jsBoolean( imp->checkValidity() );
    return JSValue::encode( result );
}

EncodedJSValue JSC_HOST_CALL jsHTMLObjectElementPrototypeFunctionSetCustomValidity( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLObjectElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( thisValue ) );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
    const String &error( valueToStringWithUndefinedOrNullCheck( exec, exec->argument( 0 ) ) );

    if ( exec->hadException() )
    {
        return JSValue::encode( jsUndefined() );
    }

    imp->setCustomValidity( error );
    return JSValue::encode( jsUndefined() );
}

EncodedJSValue JSC_HOST_CALL jsHTMLObjectElementPrototypeFunctionGetSVGDocument( ExecState *exec )
{
    JSValue thisValue = exec->hostThisValue();

    if ( !thisValue.inherits( &JSHTMLObjectElement::s_info ) )
    {
        return throwVMTypeError( exec );
    }

    JSHTMLObjectElement *castedThis = static_cast<JSHTMLObjectElement *>( asObject( thisValue ) );
    HTMLObjectElement *imp = static_cast<HTMLObjectElement *>( castedThis->impl() );
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
