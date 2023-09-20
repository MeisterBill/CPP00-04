/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:36:43 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/20 14:36:44 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

	ClapTrap clap("Clap");
	ScavTrap scav("Scav");
	FragTrap frag("Frag");

	scav.guardGate();
	frag.highFivesGuys();
	scav.attack("Frag");
	frag.takeDamage(20);
	frag.attack("Scav");
	scav.takeDamage(30);
	frag.attack("Scav");
	scav.takeDamage(30);
	frag.attack("Scav");
	scav.takeDamage(30);
	frag.attack("Scav");
	scav.takeDamage(30);
	scav.beRepaired(100);
	frag.highFivesGuys();
}
