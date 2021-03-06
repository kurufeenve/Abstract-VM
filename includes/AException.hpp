#ifndef AEXCEPTION_HPP
#define AEXCEPTION_HPP

#include <string>
#include <exception>

class	AException : public std::exception
{
	private:
		std::string	m_ExceptionString;

	public:
		AException(void) = delete;
		AException(const std::string str);
		AException(const AException &AE);
		~AException(void)/* throw()*/;
		AException	&operator= (const AException &AE);
		virtual const char *what(void) const throw();
};

#endif
