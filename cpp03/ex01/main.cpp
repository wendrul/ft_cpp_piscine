#include "ScavTrap.hpp"

int main()
{
    ScavTrap a = ScavTrap("booboo");
    ClapTrap *b = new ScavTrap();

    std::cout<< "\nStarting\n\n";
    b->takeDamage(1);
    b->attack("user");
    a.attack("user");
    a.guardGate();
    a.takeDamage(99);
    a.beRepaired(1);
    return 0;
}