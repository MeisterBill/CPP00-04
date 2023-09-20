/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:35:52 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/20 14:35:53 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Teemo("Teemo");
	ClapTrap 	Darius("Darius");
	ClapTrap Crab;

	Teemo.attack("Darius");
	Darius.takeDamage(0);
	Darius.attack("Teemo");
	Teemo.takeDamage(0);

	Crab.attack("Teemo");
	Teemo.takeDamage(0);
	Crab.attack("Darius");
	Darius.takeDamage(0);

	Teemo.beRepaired(2);
	Darius.beRepaired(2);

	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");
	Teemo.attack("Darius");

	Darius.takeDamage(13);
	Darius.attack("Teemo");
	Darius.beRepaired(2);

	return (0);
}
