#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Random"), _hit_points(10), _energy_points(10),
											 _attack_damage(0)
{
	std::cout << "Default ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10),
																			 _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap constructor called\n";
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap copy constructor called\n";
	*this = other;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called\n";
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	_name = other._name;
	_hit_points = other._hit_points;
	_energy_points = other._energy_points;
	_attack_damage = other._attack_damage;
	return (*this);
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

void ClapTrap::attack(const std::string &target)
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
		std::cout << this->_name << " Clapattacks " << target;
		std::cout << " for " << this->_attack_damage << std::endl;
		this->_energy_points -= 1;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << this->_name << " can't heal when already dead" << std::endl;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << this->_name << " can't heal while out of energy" << std::endl;
	}
	else
	{
		std::cout << this->_name << " heals himself for " << amount << std::endl;
		this->_hit_points += amount;
		this->_energy_points -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int real_amount = amount;

	if (this->_hit_points == 0)
	{
		std::cout << this->_name << " can't take damage, he's already dead" << std::endl;
	}
	else
	{
		if (this->_hit_points < amount)
		{
			real_amount = _hit_points;
		}
		std::cout << this->_name << " takes " << real_amount << " damage" << std::endl;
		this->_hit_points -= real_amount;
	}
}
