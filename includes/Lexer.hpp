#ifndef LEXER_HPP
#define LEXER_HPP

#include <deque>
#include <string>

class Lexer
{
	private:
		std::deque<std::string> tockens;
		
	public:
					Lexer();
					Lexer(const Lexer &Lex);
		virtual 	~Lexer();
		Lexer		&operator= (const Lexer &Lex);

		std::deque<std::string>	getTockens(void) const;
};

#endif
