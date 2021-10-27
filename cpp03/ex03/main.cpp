#include "FragTrap.hpp"

int main()
{
    FragTrap a = FragTrap("booboo");
    ClapTrap *b = new FragTrap();

    std::cout<< "\nStarting\n\n";
    b->takeDamage(1);
    b->attack("user");
    a.attack("user");
    a.highFivesGuys();
    a.takeDamage(99);
    a.beRepaired(1);
    return 0;
}