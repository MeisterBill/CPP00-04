#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;

	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	std::cout << "ScavTrap copy constructor called\n";
	*this = other;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
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
		std::cout << this->_name << " Scavattacks " << target;
		std::cout << " for " << this->_attack_damage << std::endl;
		this->_energy_points -= 1;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << this->getName() << " enters Gate Keeper mode" << std::endl;
}
