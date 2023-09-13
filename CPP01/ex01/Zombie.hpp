/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 14:56:20 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 16:08:57 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    Zombie(std::string str);
    Zombie();
    ~Zombie();
    void	announce(void);
    void	set_name(std::string name);

    private:

    std::string	name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif