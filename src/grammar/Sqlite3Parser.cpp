/* $ANTLR 2.7.7 (20121001): "sqlite3.g" -> "Sqlite3Parser.cpp"$ */
#include "Sqlite3Parser.hpp"
#include <antlr/NoViableAltException.hpp>
#include <antlr/SemanticException.hpp>
#include <antlr/ASTFactory.hpp>
Sqlite3Parser::Sqlite3Parser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf, int k)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(tokenBuf,k)
{
}

Sqlite3Parser::Sqlite3Parser(ANTLR_USE_NAMESPACE(antlr)TokenBuffer& tokenBuf)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(tokenBuf,2)
{
}

Sqlite3Parser::Sqlite3Parser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer, int k)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(lexer,k)
{
}

Sqlite3Parser::Sqlite3Parser(ANTLR_USE_NAMESPACE(antlr)TokenStream& lexer)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(lexer,2)
{
}

Sqlite3Parser::Sqlite3Parser(const ANTLR_USE_NAMESPACE(antlr)ParserSharedInputState& state)
: ANTLR_USE_NAMESPACE(antlr)LLkParser(state,2)
{
}

void Sqlite3Parser::id() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST id_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case ID:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp1_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp1_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp1_AST);
			}
			match(ID);
			id_AST = currentAST.root;
			break;
		}
		case QUOTEDID:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp2_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp2_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp2_AST);
			}
			match(QUOTEDID);
			id_AST = currentAST.root;
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_0);
		} else {
			throw;
		}
	}
	returnAST = id_AST;
}

void Sqlite3Parser::databasename() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST databasename_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		id();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		databasename_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_1);
		} else {
			throw;
		}
	}
	returnAST = databasename_AST;
}

void Sqlite3Parser::tablename() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST tablename_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		id();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		tablename_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_2);
		} else {
			throw;
		}
	}
	returnAST = tablename_AST;
}

void Sqlite3Parser::columnname() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST columnname_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		id();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		columnname_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_3);
		} else {
			throw;
		}
	}
	returnAST = columnname_AST;
}

void Sqlite3Parser::identifier() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST identifier_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		if (((LA(1) >= DOT && LA(1) <= QUOTEDID)) && ((LA(2) >= DOT && LA(2) <= QUOTEDID))) {
			{
			switch ( LA(1)) {
			case ID:
			case QUOTEDID:
			{
				databasename();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case DOT:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp3_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp3_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp3_AST);
			}
			match(DOT);
		}
		else if ((LA(1) == ID || LA(1) == QUOTEDID) && (LA(2) == ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE)) {
		}
		else {
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		
		}
		tablename();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		identifier_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_4);
		} else {
			throw;
		}
	}
	returnAST = identifier_AST;
}

void Sqlite3Parser::collationname() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST collationname_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp4_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp4_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp4_AST);
		}
		match(ID);
		collationname_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_5);
		} else {
			throw;
		}
	}
	returnAST = collationname_AST;
}

void Sqlite3Parser::signednumber() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST signednumber_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case PLUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp5_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp5_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp5_AST);
			}
			match(PLUS);
			break;
		}
		case MINUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp6_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp6_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp6_AST);
			}
			match(MINUS);
			break;
		}
		case NUMERIC:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp7_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp7_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp7_AST);
		}
		match(NUMERIC);
		signednumber_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = signednumber_AST;
}

void Sqlite3Parser::statementlist() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST statementlist_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case CREATE:
		{
			statement();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case ANTLR_USE_NAMESPACE(antlr)Token::EOF_TYPE:
		case SEMI:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{ // ( ... )*
		for (;;) {
			if ((LA(1) == SEMI)) {
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp8_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp8_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp8_AST);
				}
				match(SEMI);
				statement();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop80;
			}
			
		}
		_loop80:;
		} // ( ... )*
		statementlist_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_4);
		} else {
			throw;
		}
	}
	returnAST = statementlist_AST;
}

void Sqlite3Parser::statement() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST statement_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		createtable();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		statement_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_7);
		} else {
			throw;
		}
	}
	returnAST = statement_AST;
}

void Sqlite3Parser::createtable() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST createtable_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp9_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp9_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp9_AST);
		}
		match(CREATE);
		{
		switch ( LA(1)) {
		case TEMP:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp10_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp10_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp10_AST);
			}
			match(TEMP);
			break;
		}
		case TEMPORARY:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp11_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp11_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp11_AST);
			}
			match(TEMPORARY);
			break;
		}
		case TABLE:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp12_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp12_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp12_AST);
		}
		match(TABLE);
		{
		switch ( LA(1)) {
		case IF_T:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp13_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp13_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp13_AST);
			}
			match(IF_T);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp14_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp14_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp14_AST);
			}
			match(NOT);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp15_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp15_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp15_AST);
			}
			match(EXISTS);
			break;
		}
		case ID:
		case QUOTEDID:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		tablename();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		switch ( LA(1)) {
		case LPAREN:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp16_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp16_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp16_AST);
			}
			match(LPAREN);
			columndef();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA) && (LA(2) == ID || LA(2) == QUOTEDID)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp17_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp17_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp17_AST);
					}
					match(COMMA);
					columndef();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop88;
				}
				
			}
			_loop88:;
			} // ( ... )*
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp18_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp18_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp18_AST);
					}
					match(COMMA);
					tableconstraint();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop90;
				}
				
			}
			_loop90:;
			} // ( ... )*
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp19_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp19_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp19_AST);
			}
			match(RPAREN);
			break;
		}
		case AS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp20_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp20_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp20_AST);
			}
			match(AS);
			selectstmt();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			createtable_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
			createtable_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(CREATETABLE,"CREATETABLE"))->add(createtable_AST)));
			currentAST.root = createtable_AST;
			if ( createtable_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				createtable_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = createtable_AST->getFirstChild();
			else
				currentAST.child = createtable_AST;
			currentAST.advanceChildToEnd();
		}
		createtable_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_7);
		} else {
			throw;
		}
	}
	returnAST = createtable_AST;
}

void Sqlite3Parser::create_statements() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST create_statements_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		createtable();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		create_statements_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_4);
		} else {
			throw;
		}
	}
	returnAST = create_statements_AST;
}

