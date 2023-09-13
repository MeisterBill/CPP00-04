/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:54:16 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 15:56:10 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("Bill");

    zombie->announce();
    randomChump("Georges");
	randomChump("Lucas");
	randomChump("Martin");
    delete zombie;
}