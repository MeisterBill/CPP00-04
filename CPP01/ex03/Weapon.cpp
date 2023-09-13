/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:54 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:35:11 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str): type(str)
{}

Weapon::~Weapon()
{}

std::string Weapon::getType() const
{
    return (type);
}

void    Weapon::setType(std::string str)
{
    type = str;
}