#ifndef LEXER_HPP
#define LEXER_HPP

#include <deque>
#include <string>
#include <iostream>
#include <sstream>
#include <memory>


#include "MyErrors.hpp"

class Error;

class Lexer
{
	private:
		std::deque<std::string>			_tokens;
		int								_error;
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
		std::deque<std::string>	getTokens(void) const;

		void					showTokens(void) const;
		int						tokenize(std::string str);
		std::string				commentIgnore(std::string str);
};

#endif
