#include "../includes/main.hpp"

void    flags(std::string str)
{
    if (str == "-h")
    {
        std::cout << "help" << std::endl;
    }
    else if (str == "-v")
    {
        std::cout << "0.0.0 - nothing is ready yet." << std::endl;
        #ifdef LEAKS
            system("leaks Abstract-VM");
        #endif
        exit(1);
    }
}

read_input()

int     main(int argc, char **argv)
{
    for (int i = 0; i < argc; i++)
    {
        flags(static_cast<std::string>(argv[i]));
    }
    while (1)
    {
        read_input();
    }
    #ifdef LEAKS
            system("leaks Abstract-VM");
    #endif
    return (0);
}
