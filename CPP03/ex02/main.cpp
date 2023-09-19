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
