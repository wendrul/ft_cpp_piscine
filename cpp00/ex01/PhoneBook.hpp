#pragma once
#ifndef __PHONE_BOOK_H__
#define __PHONE_BOOK_H__

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook
{
private:
    int size;
    const static int maxContacts = 8;
    Contact contacts[maxContacts];

public:
    PhoneBook();
    void AddContact();
    void AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
    void Search();
    ~PhoneBook();
};

#endif