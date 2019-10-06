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

MyErrors				Lexer::tokenize(std::string str) {

	std::istringstream	stringStream(str);
	MyErrors			res;

	res = MyErrors::UNKNOWN_ERROR;
	stringStream >> this->_operator >> this->_operand;
	std::cout << this->_operator << std::endl;
	std::cout << this->_operand << std::endl;
	for (int i = 0; i < CMD_MAX_NUM; i++) {
		if (this->_operator == this->_cmds[i]) {
			if ((this->_operator == this->_cmds[static_cast<int>(cmd::push)] ||
			this->_operator == this->_cmds[static_cast<int>(cmd::assert)]) && this->_operand.empty()) {

				return MyErrors::OPERAND_EMPTY;
			}
			//call the parser
			res = MyErrors::SUCCESS;
		}
	}
	return (res);
}

std::string				Lexer::commentIgnore(std::string str) {

	std::string	ret(str.begin(), std::find(str.begin(), str.end(), ';'));
	return ret;
}
