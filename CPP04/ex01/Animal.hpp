#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{

protected:
	std::string _type;

public:
	Animal();
	Animal(const Animal &other);
	virtual ~Animal();
	Animal &operator=(const Animal &other);

	std::string getType() const;

	virtual void makeSound() const;
	virtual Brain *getBrain() const;
};

#endif
