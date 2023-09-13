/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:56:12 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:06:35 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(5, "Julio");
    int i = 0;
    while (i < 5)
	{
        zombie[i].announce();
        i++;
    }
    delete[] zombie;
}