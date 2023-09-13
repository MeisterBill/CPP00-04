/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:36:41 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 15:48:55 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    level[0] = "debug";
    level[1] = "info";
    level[2] = "warning";
    level[3] = "error";
    fct[0] = &Harl::debug;
    fct[1] = &Harl::info;
    fct[2] = &Harl::warning;
    fct[3] = &Harl::error;
}

Harl::~Harl()
{}

void Harl::complain(std::string lvl)
{
    int i = 0;
    while (i < 4)
    {
        if (level[i] == lvl)
        {
            (this->*fct[i])();
            break;
        }
        i++;
    }
}


void Harl::debug(void)
{
    std::cout << "Some DEBUG message.\n";
}

void Harl::info(void)
{
    std::cout << "Some INFO message.\n";
}

void Harl::warning(void)
{
    std::cout << "Some WARNING message.\n";
}

void Harl::error(void)
{
    std::cout << "Some ERROR message.\n";
}