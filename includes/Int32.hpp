#ifndef INT32_HPP
#define INT32_HPP

#include <cstdint>

class	Int32
{
	private:
		int32_t	number;

	public:
		Int32();
		Int32(const Int32 &int32);
		virtual	~Int32();
		Int32	&operator= (const Int32 &int32);

		void	setNumber(int32_t number);

		int32_t	getNumber(void) const;
};

#endif
