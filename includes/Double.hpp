#ifndef DOUBLE_HPP
#define DOUBLE_HPP

#include <cstdint>

class	Double
{
	private:
		double	number;

	public:
		Double();
		Double(const Double &db);
		virtual	~Double();
		Double	&operator= (const Double &db);

		void	setNumber(double number);

		double	getNumber(void) const;
};

#endif
