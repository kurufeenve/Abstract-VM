#ifndef INT16_HPP
#define INT16_HPP

#include <cstdint>

class	Int16
{
	private:
		int16_t	number;

	public:
		Int16();
		Int16(const Int16 &int16);
		virtual	~Int16();
		Int16	&operator= (const Int16 &int16);

		void	setNumber(int16_t number);

		int16_t	getNumber(void) const;
};

#endif
