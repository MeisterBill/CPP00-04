#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include "Animal.hpp"

int main()
{
	const Animal	*animal = new Animal();
	const Animal	*a_dog = new Dog();
	const Animal	*a_cat = new Cat();

	std::cout << "================GOOD=============================" << std::endl;

	std::cout << a_dog->getType() << std::endl;
	std::cout << a_cat->getType() << std::endl;
	a_dog->makeSound();
	a_cat->makeSound();
	animal->makeSound();

	delete animal;
	delete a_dog;
	delete a_cat;

	std::cout << "==========WRONG works because static, not dynamic======" << std::endl;
	WrongAnimal	wrong_anim;
	WrongDog		wrong_dog;

	std::cout << wrong_anim.getType() << " says ";
	wrong_anim.makeSound();
	std::cout << wrong_dog.getType() << " says ";
	wrong_dog.makeSound();

	std::cout << "============WRONG not working because dynamic=========" << std::endl;
	WrongAnimal *wrong_ptr;
	WrongDog wrong_dog2;

	wrong_ptr = &wrong_dog2;
	std::cout << wrong_ptr->getType() << " says ";
	wrong_ptr->makeSound();

	return (0);
}
