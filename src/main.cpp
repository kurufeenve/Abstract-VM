#include "../includes/main.hpp"

int		main(int argc, char **argv)
{
	Start	Start;
	
	Start.checkFlags(argc, argv);
	#ifdef LEAKS
			system("leaks Abstract-VM");
	#endif
	return (0);
}
