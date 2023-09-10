/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:56:17 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 15:11:02 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str): name(str)
{}

Zombie::Zombie(): name("")
{}

Zombie::~Zombie()
{
    std::cout << name << " was killed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string str)
{
    name = str;
}