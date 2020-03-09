#ifndef START_HPP
#define START_HPP

#include <iostream>
#include "../includes/AException.hpp"

class Start
{
	private:
	
	public:
				Start(void);
				Start(const Start &St) = delete;
				Start(const Start &&St) = delete; // To disable move in C++
				~Start(void);
		Start	&operator= (const Start &St) = delete;

		void	CheckArgs(int argc, char **argv);

		
};

#endif
