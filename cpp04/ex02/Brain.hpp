#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    const static int ideasSize = 100;
    std::string ideas[ideasSize];
public:
    Brain();
    Brain(Brain const &that);
    ~Brain();
    Brain &operator=(Brain const &that);
};

#endif
