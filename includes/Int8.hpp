#ifndef INT8_HPP
#define INT8_HPP

#include <cstdint>

class	Int8: public IOperand
{
	private:
		int8_t	number;

	public:
		Int8();
		Int8(const Int8 &int8);
		virtual	~Int8();
		Int8	&operator= (const Int8 &int8);

		void	setNumber(int8_t number);

		int8_t	getNumber(void) const;

		
};

#endif