void Sqlite3Parser::columndef() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST columndef_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		columnname();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		switch ( LA(1)) {
		case ID:
		case QUOTEDID:
		{
			type_name();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case CHECK:
		case COLLATE:
		case CONSTRAINT:
		case DEFAULT:
		case NOT:
		case PRIMARY:
		case REFERENCES:
		case UNIQUE:
		case RPAREN:
		case COMMA:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{ // ( ... )*
		for (;;) {
			if ((_tokenSet_8.member(LA(1)))) {
				columnconstraint();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				goto _loop94;
			}
			
		}
		_loop94:;
		} // ( ... )*
		if ( inputState->guessing==0 ) {
			columndef_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
			columndef_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(COLUMNDEF,"COLUMNDEF"))->add(columndef_AST)));
			currentAST.root = columndef_AST;
			if ( columndef_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				columndef_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = columndef_AST->getFirstChild();
			else
				currentAST.child = columndef_AST;
			currentAST.advanceChildToEnd();
		}
		columndef_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_9);
		} else {
			throw;
		}
	}
	returnAST = columndef_AST;
}

void Sqlite3Parser::tableconstraint() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST tableconstraint_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case CONSTRAINT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp21_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp21_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp21_AST);
			}
			match(CONSTRAINT);
			name();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case CHECK:
		case FOREIGN:
		case PRIMARY:
		case UNIQUE:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{
		switch ( LA(1)) {
		case PRIMARY:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp22_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp22_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp22_AST);
			}
			match(PRIMARY);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp23_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp23_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp23_AST);
			}
			match(KEY);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp24_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp24_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp24_AST);
			}
			match(LPAREN);
			indexedcolumn();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp25_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp25_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp25_AST);
					}
					match(COMMA);
					indexedcolumn();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop113;
				}
				
			}
			_loop113:;
			} // ( ... )*
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp26_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp26_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp26_AST);
			}
			match(RPAREN);
			{
			switch ( LA(1)) {
			case ON:
			{
				conflictclause();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case UNIQUE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp27_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp27_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp27_AST);
			}
			match(UNIQUE);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp28_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp28_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp28_AST);
			}
			match(LPAREN);
			indexedcolumn();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp29_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp29_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp29_AST);
					}
					match(COMMA);
					indexedcolumn();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop116;
				}
				
			}
			_loop116:;
			} // ( ... )*
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp30_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp30_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp30_AST);
			}
			match(RPAREN);
			{
			switch ( LA(1)) {
			case ON:
			{
				conflictclause();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case CHECK:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp31_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp31_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp31_AST);
			}
			match(CHECK);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp32_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp32_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp32_AST);
			}
			match(LPAREN);
			expr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp33_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp33_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp33_AST);
			}
			match(RPAREN);
			break;
		}
		case FOREIGN:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp34_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp34_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp34_AST);
			}
			match(FOREIGN);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp35_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp35_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp35_AST);
			}
			match(KEY);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp36_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp36_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp36_AST);
			}
			match(LPAREN);
			columnname();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp37_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp37_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp37_AST);
					}
					match(COMMA);
					columnname();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop119;
				}
				
			}
			_loop119:;
			} // ( ... )*
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp38_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp38_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp38_AST);
			}
			match(RPAREN);
			foreignkeyclause();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			tableconstraint_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
			tableconstraint_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(TABLECONSTRAINT,"TABLECONSTRAINT"))->add(tableconstraint_AST)));
			currentAST.root = tableconstraint_AST;
			if ( tableconstraint_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				tableconstraint_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = tableconstraint_AST->getFirstChild();
			else
				currentAST.child = tableconstraint_AST;
			currentAST.advanceChildToEnd();
		}
		tableconstraint_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_9);
		} else {
			throw;
		}
	}
	returnAST = tableconstraint_AST;
}

void Sqlite3Parser::selectstmt() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST selectstmt_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp39_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp39_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp39_AST);
		}
		match(SELECT);
		selectstmt_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_10);
		} else {
			throw;
		}
	}
	returnAST = selectstmt_AST;
}

void Sqlite3Parser::type_name() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST type_name_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{ // ( ... )+
		int _cnt98=0;
		for (;;) {
			if ((LA(1) == ID || LA(1) == QUOTEDID)) {
				name();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				if ( _cnt98>=1 ) { goto _loop98; } else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());}
			}
			
			_cnt98++;
		}
		_loop98:;
		}  // ( ... )+
		{
		switch ( LA(1)) {
		case LPAREN:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp40_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp40_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp40_AST);
			}
			match(LPAREN);
			signednumber();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{
			switch ( LA(1)) {
			case COMMA:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp41_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp41_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp41_AST);
				}
				match(COMMA);
				signednumber();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case RPAREN:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp42_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp42_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp42_AST);
			}
			match(RPAREN);
			break;
		}
		case CHECK:
		case COLLATE:
		case CONSTRAINT:
		case DEFAULT:
		case NOT:
		case PRIMARY:
		case REFERENCES:
		case UNIQUE:
		case RPAREN:
		case COMMA:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			type_name_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
			type_name_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(TYPE_NAME,"TYPE_NAME"))->add(type_name_AST)));
			currentAST.root = type_name_AST;
			if ( type_name_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				type_name_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = type_name_AST->getFirstChild();
			else
				currentAST.child = type_name_AST;
			currentAST.advanceChildToEnd();
		}
		type_name_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = type_name_AST;
}

