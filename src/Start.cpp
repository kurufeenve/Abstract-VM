#include "../includes/Start.hpp"

Start::Start(void) {}

Start::~Start(void)
{
	return ;
}

void	Start::CheckArgs(int argc, char **argv)
{
	const std::string	err = "ERROR: Wrong number of arguments\n";

	if (argc > 2)
	{
		throw AException(err);
	}
	std::cout << argv[1] << std::endl;
}
