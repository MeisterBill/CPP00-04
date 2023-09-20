/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:36:09 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/20 14:36:10 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

	ClapTrap clap("Clap");
	ScavTrap scav("Scav");

	clap.attack("scav");
	scav.takeDamage(0);
	scav.attack("clap");
	clap.takeDamage(20);
	scav.beRepaired(20);
	clap.beRepaired(2);
	clap.takeDamage(160);
	clap.attack("scav");
	scav.guardGate();
}
