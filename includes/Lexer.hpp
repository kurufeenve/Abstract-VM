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
		static std::unique_ptr<Lexer> single;
//		static bool  is_exist;
					Lexer();
					Lexer(const Lexer &Lex);
		Lexer		&operator= (const Lexer &Lex);
		
	public:
		virtual 	~Lexer();
		static Lexer  &GetInstatce()
		{
			if (single == nullptr)
			{
				single = std::unique_ptr<Lexer>(new Lexer());
			}
			return *single;
		}
		std::deque<std::string>	getTokens(void) const;

		void					showTokens(void) const;
		MyErrors				tokenize(std::string str);
		std::string				commentIgnore(std::string str);
};

#endif
