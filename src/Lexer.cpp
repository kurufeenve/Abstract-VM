#include "../includes/Lexer.hpp"

Lexer::Lexer() {

	std::string	cmds[] = {"push", "pop", "dump", "assert", "add", "sub", "mul", "div", "mod", "print", "exit"};

	for (int i = 0; i < CMD_MAX_NUM; i++) {
		this->_cmds.emplace(i, cmds[i]);
	}
}

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
	bool				res;

	res = 1;
	stringStream >> this->_operator >> this->_operand;
	std::cout << this->_operator << std::endl;
	std::cout << this->_operand << std::endl;
	for (int i = 0; i < CMD_MAX_NUM; i++) {
		if (this->_operator == this->_cmds[i]) {
			//call the parser
			res = 0;
		}
	}
	return (res);
}

std::string				Lexer::commentIgnore(std::string str) {

	std::size_t	pos;

	pos = str.find(';');
	if (pos == std::string::npos) {
		return str;
	}
	return str.substr(0, pos);
}
