/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 15:54:18 by vordynsk          #+#    #+#             */
/*   Updated: 2020/03/09 18:25:30 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Lexer.hpp"

Lexer::Lexer(void) : m_lexems({std::regex("push"), std::regex("pop"), \
		std::regex("dump"), std::regex("assert"), std::regex("add"), \
		std::regex("sub"), std::regex("mul"), std::regex("div"), \
		std::regex("mod"), std::regex("print"), std::regex("exit"), \
		std::regex("int(8|16|32)\\(-?\\d{1,}\\)"), \
		std::regex("(float|double)\\(-?\\d{1,}.?\\d{0,}\\)"), }) {}

Lexer::~Lexer(void)
{
	return ;
}

void	Lexer::checkLexems(std::string line)
{
	std::istringstream	sline(line);
	std::string			word;
	int					state = 0;

	for (;sline >> word;)
	{
		if (word == ";")
		{
			std::cout << "break" << std::endl;
			break ;
		}
		for (auto const &lexema : m_lexems)
		{
			if (std::regex_match(word, lexema))
			{
				state = 1;
				break ;
			}
		}
		if (state == 0)
		{
			std::string	ex = "NO such lexema '" + word + "'";
			throw AException(ex);
		}
	}
}
