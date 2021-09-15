#include "Karen.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong number of args\n";
        return 0;
    }
    std::string levels[4] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"};
    int i;
    std::string name(argv[1]);
    for (i = 0; i < 5; i++)
    {
        if (i < 4 && levels[i] == name)
        {
            break;
        }
    }
    Karen martha;
    switch (i)
    {
    case 0:
        std::cout << "[DEBUG]" << std::endl;
        martha.complain("DEBUG");
        std::cout << std::endl;
    case 1:
        std::cout << "[INFO]" << std::endl;
        martha.complain("INFO");
        std::cout << std::endl;
    case 2:
        std::cout << "[WARNING]" << std::endl;
        martha.complain("WARNING");
        std::cout << std::endl;
    case 3:
        std::cout << "[ERROR]" << std::endl;
        martha.complain("ERROR"); 
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]\n";
        break;
    }
    return 0;
}