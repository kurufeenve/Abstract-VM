#include "../includes/AException.hpp"

AException::AException(const std::string str) : m_ExceptionString(str) {}

AException::AException(const AException &AE)
{
	*this = AE;
}

AException::~AException()
{
	return ;
}

AException	&AException::operator= (const AException &AE)
{
	if (this != &AE)
		this->m_ExceptionString = AE.m_ExceptionString;
	return *this;
}

const char *AException::what(void) const throw()
{
	return m_ExceptionString.c_str();
}
