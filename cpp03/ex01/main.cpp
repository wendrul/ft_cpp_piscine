#include "ClapTrap.hpp"

int main()
{
    ClapTrap a = ClapTrap("booboo");

    a.attack("user");
    a.takeDamage(99);
    a.beRepaired(1);
    return 0;
}