#include "../includes/Lexer.hpp"

Lexer::Lexer() {}

Lexer::Lexer(const Lexer &Lex) {
	*this = Lex;
}

Lexer::~Lexer(void) {}

Lexer		&Lexer::operator= (const Lexer &Lex) {

	if (this != &Lex) {
		//this->_tokens = Lex._tokens;
	}
	return *this;
}

// std::deque<std::string>	Lexer::getTokens(void) const {
	
// 	return (this->_tokens);
// }

void					Lexer::showTokens(void) const {

	// size_t	size;
	// size_t	i;

	// size = this->_tokens.size();
	// for (i = 0; i < size; i++) {
	// 	std::cout << this->_tokens.at(i) << std::endl;
	// }
}

int				Lexer::tokenize(std::string str) {

	std::istringstream	stringStream(str);

	stringStream >> this->_operator >> this->_operand;
	std::cout << this->_operator << std::endl;
	std::cout << this->_operand << std::endl;
	return (0);
}

std::string				Lexer::commentIgnore(std::string str) {

	return (str.substr(0, str.find(';', 0)));
}
