#ifndef START_HPP
#define START_HPP

#include <iostream>
#include <string>
#include <stack>

class   Start
{
	private:
		std::string			_inputBuffer;
		std::stack <int>	_s;
		int					_lineCounter;

	protected:
					

	public:
					Start(void);
					Start(const Start &St);
					~Start(void);
		Start   	&operator= (const Start &St);

		std::string	getInputBuffer(void) const;

		void		readInput();
		void		checkFlags(int argc, char **flags);
		void		showStack(std::stack <int> s) const;
		void		push(int n);

};

#endif
