#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a = DiamondTrap("A");
    ClapTrap *b = new DiamondTrap("B");
    ScavTrap *c = new DiamondTrap("C");
    FragTrap *d = new DiamondTrap("D");

    std::cout<< "\nStarting\n\n";
    a.attack("user");
    a.guardGate();
    a.highFivesGuys();
    a.whoAmI();
    a.takeDamage(2);
    
    std::cout << "\n";

    b->takeDamage(1);
    b->attack("user");
    c->guardGate();
    c->attack("people");
    d->attack("you");

    std::cout << "\n";

    delete b;
    delete c;
    delete d;
    return 0;
}