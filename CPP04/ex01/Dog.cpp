#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain(*(other._brain));
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->_type = "Dog";
	*this->_brain = *other._brain;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "wouf" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->_brain);
}
