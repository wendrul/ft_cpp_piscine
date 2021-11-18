#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat norminet = Bureaucrat("Norminet", 1);
    Bureaucrat alex = Bureaucrat("Alex", 150);

    try
    {
        norminet.incrementGrade();
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << norminet;
    std::cout << alex;
    try
    {
        alex.decrementGrade();
        std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA\n";
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << alex;
    
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