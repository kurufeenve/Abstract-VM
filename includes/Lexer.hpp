/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Lexer.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vordynsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:22:22 by vordynsk          #+#    #+#             */
/*   Updated: 2020/03/09 18:24:16 by vordynsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>
#include <regex>
#include <vector>
#include <sstream>
#include "AException.hpp"

class Lexer
{
	private:
		const std::vector<std::regex>	m_lexems;

	public:
				Lexer(void);
				Lexer(const Lexer &Lx) = delete;
				~Lexer(void);
		Lexer	&operator= (const Lexer &Lx) = delete;

		void	checkLexems(std::string line);
};

#endif
