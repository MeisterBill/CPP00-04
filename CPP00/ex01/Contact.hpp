/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:26:13 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/07 21:55:08 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:

    Contact();
    ~Contact();

	void	set_first_name(std::string str);
	void	set_last_name(std::string str);
	void	set_nickname(std::string str);
	void	set_phone_number(std::string str);
	void	set_secret(std::string str);

	std::string	get_first_name();
    std::string	get_last_name();
    std::string	get_nickname();

	int		is_empty();
	void	print_contact();

    private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
};

#endif