void Sqlite3Parser::columnconstraint() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST columnconstraint_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case CONSTRAINT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp43_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp43_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp43_AST);
			}
			match(CONSTRAINT);
			name();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case CHECK:
		case COLLATE:
		case DEFAULT:
		case NOT:
		case PRIMARY:
		case REFERENCES:
		case UNIQUE:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{
		switch ( LA(1)) {
		case PRIMARY:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp44_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp44_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp44_AST);
			}
			match(PRIMARY);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp45_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp45_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp45_AST);
			}
			match(KEY);
			{
			switch ( LA(1)) {
			case ASC:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp46_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp46_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp46_AST);
				}
				match(ASC);
				break;
			}
			case DESC:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp47_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp47_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp47_AST);
				}
				match(DESC);
				break;
			}
			case AUTOINCREMENT:
			case CHECK:
			case COLLATE:
			case CONSTRAINT:
			case DEFAULT:
			case NOT:
			case PRIMARY:
			case REFERENCES:
			case UNIQUE:
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			{
			switch ( LA(1)) {
			case AUTOINCREMENT:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp48_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp48_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp48_AST);
				}
				match(AUTOINCREMENT);
				break;
			}
			case CHECK:
			case COLLATE:
			case CONSTRAINT:
			case DEFAULT:
			case NOT:
			case PRIMARY:
			case REFERENCES:
			case UNIQUE:
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case NOT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp49_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp49_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp49_AST);
			}
			match(NOT);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp50_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp50_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp50_AST);
			}
			match(NULL_T);
			{
			switch ( LA(1)) {
			case ON:
			{
				conflictclause();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case CHECK:
			case COLLATE:
			case CONSTRAINT:
			case DEFAULT:
			case NOT:
			case PRIMARY:
			case REFERENCES:
			case UNIQUE:
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case UNIQUE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp51_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp51_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp51_AST);
			}
			match(UNIQUE);
			{
			switch ( LA(1)) {
			case ON:
			{
				conflictclause();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case CHECK:
			case COLLATE:
			case CONSTRAINT:
			case DEFAULT:
			case NOT:
			case PRIMARY:
			case REFERENCES:
			case UNIQUE:
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case CHECK:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp52_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp52_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp52_AST);
			}
			match(CHECK);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp53_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp53_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp53_AST);
			}
			match(LPAREN);
			expr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp54_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp54_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp54_AST);
			}
			match(RPAREN);
			break;
		}
		case DEFAULT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp55_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp55_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp55_AST);
			}
			match(DEFAULT);
			{
			switch ( LA(1)) {
			case NUMERIC:
			case PLUS:
			case MINUS:
			{
				signednumber();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case STRINGLITERAL:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp56_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp56_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp56_AST);
				}
				match(STRINGLITERAL);
				break;
			}
			case LPAREN:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp57_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp57_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp57_AST);
				}
				match(LPAREN);
				expr();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp58_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp58_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp58_AST);
				}
				match(RPAREN);
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			break;
		}
		case COLLATE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp59_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp59_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp59_AST);
			}
			match(COLLATE);
			collationname();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case REFERENCES:
		{
			foreignkeyclause();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		if ( inputState->guessing==0 ) {
			columnconstraint_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(currentAST.root);
			columnconstraint_AST = ANTLR_USE_NAMESPACE(antlr)RefAST(astFactory->make((new ANTLR_USE_NAMESPACE(antlr)ASTArray(2))->add(astFactory->create(COLUMNCONSTRAINT,"COLUMNCONSTRAINT"))->add(columnconstraint_AST)));
			currentAST.root = columnconstraint_AST;
			if ( columnconstraint_AST!=ANTLR_USE_NAMESPACE(antlr)nullAST &&
				columnconstraint_AST->getFirstChild() != ANTLR_USE_NAMESPACE(antlr)nullAST )
				  currentAST.child = columnconstraint_AST->getFirstChild();
			else
				currentAST.child = columnconstraint_AST;
			currentAST.advanceChildToEnd();
		}
		columnconstraint_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = columnconstraint_AST;
}

void Sqlite3Parser::name() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST name_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case ID:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp60_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp60_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp60_AST);
			}
			match(ID);
			name_AST = currentAST.root;
			break;
		}
		case QUOTEDID:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp61_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp61_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp61_AST);
			}
			match(QUOTEDID);
			name_AST = currentAST.root;
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_11);
		} else {
			throw;
		}
	}
	returnAST = name_AST;
}

void Sqlite3Parser::conflictclause() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST conflictclause_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp62_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp62_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp62_AST);
		}
		match(ON);
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp63_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp63_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp63_AST);
		}
		match(CONFLICT);
		{
		switch ( LA(1)) {
		case ROLLBACK:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp64_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp64_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp64_AST);
			}
			match(ROLLBACK);
			break;
		}
		case ABORT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp65_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp65_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp65_AST);
			}
			match(ABORT);
			break;
		}
		case FAIL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp66_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp66_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp66_AST);
			}
			match(FAIL);
			break;
		}
		case IGNORE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp67_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp67_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp67_AST);
			}
			match(IGNORE);
			break;
		}
		case REPLACE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp68_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp68_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp68_AST);
			}
			match(REPLACE);
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		conflictclause_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = conflictclause_AST;
}

void Sqlite3Parser::expr() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST expr_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		bool synPredMatched144 = false;
		if (((_tokenSet_12.member(LA(1))) && (_tokenSet_13.member(LA(2))))) {
			int _m144 = mark();
			synPredMatched144 = true;
			inputState->guessing++;
			try {
				{
				subexpr();
				{
				switch ( LA(1)) {
				case GLOB:
				case LIKE:
				case IS:
				case MATCH:
				case REGEXP:
				case PLUS:
				case MINUS:
				case STAR:
				case AMPERSAND:
				case BITOR:
				case OROP:
				case EQUAL:
				case EQUAL2:
				case GREATER:
				case GREATEREQUAL:
				case LOWER:
				case LOWEREQUAL:
				case UNEQUAL:
				case UNEQUAL2:
				case BITWISELEFT:
				case BITWISERIGHT:
				case SLASH:
				case PERCENT:
				case IN:
				{
					binaryoperator();
					break;
				}
				case AND:
				{
					match(AND);
					break;
				}
				case OR:
				{
					match(OR);
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				}
				}
				}
			}
			catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& pe) {
				synPredMatched144 = false;
			}
			rewind(_m144);
			inputState->guessing--;
		}
		if ( synPredMatched144 ) {
			subexpr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((_tokenSet_14.member(LA(1)))) {
					{
					switch ( LA(1)) {
					case GLOB:
					case LIKE:
					case IS:
					case MATCH:
					case REGEXP:
					case PLUS:
					case MINUS:
					case STAR:
					case AMPERSAND:
					case BITOR:
					case OROP:
					case EQUAL:
					case EQUAL2:
					case GREATER:
					case GREATEREQUAL:
					case LOWER:
					case LOWEREQUAL:
					case UNEQUAL:
					case UNEQUAL2:
					case BITWISELEFT:
					case BITWISERIGHT:
					case SLASH:
					case PERCENT:
					case IN:
					{
						binaryoperator();
						if (inputState->guessing==0) {
							astFactory->addASTChild( currentAST, returnAST );
						}
						break;
					}
					case AND:
					{
						ANTLR_USE_NAMESPACE(antlr)RefAST tmp69_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
						if ( inputState->guessing == 0 ) {
							tmp69_AST = astFactory->create(LT(1));
							astFactory->addASTChild(currentAST, tmp69_AST);
						}
						match(AND);
						break;
					}
					case OR:
					{
						ANTLR_USE_NAMESPACE(antlr)RefAST tmp70_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
						if ( inputState->guessing == 0 ) {
							tmp70_AST = astFactory->create(LT(1));
							astFactory->addASTChild(currentAST, tmp70_AST);
						}
						match(OR);
						break;
					}
					default:
					{
						throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
					}
					}
					}
					subexpr();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop147;
				}
				
			}
			_loop147:;
			} // ( ... )*
			expr_AST = currentAST.root;
		}
		else if ((_tokenSet_12.member(LA(1))) && (_tokenSet_15.member(LA(2)))) {
			subexpr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			expr_AST = currentAST.root;
		}
		else {
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_16);
		} else {
			throw;
		}
	}
	returnAST = expr_AST;
}

