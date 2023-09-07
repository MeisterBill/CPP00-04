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
    return (first_name != "" && last_name != ""
    && nickname != "" && phone_number != ""
    && darkest_secret != "");
}