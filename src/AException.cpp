#include "../includes/AException.hpp"

AException::AException(const std::string str) : m_ExceptionString(str) {}

AException::~AException()
{
	return ;
}

virtual const char *AException::what(void) const throw()
{
	return m_ExceptionString.c_str();
}