void Sqlite3Parser::foreignkeyclause() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST foreignkeyclause_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp71_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp71_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp71_AST);
		}
		match(REFERENCES);
		tablename();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		{
		switch ( LA(1)) {
		case LPAREN:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp72_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp72_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp72_AST);
			}
			match(LPAREN);
			columnname();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			{ // ( ... )*
			for (;;) {
				if ((LA(1) == COMMA)) {
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp73_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp73_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp73_AST);
					}
					match(COMMA);
					columnname();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else {
					goto _loop126;
				}
				
			}
			_loop126:;
			} // ( ... )*
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp74_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp74_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp74_AST);
			}
			match(RPAREN);
			break;
		}
		case CHECK:
		case COLLATE:
		case CONSTRAINT:
		case DEFAULT:
		case DEFERRABLE:
		case NOT:
		case MATCH:
		case ON:
		case PRIMARY:
		case REFERENCES:
		case UNIQUE:
		case RPAREN:
		case COMMA:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{ // ( ... )*
		for (;;) {
			switch ( LA(1)) {
			case ON:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp75_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp75_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp75_AST);
				}
				match(ON);
				{
				switch ( LA(1)) {
				case DELETE:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp76_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp76_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp76_AST);
					}
					match(DELETE);
					break;
				}
				case UPDATE:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp77_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp77_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp77_AST);
					}
					match(UPDATE);
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				}
				}
				{
				switch ( LA(1)) {
				case SET:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp78_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp78_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp78_AST);
					}
					match(SET);
					{
					switch ( LA(1)) {
					case NULL_T:
					{
						ANTLR_USE_NAMESPACE(antlr)RefAST tmp79_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
						if ( inputState->guessing == 0 ) {
							tmp79_AST = astFactory->create(LT(1));
							astFactory->addASTChild(currentAST, tmp79_AST);
						}
						match(NULL_T);
						break;
					}
					case DEFAULT:
					{
						ANTLR_USE_NAMESPACE(antlr)RefAST tmp80_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
						if ( inputState->guessing == 0 ) {
							tmp80_AST = astFactory->create(LT(1));
							astFactory->addASTChild(currentAST, tmp80_AST);
						}
						match(DEFAULT);
						break;
					}
					default:
					{
						throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
					}
					}
					}
					break;
				}
				case CASCADE:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp81_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp81_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp81_AST);
					}
					match(CASCADE);
					break;
				}
				case RESTRICT:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp82_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp82_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp82_AST);
					}
					match(RESTRICT);
					break;
				}
				case NO:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp83_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp83_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp83_AST);
					}
					match(NO);
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp84_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp84_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp84_AST);
					}
					match(ACTION);
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				}
				}
				break;
			}
			case MATCH:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp85_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp85_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp85_AST);
				}
				match(MATCH);
				name();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			default:
			{
				goto _loop131;
			}
			}
		}
		_loop131:;
		} // ( ... )*
		{
		bool synPredMatched134 = false;
		if (((LA(1) == NOT) && (LA(2) == DEFERRABLE))) {
			int _m134 = mark();
			synPredMatched134 = true;
			inputState->guessing++;
			try {
				{
				match(NOT);
				match(DEFERRABLE);
				}
			}
			catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& pe) {
				synPredMatched134 = false;
			}
			rewind(_m134);
			inputState->guessing--;
		}
		if ( synPredMatched134 ) {
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp86_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp86_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp86_AST);
			}
			match(NOT);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp87_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp87_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp87_AST);
			}
			match(DEFERRABLE);
			{
			switch ( LA(1)) {
			case INITIALLY:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp88_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp88_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp88_AST);
				}
				match(INITIALLY);
				{
				switch ( LA(1)) {
				case DEFERRED:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp89_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp89_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp89_AST);
					}
					match(DEFERRED);
					break;
				}
				case IMMEDIATE:
				{
					ANTLR_USE_NAMESPACE(antlr)RefAST tmp90_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
					if ( inputState->guessing == 0 ) {
						tmp90_AST = astFactory->create(LT(1));
						astFactory->addASTChild(currentAST, tmp90_AST);
					}
					match(IMMEDIATE);
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				}
				}
				break;
			}
			case CHECK:
			case COLLATE:
			case CONSTRAINT:
			case DEFAULT:
			case NOT:
			case PRIMARY:
			case REFERENCES:
			case UNIQUE:
			case RPAREN:
			case COMMA:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
		}
		else if ((LA(1) == DEFERRABLE)) {
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp91_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp91_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp91_AST);
			}
			match(DEFERRABLE);
			{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp92_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp92_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp92_AST);
			}
			match(INITIALLY);
			{
			switch ( LA(1)) {
			case DEFERRED:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp93_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp93_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp93_AST);
				}
				match(DEFERRED);
				break;
			}
			case IMMEDIATE:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp94_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp94_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp94_AST);
				}
				match(IMMEDIATE);
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			}
		}
		else if ((_tokenSet_6.member(LA(1))) && (_tokenSet_17.member(LA(2)))) {
		}
		else {
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		
		}
		foreignkeyclause_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_6);
		} else {
			throw;
		}
	}
	returnAST = foreignkeyclause_AST;
}

void Sqlite3Parser::indexedcolumn() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST indexedcolumn_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		id();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		indexedcolumn_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_9);
		} else {
			throw;
		}
	}
	returnAST = indexedcolumn_AST;
}

void Sqlite3Parser::functionname() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST functionname_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		id();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		functionname_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_18);
		} else {
			throw;
		}
	}
	returnAST = functionname_AST;
}

