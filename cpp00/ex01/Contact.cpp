#include "Contact.hpp"


Contact::Contact()
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    this->firstName = firstName;
    this->lastName = lastName;
    this->nickname = nickname;
    this->phoneNumber = phoneNumber;
    this->darkestSecret = darkestSecret;
}

Contact::~Contact()
{
}

void Contact::PrintField(std::string field)
{
    if (field.size() > 10)
    {
        std::cout << std::setw(9) << field << ".";
    }
    else
    {
        std::cout << std::setw(10) << field;
    }
}

void Contact::DisplayListElement(int index)
{
    std::cout << std::setw(10) << index;
    std::cout << "|";
    PrintField(firstName);
    std::cout << "|";
    PrintField(lastName);
    std::cout << "|";
    PrintField(nickname);
    std::cout << std::endl;
}

void Contact::DisplayAllInfo()
{
    std::cout << firstName << std::endl;
    std::cout << lastName << std::endl;
    std::cout << nickname << std::endl;
    std::cout << phoneNumber << std::endl;
    std::cout << darkestSecret << std::endl;
}
