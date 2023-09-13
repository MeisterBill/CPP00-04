/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:36:41 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 17:08:45 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    level[0] = "debug";
    level[1] = "info";
    level[2] = "warning";
    level[3] = "error";
    fct_tab[0] = &Harl::debug;
    fct_tab[1] = &Harl::info;
    fct_tab[2] = &Harl::warning;
    fct_tab[3] = &Harl::error;
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
            (this->*fct_tab[i])();
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