#ifndef START_HPP
#define START_HPP

#include <iostream>
#include <string>
#include "AException.hpp"
#include "Lexer.hpp"

class Start
{
	private:
	const std::string	m_err = "ERROR: Wrong number of arguments\nuse -h for help\n";
	const std::string	m_usage = "usage:\n./Abstract-VM filename\nor\n./Abstract-VM and press enter to use standard input\n";
	std::string			m_secondArg;

	public:
				Start(void);
				Start(const Start &St) = delete;
				Start(const Start &&St) = delete; // To disable move in C++
				~Start(void);
		Start	&operator= (const Start &St) = delete;

		void	CheckArgs(int argc, char **argv);
		void	CLI(void);
		void	readFile(void);
		
};

#endif
