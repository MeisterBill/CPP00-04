#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{

	private:

	Brain *_brain;

	public:

	Dog();
	Dog(const Dog &other);
	virtual ~Dog();
	Dog &operator=(const Dog &other);

	virtual void makeSound(void) const;
	virtual Brain *getBrain(void) const;
};

#endif
