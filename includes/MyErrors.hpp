#ifndef MYERRORS_HPP
#define MYERRORS_HPP

enum class MyErrors {
	SUCCESS = 0x00,
	SKIP_LINE = 0x01,
	UNKNOWN_ERROR = 0xFF
};

class	Error : public std::exception
{
	public:
		Error();
		Error(const Error &Er);
		virtual ~Error() throw();
		Error	&operator= (const Error &Er);
		virtual const char *what(MyErrors error) const throw();
};

#endif
