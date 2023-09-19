#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other)
{
	std::cout << "FragTrap copy constructor called\n";
	*this = other;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
	{
		std::cout << this->_name << " can't attack when dead" << std::endl;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << this->_name << " can't attack while out of energy" << std::endl;
	}
	else
	{
		std::cout << this->_name << " Fragattacks " << target;
		std::cout << " for " << this->_attack_damage << std::endl;
		this->_energy_points -= 1;
	}
}

void	FragTrap::highFivesGuys()
{
	std::cout << this->getName() << " asks for a high five" << std::endl;
}
