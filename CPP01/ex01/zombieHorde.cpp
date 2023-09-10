/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:56:22 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 15:04:35 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *Horde = new Zombie[N];
    int i = 0;
    while (i < N)
	{
        Horde[i].set_name(name);
        i++;
    }
    return Horde;
}