void Sqlite3Parser::subexpr() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST subexpr_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		{
		switch ( LA(1)) {
		case MINUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp95_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp95_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp95_AST);
			}
			match(MINUS);
			break;
		}
		case PLUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp96_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp96_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp96_AST);
			}
			match(PLUS);
			break;
		}
		case TILDE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp97_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp97_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp97_AST);
			}
			match(TILDE);
			break;
		}
		case NOT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp98_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp98_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp98_AST);
			}
			match(NOT);
			break;
		}
		case CASE_T:
		case CAST:
		case CURRENT_TIME:
		case CURRENT_DATE:
		case CURRENT_TIMESTAMP:
		case NULL_T:
		case EXISTS:
		case RAISE:
		case ID:
		case QUOTEDID:
		case NUMERIC:
		case STRINGLITERAL:
		case LPAREN:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{
		switch ( LA(1)) {
		case CURRENT_TIME:
		case CURRENT_DATE:
		case CURRENT_TIMESTAMP:
		case NULL_T:
		case NUMERIC:
		case STRINGLITERAL:
		{
			literalvalue();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case CAST:
		{
			castexpr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case EXISTS:
		case LPAREN:
		{
			{
			switch ( LA(1)) {
			case EXISTS:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp99_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp99_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp99_AST);
				}
				match(EXISTS);
				break;
			}
			case LPAREN:
			{
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp100_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp100_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp100_AST);
			}
			match(LPAREN);
			{
			switch ( LA(1)) {
			case CASE_T:
			case CAST:
			case CURRENT_TIME:
			case CURRENT_DATE:
			case CURRENT_TIMESTAMP:
			case NOT:
			case NULL_T:
			case EXISTS:
			case RAISE:
			case ID:
			case QUOTEDID:
			case NUMERIC:
			case STRINGLITERAL:
			case LPAREN:
			case PLUS:
			case MINUS:
			case TILDE:
			{
				expr();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			case SELECT:
			{
				selectstmt();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp101_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp101_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp101_AST);
			}
			match(RPAREN);
			break;
		}
		case CASE_T:
		{
			caseexpr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case RAISE:
		{
			raisefunction();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		default:
			if ((LA(1) == ID || LA(1) == QUOTEDID) && (_tokenSet_19.member(LA(2)))) {
				{
				if ((LA(1) == ID || LA(1) == QUOTEDID) && ((LA(2) >= DOT && LA(2) <= QUOTEDID))) {
					{
					if ((LA(1) == ID || LA(1) == QUOTEDID) && (LA(2) == DOT)) {
						databasename();
						if (inputState->guessing==0) {
							astFactory->addASTChild( currentAST, returnAST );
						}
						ANTLR_USE_NAMESPACE(antlr)RefAST tmp102_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
						if ( inputState->guessing == 0 ) {
							tmp102_AST = astFactory->create(LT(1));
							astFactory->addASTChild(currentAST, tmp102_AST);
						}
						match(DOT);
					}
					else if ((LA(1) == ID || LA(1) == QUOTEDID) && (LA(2) == ID || LA(2) == QUOTEDID)) {
					}
					else {
						throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
					}
					
					}
					tablename();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
				}
				else if ((LA(1) == ID || LA(1) == QUOTEDID) && (_tokenSet_20.member(LA(2)))) {
				}
				else {
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				
				}
				columnname();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else if ((LA(1) == ID || LA(1) == QUOTEDID) && (LA(2) == LPAREN)) {
				functionname();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp103_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp103_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp103_AST);
				}
				match(LPAREN);
				{
				switch ( LA(1)) {
				case CASE_T:
				case CAST:
				case CURRENT_TIME:
				case CURRENT_DATE:
				case CURRENT_TIMESTAMP:
				case NOT:
				case NULL_T:
				case EXISTS:
				case RAISE:
				case ID:
				case QUOTEDID:
				case NUMERIC:
				case STRINGLITERAL:
				case LPAREN:
				case PLUS:
				case MINUS:
				case TILDE:
				{
					expr();
					if (inputState->guessing==0) {
						astFactory->addASTChild( currentAST, returnAST );
					}
					{ // ( ... )*
					for (;;) {
						if ((LA(1) == COMMA)) {
							ANTLR_USE_NAMESPACE(antlr)RefAST tmp104_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
							if ( inputState->guessing == 0 ) {
								tmp104_AST = astFactory->create(LT(1));
								astFactory->addASTChild(currentAST, tmp104_AST);
							}
							match(COMMA);
							expr();
							if (inputState->guessing==0) {
								astFactory->addASTChild( currentAST, returnAST );
							}
						}
						else {
							goto _loop155;
						}
						
					}
					_loop155:;
					} // ( ... )*
					break;
				}
				case RPAREN:
				{
					break;
				}
				default:
				{
					throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
				}
				}
				}
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp105_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp105_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp105_AST);
				}
				match(RPAREN);
			}
		else {
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{
		switch ( LA(1)) {
		case COLLATE:
		{
			suffixexpr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case AS:
		case AND:
		case OR:
		case ELSE_T:
		case END:
		case GLOB:
		case LIKE:
		case IS:
		case MATCH:
		case REGEXP:
		case THEN:
		case WHEN:
		case RPAREN:
		case COMMA:
		case PLUS:
		case MINUS:
		case STAR:
		case AMPERSAND:
		case BITOR:
		case OROP:
		case EQUAL:
		case EQUAL2:
		case GREATER:
		case GREATEREQUAL:
		case LOWER:
		case LOWEREQUAL:
		case UNEQUAL:
		case UNEQUAL2:
		case BITWISELEFT:
		case BITWISERIGHT:
		case SLASH:
		case PERCENT:
		case IN:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		subexpr_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_21);
		} else {
			throw;
		}
	}
	returnAST = subexpr_AST;
}

void Sqlite3Parser::binaryoperator() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST binaryoperator_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case OROP:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp106_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp106_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp106_AST);
			}
			match(OROP);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case STAR:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp107_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp107_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp107_AST);
			}
			match(STAR);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case SLASH:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp108_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp108_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp108_AST);
			}
			match(SLASH);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case PERCENT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp109_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp109_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp109_AST);
			}
			match(PERCENT);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case PLUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp110_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp110_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp110_AST);
			}
			match(PLUS);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case MINUS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp111_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp111_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp111_AST);
			}
			match(MINUS);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case BITWISELEFT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp112_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp112_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp112_AST);
			}
			match(BITWISELEFT);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case BITWISERIGHT:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp113_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp113_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp113_AST);
			}
			match(BITWISERIGHT);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case AMPERSAND:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp114_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp114_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp114_AST);
			}
			match(AMPERSAND);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case BITOR:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp115_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp115_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp115_AST);
			}
			match(BITOR);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case LOWER:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp116_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp116_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp116_AST);
			}
			match(LOWER);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case LOWEREQUAL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp117_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp117_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp117_AST);
			}
			match(LOWEREQUAL);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case GREATER:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp118_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp118_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp118_AST);
			}
			match(GREATER);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case GREATEREQUAL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp119_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp119_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp119_AST);
			}
			match(GREATEREQUAL);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case EQUAL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp120_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp120_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp120_AST);
			}
			match(EQUAL);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case EQUAL2:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp121_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp121_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp121_AST);
			}
			match(EQUAL2);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case UNEQUAL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp122_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp122_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp122_AST);
			}
			match(UNEQUAL);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case UNEQUAL2:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp123_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp123_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp123_AST);
			}
			match(UNEQUAL2);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case IS:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp124_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp124_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp124_AST);
			}
			match(IS);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case IN:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp125_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp125_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp125_AST);
			}
			match(IN);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case LIKE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp126_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp126_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp126_AST);
			}
			match(LIKE);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case GLOB:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp127_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp127_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp127_AST);
			}
			match(GLOB);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case MATCH:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp128_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp128_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp128_AST);
			}
			match(MATCH);
			binaryoperator_AST = currentAST.root;
			break;
		}
		case REGEXP:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp129_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp129_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp129_AST);
			}
			match(REGEXP);
			binaryoperator_AST = currentAST.root;
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_12);
		} else {
			throw;
		}
	}
	returnAST = binaryoperator_AST;
}

