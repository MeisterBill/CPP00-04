#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal	*animal = new Animal();
	const Animal	*a_dog = new Dog();
	const Animal	*a_cat = new Cat();
	std::cout << a_dog->getType() << " " << std::endl;
	std::cout << a_cat->getType() << " " << std::endl;
	a_dog->makeSound(); // will output the dog sound!
	a_cat->makeSound();
	animal->makeSound();


	
	return (0);
}
