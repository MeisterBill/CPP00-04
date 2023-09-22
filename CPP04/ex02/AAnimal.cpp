#include "AAnimal.hpp"
#include "Brain.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	this->_type = other._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (this->_type);
}

void AAnimal::makeSound() const
{
}

Brain *AAnimal::getBrain() const
{
	return (NULL);
}
