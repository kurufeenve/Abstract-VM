#include "../includes/main.hpp"

int		main(int argc, char **argv)
{
	Start	Start;
	
	Start.setLineCounter(0);
	Start.checkFlags(argc, argv);
	std::cout << static_cast<int>(MyErrors::SUCCESS) << std::endl;
	#ifdef LEAKS
			system("leaks Abstract-VM");
	#endif
	return (0);
}
