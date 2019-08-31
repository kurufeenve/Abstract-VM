#ifndef LEXER_HPP
#define LEXER_HPP

#include <deque>
#include <string>
#include <iostream>
#include <sstream>

#include "MyErrors.hpp"

class Error;

class Lexer
{
	private:
		std::deque<std::string>			_tokens;
		static std::unique_ptr<Lexer>	_single;
		MyErrors						_error;
//		static bool  is_exist;
					Lexer();
					Lexer(const Lexer &Lex);
		Lexer		&operator= (const Lexer &Lex);
		
	public:
		virtual 	~Lexer();
		static Lexer  &GetInstatce()
		{
			if (_single == nullptr)
			{
				_single = std::unique_ptr<Lexer>(new Lexer());
			}
			return *_single;
		}
		std::deque<std::string>	getTokens(void) const;

		void					showTokens(void) const;
		MyErrors				tokenize(std::string str);
		std::string				commentIgnore(std::string str);
};

#endif
