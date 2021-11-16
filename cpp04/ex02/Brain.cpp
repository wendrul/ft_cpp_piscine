#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructed Brain\n";
}

Brain::Brain(Brain const &that)
{
    std::cout << "Constructed Brain by copy\n";

    for (int i = 0; i < ideasSize; i++)
    {
        ideas[i] = that.ideas[i].c_str();
    }
}

Brain::~Brain()
{
    std::cout << "Destructed Brain\n";
}

Brain &Brain::operator=(Brain const &that)
{
    std::cout << "Brain assigned\n";

    for (int i = 0; i < ideasSize; i++)
    {
        ideas[i] = that.ideas[i].c_str();
    }
    return *this;
}
