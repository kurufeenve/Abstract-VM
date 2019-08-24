#ifndef LEXER_HPP
#define LEXER_HPP

#include <deque>
#include <string>
#include <iostream>
#include <sstream>

#include "MyErrors.hpp"

class Lexer
{
	private:
		std::deque<std::string> tokens;
		
	public:
					Lexer();
					Lexer(const Lexer &Lex);
		virtual 	~Lexer();
		Lexer		&operator= (const Lexer &Lex);

		std::deque<std::string>	getTokens(void) const;

		void					showTokens(void) const;
		MyErrors				tokenize(std::string str);
		std::string				commentIgnore(std::string str);
};

#endif
