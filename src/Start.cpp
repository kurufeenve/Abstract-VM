#include "../includes/Start.hpp"
#include "../includes/main.hpp"

Start::Start(void) {}

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

void		Start::readInput() {

	for(std::string line; std::getline(std::cin, line);) {
		std::cout << line << std::endl;
		if (line == END_OF_OPERATION) {
			exit(0);
		}
	}
}

void		Start::checkFlags(int argc, char **flags) {

	if (argc < 2) {
		std::cout << "This is Abstract VM.\n\nUsage:\n" << std::endl;
	}
	else {
		for (int i = 0; i < argc; i++)
		{
			this->_inputBuffer = flags[i];
			if (this->_inputBuffer == "-h") {
				std::cout << "help" << std::endl;
			}
			else if (this->_inputBuffer == "-v")
			{
				std::cout << "0.0.0 - nothing is ready yet." << std::endl;
				#ifdef LEAKS
					system("leaks Abstract-VM");
				#endif
				exit(0);
			}
		}
	}
	this->readInput();
}
