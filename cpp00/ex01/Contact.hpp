#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <iomanip>

class Contact
{
private:
    void PrintField(std::string field);

public:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
    ~Contact();
    void DisplayListElement(int index);
    void DisplayAllInfo();
};

#endif