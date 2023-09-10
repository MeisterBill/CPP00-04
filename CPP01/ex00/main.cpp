/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:54:16 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 17:07:09 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *bill = newZombie("Bill");

    bill->announce();
    randomChump("Georges");
	randomChump("Lucas");
	randomChump("Martin");
    delete bill;
}