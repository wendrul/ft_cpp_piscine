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
    std::getline(std::cin, temp);
    newContact.setFirstName(temp);

    std::cout << "\nContact last name?\n";
    std::getline(std::cin, temp);
    newContact.setLastName(temp);

    std::cout << "\nContact nickname?\n";
    std::getline(std::cin, temp);
    newContact.setNickname(temp);

    std::cout << "\nContact phone number?\n";
    std::getline(std::cin, temp);
    newContact.setPhoneNumber(temp);

    std::cout << "\nContact darkest secret?\n";
    std::getline(std::cin, temp);
    newContact.setDarkestSecret(temp);

    std::cout << "\nContact Succesfully Added\n";
    
    if (size >= MAX_CONTACTS)
    {
        for (int i = 0; i < MAX_CONTACTS - 1; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        size--;
    }
    contacts[size] = newContact;
    size++;

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

    if (size <= 0)
    {
        std::cout << "Empty and crappy phonebook\n";
        return;
    }
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
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
