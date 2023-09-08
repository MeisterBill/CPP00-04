#include "Contact.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:27:04 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/07 21:06:14 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::set_first_name(std::string str)
{
	first_name = str;
}

void	Contact::set_last_name(std::string str)
{
	last_name = str;
}

void	Contact::set_nickname(std::string str)
{
	nickname = str;
}

void	Contact::set_secret(std::string str)
{
	darkest_secret = str;
}

void	Contact::set_phone_number(std::string str)
{
	phone_number = str;
}

int    Contact::is_empty()
{
    return (first_name not_eq "" && last_name not_eq ""
    && nickname not_eq "" && phone_number not_eq ""
    && darkest_secret not_eq "");
}

std::string Contact::get_first_name()
{
    return first_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}

std::string Contact::get_nickname()
{
    return nickname;
}

void    Contact::print_contact()
{
    std::cout << "First name : " << first_name << std::endl;
    std::cout << "Last name : " << last_name << std::endl;
    std::cout << "Nickname : " << nickname << std::endl;
    std::cout << "Phone number : " << phone_number << std::endl;
    std::cout << "Darkest_secret : " << darkest_secret << std::endl;
}
