#include <iostream>
#include "../includes/Start.hpp"

int		main(int argc, char **argv)
{
	Start	start;

	start.CheckArgs(argc, argv);
	if (argc > 2)
	{
		std::cout << "usage:\n./Abstract-VM filename\nor\n./Abstract-VM and press enter to use standard input\n";
	}
	argv = NULL;
	system("Leaks Abstract-VM");
	return 0;
}
