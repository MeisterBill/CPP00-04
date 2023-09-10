/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:39:42 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 20:22:45 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    public:

    HumanA(std::string str, Weapon &weapon);
    ~HumanA();
    void	attack();

    private:

    std::string	name;
    Weapon		&weapon; //reference because a reference cannot be NULL , a pointer can
};

#endif