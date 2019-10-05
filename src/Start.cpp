#include "../includes/Start.hpp"
#include "../includes/main.hpp"

Start::Start(void): _lineCounter(0) {}

Start::Start(const Start &St) {
	*this = St;
}

Start::~Start(void) {}

Start		&Start::operator= (const Start &St) {

	if (this != &St) {
		this->_inputBuffer = St.getInputBuffer();
	}
	return *this;
}

std::string	Start::getInputBuffer(void) const {

	return this->_inputBuffer;
}

void		Start::setLineCounter(int counter) {

	this->_lineCounter = counter;
}

void		Start::readInput() {

	Lexer	&Lexer = Lexer::GetInstatce();

	for(std::string line; std::getline(std::cin, line);) {
		line = Lexer.commentIgnore(line);
		if (Lexer.tokenize(line) == static_cast<int>(MyErrors::SKIP_LINE)) {
			std::cout << "skip the line" << std::endl;
		}
		if (line.find(END_OF_OPERATION) || line == "exit") {
			//this->compute();
			exit(0);
		}
		this->_lineCounter++;
	}
}

void		Start::checkFlags(int argc, char **flags) {

	if (argc < 2) {
		std::cout << this->_greeting << this->_usage << std::endl;
	}
	else {
		for (int i = 0; i < argc; i++)
		{
			this->_inputBuffer = flags[i];
			if (this->_inputBuffer == "-h") {
				std::cout << this->_help << std::endl;
			}
			else if (this->_inputBuffer == "-v")
			{
				std::cout << this->_version << std::endl;
				#ifdef LEAKS
					system("leaks Abstract-VM");
				#endif
				exit(0);
			}
		}
	}
	this->readInput();
}

void		Start::showStack(std::stack <int> s) const {

	std::stack <int> buff;

	buff = s;
	while (buff.empty()) {
		std::cout << "\t" << buff.top() << std::endl;
		buff.pop();
	}
	std::cout << "" << std::endl;
}

void		Start::push(int n) {

	std::cout << n << std::endl;
	//this->s.push(n);
}
