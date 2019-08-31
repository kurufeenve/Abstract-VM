#include "../includes/Lexer.hpp"

Lexer::Lexer() {}

Lexer::Lexer(const Lexer &Lex) {
	*this = Lex;
}

Lexer::~Lexer(void) {}

Lexer		&Lexer::operator= (const Lexer &Lex) {

	if (this != &Lex) {
		this->_tokens = Lex._tokens;
	}
	return *this;
}

std::deque<std::string>	Lexer::getTokens(void) const {
	
	return (this->_tokens);
}

void					Lexer::showTokens(void) const {

	size_t	size;
	size_t	i;

	size = this->_tokens.size();
	for (i = 0; i < size; i++) {
		std::cout << this->_tokens.at(i) << std::endl;
	}
}

MyErrors				Lexer::tokenize(std::string str) {

	std::string		ss;

	ss = this->commentIgnore(str);
	if (ss.size() == 0) {
		this->_error = MyErrors::SKIPP_LINE;
		return (MyErrors::SKIPP_LINE);
	}
	std::stringstream	s(ss);

	return (MyErrors::SUCCESS);
}

std::string				Lexer::commentIgnore(std::string str) {

	return (str.substr(0, str.find(';', 0)));
}
