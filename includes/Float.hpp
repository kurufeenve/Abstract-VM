#ifndef FLOAT_HPP
#define FLOAT_HPP

#include <cstdint>

class	Float
{
	private:
		float	number;

	public:
		Float();
		Float(const Float &fl);
		virtual	~Float();
		Float	&operator= (const Float &fl);

		void	setNumber(float number);

		float	getNumber(void) const;
};

#endif
