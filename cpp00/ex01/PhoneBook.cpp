#include "PhoneBook.hpp"
#include <iostream>
#include <limits>

PhoneBook::PhoneBook()
{
    this->size = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::AddContact()
{
    Contact newContact = Contact();
    std::string temp;

    std::cout << "\nContact first name?\n";
    std::cin >> temp;
    newContact.firstName = temp;

    std::cout << "\nContact last name?\n";
    std::cin >> temp;
    newContact.lastName = temp;

    std::cout << "\nContact nickname?\n";
    std::cin >> temp;
    newContact.nickname = temp;

    std::cout << "\nContact phone number?\n";
    std::cin >> temp;
    newContact.phoneNumber = temp;
    
    std::cout << "\nContact darkest secret?\n";
    std::cin >> temp;
    newContact.darkestSecret = temp;

    std::cout << "\nContact Succesfully Added\n";

    if (size < MAX_CONTACTS)
    {
        contacts[size] = newContact;
        size++;
    }
    else
        contacts[size - 1] = newContact;
}

void PhoneBook::AddContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
    contacts[size] = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
    if (size < MAX_CONTACTS)
        size++;
}

void PhoneBook::Search()
{
    int select;

    for (int i = 0; i < size; i++)
    {
        contacts[i].DisplayListElement(i);
    }
    while (1)
    {
        std::cout << "\nSelect a contact by entering its index\n";
        if (std::cin >> select && select >= 0 && select < size)
        {
            std::cout << std::endl;
            contacts[select].DisplayAllInfo();
            break;
        }
        else
        {
            std::cout << "Invalid index please select a valid index between 0 - " << size - 1 << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}
