#ifndef START_HPP
#define START_HPP

//external
#include <iostream>
#include <string>
#include <stack>
#include <fstream>

//internal
#include "../includes/main.hpp"
#include "../includes/Lexer.hpp"
#include "../includes/MyErrors.hpp"
#include "../includes/IOperand.hpp"

class   Start
{
	private:
		std::string				_inputBuffer;
		std::stack <int>		_cmd;
		std::stack <IOperand>	_val;	
		int						_lineCounter;
		std::string				_greeting = "This is Abstract VM.\n\n";
		std::string				_usage = "Usage:\n";
		std::string				_help = "help\n";
		std::string				_version = "0.0.0 - nothing is ready yet.";

	protected:
					

	public:
					Start(void);
					Start(const Start &St);
					~Start(void);
		Start   	&operator= (const Start &St);

		std::string	getInputBuffer(void) const;

		void		setLineCounter(int);

		void		readInput(std::string fileName);
		void		checkFlags(int argc, char **flags);
		void		showStack(std::stack <int> s) const;
		void		push(int n);

};

#endif

/*
std::strin[] tmp = 
{
	push,
	pop,
	damp
}

enum Factory
{
	push,
	pop,
	damp
}

std::string inp;

for (std::size_t i = 0; i < tmp.size(); i++)
{
	if (tmp[i] == inp)
	return i;
}
throw some

 void DoSome(Factory tmp)
 {
	 switch (tmp)
	 {
	 case Factory::push:
		 pushfunk()
		 break;
	 
	 default:
		 break;
	 }
 }*/