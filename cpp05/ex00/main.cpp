#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat jim = Bureaucrat("Jimmy", 1);
    Bureaucrat gary = Bureaucrat("Big Gary", 150);

    try
    {
        jim.incrementGrade();
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << jim;
    std::cout << gary;
    try
    {
        gary.decrementGrade();
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << gary;
    
    try
    {
        Bureaucrat("genius", 0);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat("idiot", 151);
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}