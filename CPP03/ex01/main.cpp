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
