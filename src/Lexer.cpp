#include "../includes/Lexer.hpp"

Lexer::Lexer() {}

Lexer::Lexer(const Lexer &Lex) {
	*this = Lex;
}

Lexer::~Lexer(void) {}

Lexer		&Lexer::operator= (const Lexer &Lex) {

	if (this != &Lex) {
		this->tockens = Lex.tockens;
	}
	return *this;
}
