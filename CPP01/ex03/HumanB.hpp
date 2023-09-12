/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:46 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/12 14:52:38 by artvan-d         ###   ########.fr       */
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
    Weapon		*weapon; //Pointer because this class doesn't need a weapon initialised directly, pointer can be NULL
};

#endif