void Sqlite3Parser::literalvalue() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST literalvalue_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		switch ( LA(1)) {
		case NUMERIC:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp130_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp130_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp130_AST);
			}
			match(NUMERIC);
			literalvalue_AST = currentAST.root;
			break;
		}
		case STRINGLITERAL:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp131_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp131_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp131_AST);
			}
			match(STRINGLITERAL);
			literalvalue_AST = currentAST.root;
			break;
		}
		case NULL_T:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp132_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp132_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp132_AST);
			}
			match(NULL_T);
			literalvalue_AST = currentAST.root;
			break;
		}
		case CURRENT_TIME:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp133_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp133_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp133_AST);
			}
			match(CURRENT_TIME);
			literalvalue_AST = currentAST.root;
			break;
		}
		case CURRENT_DATE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp134_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp134_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp134_AST);
			}
			match(CURRENT_DATE);
			literalvalue_AST = currentAST.root;
			break;
		}
		case CURRENT_TIMESTAMP:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp135_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp135_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp135_AST);
			}
			match(CURRENT_TIMESTAMP);
			literalvalue_AST = currentAST.root;
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_20);
		} else {
			throw;
		}
	}
	returnAST = literalvalue_AST;
}

void Sqlite3Parser::castexpr() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST castexpr_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp136_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp136_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp136_AST);
		}
		match(CAST);
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp137_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp137_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp137_AST);
		}
		match(LPAREN);
		expr();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp138_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp138_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp138_AST);
		}
		match(AS);
		type_name();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp139_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp139_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp139_AST);
		}
		match(RPAREN);
		castexpr_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_20);
		} else {
			throw;
		}
	}
	returnAST = castexpr_AST;
}

void Sqlite3Parser::caseexpr() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST caseexpr_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp140_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp140_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp140_AST);
		}
		match(CASE_T);
		{
		switch ( LA(1)) {
		case CASE_T:
		case CAST:
		case CURRENT_TIME:
		case CURRENT_DATE:
		case CURRENT_TIMESTAMP:
		case NOT:
		case NULL_T:
		case EXISTS:
		case RAISE:
		case ID:
		case QUOTEDID:
		case NUMERIC:
		case STRINGLITERAL:
		case LPAREN:
		case PLUS:
		case MINUS:
		case TILDE:
		{
			expr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case WHEN:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		{ // ( ... )+
		int _cnt163=0;
		for (;;) {
			if ((LA(1) == WHEN)) {
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp141_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp141_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp141_AST);
				}
				match(WHEN);
				expr();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp142_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp142_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp142_AST);
				}
				match(THEN);
				expr();
				if (inputState->guessing==0) {
					astFactory->addASTChild( currentAST, returnAST );
				}
			}
			else {
				if ( _cnt163>=1 ) { goto _loop163; } else {throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());}
			}
			
			_cnt163++;
		}
		_loop163:;
		}  // ( ... )+
		{
		switch ( LA(1)) {
		case ELSE_T:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp143_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp143_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp143_AST);
			}
			match(ELSE_T);
			expr();
			if (inputState->guessing==0) {
				astFactory->addASTChild( currentAST, returnAST );
			}
			break;
		}
		case END:
		{
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp144_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp144_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp144_AST);
		}
		match(END);
		caseexpr_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_20);
		} else {
			throw;
		}
	}
	returnAST = caseexpr_AST;
}

void Sqlite3Parser::raisefunction() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST raisefunction_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp145_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp145_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp145_AST);
		}
		match(RAISE);
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp146_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp146_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp146_AST);
		}
		match(LPAREN);
		{
		switch ( LA(1)) {
		case IGNORE:
		{
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp147_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp147_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp147_AST);
			}
			match(IGNORE);
			break;
		}
		case ABORT:
		case FAIL:
		case ROLLBACK:
		{
			{
			switch ( LA(1)) {
			case ROLLBACK:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp148_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp148_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp148_AST);
				}
				match(ROLLBACK);
				break;
			}
			case ABORT:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp149_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp149_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp149_AST);
				}
				match(ABORT);
				break;
			}
			case FAIL:
			{
				ANTLR_USE_NAMESPACE(antlr)RefAST tmp150_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
				if ( inputState->guessing == 0 ) {
					tmp150_AST = astFactory->create(LT(1));
					astFactory->addASTChild(currentAST, tmp150_AST);
				}
				match(FAIL);
				break;
			}
			default:
			{
				throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
			}
			}
			}
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp151_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp151_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp151_AST);
			}
			match(COMMA);
			ANTLR_USE_NAMESPACE(antlr)RefAST tmp152_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
			if ( inputState->guessing == 0 ) {
				tmp152_AST = astFactory->create(LT(1));
				astFactory->addASTChild(currentAST, tmp152_AST);
			}
			match(STRINGLITERAL);
			break;
		}
		default:
		{
			throw ANTLR_USE_NAMESPACE(antlr)NoViableAltException(LT(1), getFilename());
		}
		}
		}
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp153_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp153_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp153_AST);
		}
		match(RPAREN);
		raisefunction_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_20);
		} else {
			throw;
		}
	}
	returnAST = raisefunction_AST;
}

