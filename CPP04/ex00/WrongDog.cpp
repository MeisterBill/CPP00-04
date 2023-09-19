#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	std::cout << "WrongDog constructor called" << std::endl;
	this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &other)
{
	std::cout << "WrongDog Copy constructor called" << std::endl;
	*this = other;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
	this->_type = other._type;
	return (*this);
}

void WrongDog::makeSound() const
{
	std::cout << "wrongwouf" << std::endl;
}
