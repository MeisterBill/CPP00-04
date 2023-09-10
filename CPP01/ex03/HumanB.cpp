/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:44 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 20:20:06 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string str): name(str), weapon(0)
{}

HumanB::~HumanB()
{}

void    HumanB::setWeapon(Weapon &some_weapon)
{
    weapon = &some_weapon;
}

void    HumanB::attack()
{
    if (weapon)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " attacks with their " << "bare hands" << std::endl;
}