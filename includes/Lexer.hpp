#ifndef LEXER_HPP
#define LEXER_HPP

//external
//#include <deque>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <memory>
#include <map>

//internal
#include "MyErrors.hpp"
#include "cmd.hpp"

class Error;

class Lexer
{
	private:
		//std::deque<std::string>			_tokens;
		std::map<int, std::string>		_cmds;
		//int								_error;
		std::string						_operator;
		std::string						_operand;
//		static bool  is_exist;
					Lexer();
					Lexer(const Lexer &Lex);
		Lexer		&operator= (const Lexer &Lex);
		
	public:
		virtual 	~Lexer();
		static Lexer  &GetInstatce()
		{
			static Lexer theOne;
			return theOne;
		}
		//std::deque<std::string>	getTokens(void) const;

		void					showTokens(void) const;
		int						tokenize(std::string str);
		std::string				commentIgnore(std::string str);
};

#endif
