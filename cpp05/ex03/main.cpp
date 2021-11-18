#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

#include <cstdlib>

int main()
{
    srand(time(0));
    Bureaucrat boss = Bureaucrat("Boss", 1);
    Intern i = Intern();

    Form* test = i.makeForm("test", "abc");
    Form* shrubMaker = i.makeForm("shrubbery creation", "backyard");
    Form* robotDio = i.makeForm("robotomy request", "Dio");
    Form* shigechiPardon = i.makeForm("presidential pardon", "Shigechi");

    boss.signForm(*robotDio);
    boss.executeForm(*robotDio);

    delete test;
    delete shrubMaker;
    delete robotDio;
    delete shigechiPardon;
}