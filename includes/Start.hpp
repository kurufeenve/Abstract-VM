#ifndef START_HPP
#define START_HPP

#include <iostream>
#include <string>

class   Start
{
	private:
		std::string	_inputBuffer;

	protected:
					~Start(void);

	public:
					Start(void);
					Start(const Start &St);
		Start   	&operator= (const Start &St);

		std::string	getInputBuffer(void) const;

		void		readInput();
		void		checkFlags(int argc, char **flags);

};

#endif
