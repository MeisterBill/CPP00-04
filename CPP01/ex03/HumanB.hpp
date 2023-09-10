/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:46 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 20:22:22 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:

    HumanB(std::string str);
    ~HumanB();
    void	attack();
	void	setWeapon(Weapon &weapon);

    private:

    std::string	name;
    Weapon		*weapon; //Pointer because this class doesn't need its weapon initialised right away
};

#endif