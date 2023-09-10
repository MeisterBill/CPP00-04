/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 13:54:29 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 17:07:15 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:

    Zombie(std::string str);
    ~Zombie();
    void	announce(void);

    private:

    std::string	name;
};

Zombie	*newZombie(std::string str);
void	randomChump(std::string str);

#endif