void Sqlite3Parser::suffixexpr() {
	returnAST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	ANTLR_USE_NAMESPACE(antlr)ASTPair currentAST;
	ANTLR_USE_NAMESPACE(antlr)RefAST suffixexpr_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
	
	try {      // for error handling
		ANTLR_USE_NAMESPACE(antlr)RefAST tmp154_AST = ANTLR_USE_NAMESPACE(antlr)nullAST;
		if ( inputState->guessing == 0 ) {
			tmp154_AST = astFactory->create(LT(1));
			astFactory->addASTChild(currentAST, tmp154_AST);
		}
		match(COLLATE);
		collationname();
		if (inputState->guessing==0) {
			astFactory->addASTChild( currentAST, returnAST );
		}
		suffixexpr_AST = currentAST.root;
	}
	catch (ANTLR_USE_NAMESPACE(antlr)RecognitionException& ex) {
		if( inputState->guessing == 0 ) {
			reportError(ex);
			recover(ex,_tokenSet_21);
		} else {
			throw;
		}
	}
	returnAST = suffixexpr_AST;
}

void Sqlite3Parser::initializeASTFactory( ANTLR_USE_NAMESPACE(antlr)ASTFactory& factory )
{
	factory.setMaxNodeType(99);
}
const char* Sqlite3Parser::tokenNames[] = {
	"<0>",
	"EOF",
	"<2>",
	"NULL_TREE_LOOKAHEAD",
	"\"ABORT\"",
	"\"ACTION\"",
	"\"AUTOINCREMENT\"",
	"\"AS\"",
	"\"ASC\"",
	"\"AND\"",
	"\"OR\"",
	"\"CASCADE\"",
	"\"CASE\"",
	"\"CAST\"",
	"\"CHECK\"",
	"\"CREATE\"",
	"\"COLLATE\"",
	"\"CONFLICT\"",
	"\"CONSTRAINT\"",
	"\"CURRENT_TIME\"",
	"\"CURRENT_DATE\"",
	"\"CURRENT_TIMESTAMP\"",
	"\"DEFAULT\"",
	"\"DEFERRABLE\"",
	"\"DEFERRED\"",
	"\"DELETE\"",
	"\"DESC\"",
	"\"ELSE\"",
	"\"END\"",
	"\"ESCAPE\"",
	"\"FAIL\"",
	"\"FOREIGN\"",
	"\"GLOB\"",
	"\"KEY\"",
	"\"LIKE\"",
	"\"TABLE\"",
	"\"IF\"",
	"\"IGNORE\"",
	"\"INITIALLY\"",
	"\"IMMEDIATE\"",
	"\"IS\"",
	"\"NOT\"",
	"\"NULL\"",
	"\"MATCH\"",
	"\"EXISTS\"",
	"\"ON\"",
	"\"PRIMARY\"",
	"\"RAISE\"",
	"\"REFERENCES\"",
	"\"REGEXP\"",
	"\"REPLACE\"",
	"\"RESTRICT\"",
	"\"ROLLBACK\"",
	"\"SET\"",
	"\"TEMPORARY\"",
	"\"TEMP\"",
	"\"THEN\"",
	"\"UNIQUE\"",
	"\"UPDATE\"",
	"\"WHEN\"",
	"TYPE_NAME",
	"COLUMNDEF",
	"COLUMNCONSTRAINT",
	"TABLECONSTRAINT",
	"CREATETABLE",
	"DIGIT",
	"DOT",
	"ID",
	"QUOTEDID",
	"NUMERIC",
	"NL",
	"COMMENT",
	"WS",
	"STRINGLITERAL",
	"LPAREN",
	"RPAREN",
	"COMMA",
	"SEMI",
	"PLUS",
	"MINUS",
	"STAR",
	"TILDE",
	"AMPERSAND",
	"BITOR",
	"OROP",
	"EQUAL",
	"EQUAL2",
	"GREATER",
	"GREATEREQUAL",
	"LOWER",
	"LOWEREQUAL",
	"UNEQUAL",
	"UNEQUAL2",
	"BITWISELEFT",
	"BITWISERIGHT",
	"NO",
	"SELECT",
	"SLASH",
	"PERCENT",
	"IN",
	0
};

