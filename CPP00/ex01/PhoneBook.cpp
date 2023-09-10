/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:27:09 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/09 22:57:58 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook():index(0){}

PhoneBook::~PhoneBook(){}

void	PhoneBook::confirm_add(Contact new_contact)
{
    contact[index % 8] = new_contact;
    index++;
}

bool	PhoneBook::check_empty()
{
    return (index);
}

void	PhoneBook::print_column(std::string str)
{
    int number_of_space = 11 - str.size();

    while (--number_of_space > 0)
        std::cout << ' ';
    if (str.size() > 10)
    {
        str[9] = '.';
        str = str.substr(0, 10);
    }
    std::cout << str;
    std::cout << '|';
}

void PhoneBook::print_phonebook()
{
    std::string c;
    int i = 0;

    while (i < 8 && i < index)
    {
        std::cout << '|';
        c = std::to_string(i + 1);
        print_column(c);
        print_column(contact[i].get_first_name());
        print_column(contact[i].get_last_name());
        print_column(contact[i].get_nickname());
        std::cout << std::endl;
        i++;
    }
}

void    PhoneBook::print_selection(int i)
{
    if (i < index)
        contact[i].print_contact();
    else
        std::cout << "Contact not found\n";
}