#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain(*(other._brain));
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	this->_type = "Cat";
	*this->_brain = *other._brain;
	return (*this);
}

void Cat::makeSound(void) const
{
	std::cout << "miaouw" << std::endl;
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}
