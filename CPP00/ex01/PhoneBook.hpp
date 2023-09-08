/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 20:26:03 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/08 15:35:20 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:

    PhoneBook();
    ~PhoneBook();

	void	confirm_add(Contact new_contact);
	bool	check_empty();
	void	print_phonebook();
	void	print_selection(int i);

    private:

    Contact	contact[8];
	int		index;
	void	print_column(std::string str);

};

#endif