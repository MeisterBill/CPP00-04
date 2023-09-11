/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:25:46 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/08 15:58:35 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void    add_contact(PhoneBook &phonebook)
{
    Contact		new_contact;
    std::string	str;

    std::cout << "First name : ";
    std::getline(std::cin, str);
    new_contact.set_first_name(str);
    std::cout << "Last name : ";
    std::getline(std::cin, str);
    new_contact.set_last_name(str);
    std::cout << "Nickname : ";
    std::getline(std::cin, str);
    new_contact.set_nickname(str);
    std::cout << "Phone number : ";
    std::getline(std::cin, str);
    new_contact.set_phone_number(str);
    std::cout << "Darkest secret : ";
    std::getline(std::cin, str);
    new_contact.set_secret(str);
    if (new_contact.is_empty())
        phonebook.confirm_add(new_contact);
    else
        std::cout << "Contact not added : a field is empty\n";
}

void    search_contact(PhoneBook &phonebook)
{
    std::string	str;
    Contact		contact;

    if (not phonebook.check_empty())
        return (void)(std::cout << "Your phonebook is empty\n");
    phonebook.print_phonebook();
    std::cout << "Choose a contact : ";
    getline(std::cin, str);
    if (str[0] >= '1' && str[0] <= '8' && str.size() == 1)
        phonebook.print_selection(str[0] - 1 - '0');
    else
        std::cout << "Contact not found\n";
}

int main()
{
    PhoneBook   phonebook;
    std::string      str;

    std::cout << "Welcome to your phonebook\n";
    std::cout << "You can run one of these commands :\n";
    std::cout << "ADD --- SEARCH --- EXIT\n";
    while (not std::cin.eof())
    {
		std::cout << "Run a command : ";
        std::getline(std::cin, str);
        if (str == "ADD")
           add_contact(phonebook);
        else if (str == "SEARCH")
            search_contact(phonebook);
        else if (str == "EXIT")
            break ;
        else
            std::cout << "Only ADD , SEARCH and EXIT are valid commands.\n";
    }
}