const unsigned long Sqlite3Parser::_tokenSet_0_data_[] = { 415581826UL, 184773381UL, 2147343388UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// EOF "AS" "AND" "OR" "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "DEFERRABLE" 
// "ELSE" "END" "GLOB" "LIKE" "IS" "NOT" "MATCH" "ON" "PRIMARY" "REFERENCES" 
// "REGEXP" "THEN" "UNIQUE" "WHEN" DOT ID QUOTEDID LPAREN RPAREN COMMA 
// PLUS MINUS STAR AMPERSAND BITOR OROP EQUAL EQUAL2 GREATER GREATEREQUAL 
// LOWER LOWEREQUAL UNEQUAL UNEQUAL2 BITWISELEFT BITWISERIGHT SLASH PERCENT 
// IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_0(_tokenSet_0_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_1_data_[] = { 0UL, 0UL, 4UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// DOT 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_1(_tokenSet_1_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_2_data_[] = { 12927106UL, 33647104UL, 7192UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "AS" "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "DEFERRABLE" "NOT" 
// "MATCH" "ON" "PRIMARY" "REFERENCES" "UNIQUE" ID QUOTEDID LPAREN RPAREN 
// COMMA 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_2(_tokenSet_2_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_3_data_[] = { 407193216UL, 184765189UL, 2147342360UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "ELSE" "END" 
// "GLOB" "LIKE" "IS" "NOT" "MATCH" "PRIMARY" "REFERENCES" "REGEXP" "THEN" 
// "UNIQUE" "WHEN" ID QUOTEDID RPAREN COMMA PLUS MINUS STAR AMPERSAND BITOR 
// OROP EQUAL EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL UNEQUAL2 
// BITWISELEFT BITWISERIGHT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_3(_tokenSet_3_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_4_data_[] = { 2UL, 0UL, 0UL, 0UL };
// EOF 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_4(_tokenSet_4_data_,4);
const unsigned long Sqlite3Parser::_tokenSet_5_data_[] = { 407193216UL, 184765189UL, 2147342336UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "ELSE" "END" 
// "GLOB" "LIKE" "IS" "NOT" "MATCH" "PRIMARY" "REFERENCES" "REGEXP" "THEN" 
// "UNIQUE" "WHEN" RPAREN COMMA PLUS MINUS STAR AMPERSAND BITOR OROP EQUAL 
// EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL UNEQUAL2 BITWISELEFT 
// BITWISERIGHT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_5(_tokenSet_5_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_6_data_[] = { 4538368UL, 33636864UL, 6144UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "NOT" "PRIMARY" "REFERENCES" 
// "UNIQUE" RPAREN COMMA 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_6(_tokenSet_6_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_7_data_[] = { 2UL, 0UL, 8192UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF SEMI 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_7(_tokenSet_7_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_8_data_[] = { 4538368UL, 33636864UL, 0UL, 0UL };
// "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "NOT" "PRIMARY" "REFERENCES" 
// "UNIQUE" 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_8(_tokenSet_8_data_,4);
const unsigned long Sqlite3Parser::_tokenSet_9_data_[] = { 0UL, 0UL, 6144UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// RPAREN COMMA 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_9(_tokenSet_9_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_10_data_[] = { 2UL, 0UL, 10240UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF RPAREN SEMI 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_10(_tokenSet_10_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_11_data_[] = { 2160410624UL, 33647104UL, 7192UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "DEFERRABLE" "FOREIGN" "NOT" 
// "MATCH" "ON" "PRIMARY" "REFERENCES" "UNIQUE" ID QUOTEDID LPAREN RPAREN 
// COMMA 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_11(_tokenSet_11_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_12_data_[] = { 3682304UL, 38400UL, 181816UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "CASE" "CAST" "CURRENT_TIME" "CURRENT_DATE" "CURRENT_TIMESTAMP" "NOT" 
// "NULL" "EXISTS" "RAISE" ID QUOTEDID NUMERIC STRINGLITERAL LPAREN PLUS 
// MINUS TILDE 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_12(_tokenSet_12_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_13_data_[] = { 406402688UL, 151166725UL, 2147475004UL, 15UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "CASE" "CAST" "COLLATE" "CURRENT_TIME" "CURRENT_DATE" 
// "CURRENT_TIMESTAMP" "ELSE" "END" "GLOB" "LIKE" "IS" "NOT" "NULL" "MATCH" 
// "EXISTS" "RAISE" "REGEXP" "THEN" "WHEN" DOT ID QUOTEDID NUMERIC STRINGLITERAL 
// LPAREN RPAREN COMMA PLUS MINUS STAR TILDE AMPERSAND BITOR OROP EQUAL 
// EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL UNEQUAL2 BITWISELEFT 
// BITWISERIGHT SELECT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_13(_tokenSet_13_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_14_data_[] = { 1536UL, 133381UL, 2147336192UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AND" "OR" "GLOB" "LIKE" "IS" "MATCH" "REGEXP" PLUS MINUS STAR AMPERSAND 
// BITOR OROP EQUAL EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL 
// UNEQUAL2 BITWISELEFT BITWISERIGHT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_14(_tokenSet_14_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_15_data_[] = { 406401152UL, 151033344UL, 187964UL, 1UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "CASE" "CAST" "COLLATE" "CURRENT_TIME" "CURRENT_DATE" "CURRENT_TIMESTAMP" 
// "ELSE" "END" "NOT" "NULL" "EXISTS" "RAISE" "THEN" "WHEN" DOT ID QUOTEDID 
// NUMERIC STRINGLITERAL LPAREN RPAREN COMMA PLUS MINUS TILDE SELECT 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_15(_tokenSet_15_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_16_data_[] = { 402653312UL, 150994944UL, 6144UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "ELSE" "END" "THEN" "WHEN" RPAREN COMMA 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_16(_tokenSet_16_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_17_data_[] = { 2152022018UL, 33646082UL, 65080UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// EOF "CHECK" "COLLATE" "CONSTRAINT" "DEFAULT" "FOREIGN" "KEY" "NOT" "NULL" 
// "ON" "PRIMARY" "REFERENCES" "UNIQUE" ID QUOTEDID NUMERIC STRINGLITERAL 
// LPAREN RPAREN COMMA SEMI PLUS MINUS 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_17(_tokenSet_17_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_18_data_[] = { 0UL, 0UL, 1024UL, 0UL, 0UL, 0UL, 0UL, 0UL };
// LPAREN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_18(_tokenSet_18_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_19_data_[] = { 402720384UL, 151128325UL, 2147342364UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "COLLATE" "ELSE" "END" "GLOB" "LIKE" "IS" "MATCH" "REGEXP" 
// "THEN" "WHEN" DOT ID QUOTEDID RPAREN COMMA PLUS MINUS STAR AMPERSAND 
// BITOR OROP EQUAL EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL 
// UNEQUAL2 BITWISELEFT BITWISERIGHT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_19(_tokenSet_19_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_20_data_[] = { 402720384UL, 151128325UL, 2147342336UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "COLLATE" "ELSE" "END" "GLOB" "LIKE" "IS" "MATCH" "REGEXP" 
// "THEN" "WHEN" RPAREN COMMA PLUS MINUS STAR AMPERSAND BITOR OROP EQUAL 
// EQUAL2 GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL UNEQUAL2 BITWISELEFT 
// BITWISERIGHT SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_20(_tokenSet_20_data_,8);
const unsigned long Sqlite3Parser::_tokenSet_21_data_[] = { 402654848UL, 151128325UL, 2147342336UL, 14UL, 0UL, 0UL, 0UL, 0UL };
// "AS" "AND" "OR" "ELSE" "END" "GLOB" "LIKE" "IS" "MATCH" "REGEXP" "THEN" 
// "WHEN" RPAREN COMMA PLUS MINUS STAR AMPERSAND BITOR OROP EQUAL EQUAL2 
// GREATER GREATEREQUAL LOWER LOWEREQUAL UNEQUAL UNEQUAL2 BITWISELEFT BITWISERIGHT 
// SLASH PERCENT IN 
const ANTLR_USE_NAMESPACE(antlr)BitSet Sqlite3Parser::_tokenSet_21(_tokenSet_21_data_,8);


