/***********************************************************************
*
* Copyright (c) 2012-2024 Barbara Geller
* Copyright (c) 2012-2024 Ansel Sermersheim
*
* Copyright (c) 2015 The Qt Company Ltd.
* Copyright (c) 2012-2016 Digia Plc and/or its subsidiary(-ies).
* Copyright (c) 2008-2012 Nokia Corporation and/or its subsidiary(-ies).
*
* This file is part of CopperSpice.
*
* CopperSpice is free software. You can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public License
* version 2.1 as published by the Free Software Foundation.
*
* CopperSpice is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
*
* https://www.gnu.org/licenses/
*
***********************************************************************/

// This file was generated by qlalr - DO NOT EDIT!

#ifndef QSCRIPTPARSER_P_H
#define QSCRIPTPARSER_P_H

#include <qstringfwd.h>

#include <qscriptgrammar_p.h>
#include <qscriptastfwd_p.h>

class QScriptEnginePrivate;
class QScriptNameIdImpl;

class QScriptParser: protected QScriptGrammar
{
 public:
   union Value {
      int ival;
      double dval;
      QScriptNameIdImpl *sval;
      QScript::AST::ArgumentList *ArgumentList;
      QScript::AST::CaseBlock *CaseBlock;
      QScript::AST::CaseClause *CaseClause;
      QScript::AST::CaseClauses *CaseClauses;
      QScript::AST::Catch *Catch;
      QScript::AST::DefaultClause *DefaultClause;
      QScript::AST::ElementList *ElementList;
      QScript::AST::Elision *Elision;
      QScript::AST::ExpressionNode *Expression;
      QScript::AST::Finally *Finally;
      QScript::AST::FormalParameterList *FormalParameterList;
      QScript::AST::FunctionBody *FunctionBody;
      QScript::AST::FunctionDeclaration *FunctionDeclaration;
      QScript::AST::Node *Node;
      QScript::AST::PropertyName *PropertyName;
      QScript::AST::PropertyNameAndValueList *PropertyNameAndValueList;
      QScript::AST::SourceElement *SourceElement;
      QScript::AST::SourceElements *SourceElements;
      QScript::AST::Statement *Statement;
      QScript::AST::StatementList *StatementList;
      QScript::AST::VariableDeclaration *VariableDeclaration;
      QScript::AST::VariableDeclarationList *VariableDeclarationList;
   };

   struct Location {
      int startLine;
      int startColumn;
      int endLine;
      int endColumn;
   };

 public:
   QScriptParser();
   ~QScriptParser();

   bool parse(QScriptEnginePrivate *driver);

   inline QString errorMessage() const {
      return error_message;
   }
   inline int errorLineNumber() const {
      return error_lineno;
   }
   inline int errorColumnNumber() const {
      return error_column;
   }

 protected:
   inline void reallocateStack();

   inline Value &sym(int index) {
      return sym_stack [tos + index - 1];
   }

   inline Location &loc(int index) {
      return location_stack [tos + index - 2];
   }

 protected:
   int tos;
   int stack_size;
   Value *sym_stack;
   int *state_stack;
   Location *location_stack;
   QString error_message;
   int error_lineno;
   int error_column;
};

inline void QScriptParser::reallocateStack()
{
   if (! stack_size) {
      stack_size = 128;
   } else {
      stack_size <<= 1;
   }

   sym_stack = reinterpret_cast<Value *> (qRealloc(sym_stack, stack_size * sizeof(Value)));
   state_stack = reinterpret_cast<int *> (qRealloc(state_stack, stack_size * sizeof(int)));
   location_stack = reinterpret_cast<Location *> (qRealloc(location_stack, stack_size * sizeof(Location)));
}

#define Q_SCRIPT_REGEXPLITERAL_RULE1 7
#define Q_SCRIPT_REGEXPLITERAL_RULE2 8

#endif // QSCRIPTPARSER_P_H
