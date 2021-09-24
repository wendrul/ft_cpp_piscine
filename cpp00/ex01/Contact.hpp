#pragma once
#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
    void PrintField(std::string field);
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    void setFirstName(std::string value);
    void setLastName(std::string value);
    void setNickname(std::string value);
    void setPhoneNumber(std::string value);
    void setDarkestSecret(std::string value);
    Contact();
    Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret);
    ~Contact();
    void DisplayListElement(int index);
    void DisplayAllInfo();
};

#endif