#ifndef MYERRORS_HPP
#define MYERRORS_HPP

enum class MyErrors {
	SUCCESS = 0x00,
	SKIP_LINE = 0x01,
	OPERAND_EMPTY = 0x02,
	UNKNOWN_ERROR = 0xFF
};

class	Error : public std::exception
{
	private:
		MyErrors	_error;

	public:
		Error();
		Error(const Error &Er);
		virtual ~Error() throw();
		Error	&operator= (const Error &Er);
		virtual const char *what() const throw();
		void		setError() __attribute__ ((noreturn));
};

#endif
