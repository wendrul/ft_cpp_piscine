#include <iostream>
#include <iomanip>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    PhoneBook phoneBook = PhoneBook();
    std::cout << "$> ";
    while (std::getline(std::cin, cmd))
    {
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
        std::cout << "$> ";
    }
    std::cout << std::endl;
    return 0;
}