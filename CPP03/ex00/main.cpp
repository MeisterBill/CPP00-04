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
