#pragma once
#ifndef _KAREN_HPP_
#define _KAREN_HPP

#include <iostream>

class Karen
{
private:
    typedef struct s_KarenLevel {
        std::string name;
        void (Karen::*func)(void);
    } KarenLevel;
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Karen(/* args */);
    ~Karen();
    void complain(std::string level);
};

#endif
