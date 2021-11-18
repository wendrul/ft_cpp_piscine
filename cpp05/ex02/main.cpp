#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstdlib>

int main()
{
    srand(time(0));
    std::cout << "SHRUBBERY\n\n";
    ShrubberyCreationForm s = ShrubberyCreationForm("backyard");
    Bureaucrat iggy = Bureaucrat("Iggy", 148);
    Bureaucrat jotaro = Bureaucrat("Jotaro", 140);
    Bureaucrat josuke = Bureaucrat("Josuke", 130);

    iggy.signForm(s);
    iggy.executeForm(s);
    jotaro.signForm(s);
    jotaro.executeForm(s);
    josuke.signForm(s);
    josuke.executeForm(s);

    std::cout << "\nROBOTOMY\n\n";

    RobotomyRequestForm r1 = RobotomyRequestForm("Dog");
    RobotomyRequestForm r2 = RobotomyRequestForm("Dio");
    RobotomyRequestForm r3 = RobotomyRequestForm("Jolyne");
    Bureaucrat dio = Bureaucrat("Diooooo", 2);
    dio.executeForm(r1);
    dio.signForm(r1);
    dio.signForm(r2);
    dio.signForm(r3);
    dio.executeForm(r1);
    dio.executeForm(r2);
    dio.executeForm(r3);

    std::cout << "\nPRESIDENTIAL\n\n";

    Form* p = new PresidentialPardonForm("Shigechi");
    Bureaucrat trump = Bureaucrat("Donald Trump", 6);
    Bureaucrat edethom = Bureaucrat("ede-thom", 1);
    
    trump.signForm(*p);
    edethom.executeForm(*p);

    delete p;
}