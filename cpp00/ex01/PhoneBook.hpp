#pragma once
#ifndef __PHONE_BOOK_H__
#define __PHONE_BOOK_H__

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

#define MAX_CONTACTS 8

class PhoneBook
{
private:
    int size;
    Contact contacts[MAX_CONTACTS];

public:
    PhoneBook();
    void AddContact();
    void AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
    void Search();
    ~PhoneBook();
};

#endif