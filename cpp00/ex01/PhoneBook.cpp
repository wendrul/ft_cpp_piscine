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

std::string PhoneBook::GetContactField()
{
    std::string tmp;

    while (std::getline(std::cin, tmp))
    {
        if (tmp.length() == 0)
        {
            std::cout << "Invalid empty field, try again.\n";
            continue;
        }
        return (tmp);
    }
    exit(0);
}

void PhoneBook::AddContact()
{
    Contact newContact = Contact();
    std::string temp;

    std::cout << "\nContact first name?\n";
    newContact.setFirstName(GetContactField());

    std::cout << "\nContact last name?\n";
    newContact.setLastName(GetContactField());

    std::cout << "\nContact nickname?\n";
    newContact.setNickname(GetContactField());

    std::cout << "\nContact phone number?\n";
    newContact.setPhoneNumber(GetContactField());

    std::cout << "\nContact darkest secret?\n";
    newContact.setDarkestSecret(GetContactField());

    std::cout << "\nContact Succesfully Added\n";

    if (size >= maxContacts)
    {
        for (int i = 0; i < maxContacts - 1; i++)
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
    if (size < maxContacts)
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
    std::cout << "\nSelect a contact by entering its index\n";
    if (std::cin >> select && select >= 0 && select < size)
    {
        std::cout << std::endl;
        contacts[select].DisplayAllInfo();
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    else
    {
        std::cout << "Invalid index please select a valid index between 0 - " << size - 1 << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
