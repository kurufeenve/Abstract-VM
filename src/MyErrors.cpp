#include "../includes/MyErrors.hpp"

Error::Error()
{
	return ;
}

Error::Error(const Error &Er)
{
	*this = Er;
}

Error::~Error() throw()
{
	return ;
}

Error	&Error::operator= (const Error &Er)
{
	(void)Er;
	return *this;
}

const char *Error::what(MyErrors error) const throw()
{
	if (MyErrors::SKIP_LINE == error) {
		return ("ERROR: Skip line");
	}

	return ("ERROR: Unknown error");
}
