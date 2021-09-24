#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"


int main()
{
    PhoneBook phoneBook = PhoneBook();
    while (1)
    {
        std::string cmd;
        
        std::cout << "$> ";
        std::getline(std::cin, cmd);
        if (cmd == "ADD")
        {
            phoneBook.AddContact();
        }
        else if (cmd == "SEARCH")
        {
            phoneBook.Search();
        }
        else if (cmd == "EXIT")
        {
            return 0;
        }
    }
    return 0;
}