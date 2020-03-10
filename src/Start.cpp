#include "../includes/Start.hpp"

Start::Start(void) {}

Start::~Start(void)
{
	return ;
}

void	Start::CheckArgs(int argc, char **argv)
{
	if (argc == 1)
	{
		CLI();
	}	
	else if (argc == 2)
	{
		m_secondArg = argv[1];
		if (m_secondArg == "-h")
		{
			std::cout << m_usage << std::endl;
			exit (EXIT_SUCCESS);
		}
		else
		{
			readFile();
		}
	}
	else if (argc > 2)
	{
		//throw AException(m_err);
		std::cout << m_err << std::endl;
		exit (EXIT_FAILURE);
	}
}

void	Start::CLI(void)
{
	Lexer	L;

	try
	{
		for (std::string input; std::getline(std::cin, input);)
		{
			if (input == ";;")
			{
				exit (EXIT_SUCCESS);
			}
			L.checkLexems(input);
		}
	}
	catch (const AException& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Start::readFile(void)
{

}
