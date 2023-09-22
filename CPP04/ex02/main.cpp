#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
	//AAnimal aanimal;
	AAnimal *array[] =
			{
					new Cat(),
					new Cat(),
					new Dog(),
					new Dog()};

	AAnimal *cat = array[0];
	Brain *cat_brain = cat->getBrain();
	cat_brain->setIdea("Idea 1");
	cat_brain->setIdea("Idea 2");
	cat_brain->setIdea("Idea 3");
	std::cout << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << cat->getBrain()->getIdea(1) << std::endl;
	std::cout << cat->getBrain()->getIdea(2) << std::endl;

	AAnimal *deepcopy = new Cat(*(Cat *)(array[0]));

	deepcopy->getBrain()->replaceIdea("Other idea", 2);

	std::cout << cat->getBrain()->getIdea(0) << std::endl;
	std::cout << cat->getBrain()->getIdea(1) << std::endl;
	std::cout << cat->getBrain()->getIdea(2) << std::endl;
	std::cout << deepcopy->getBrain()->getIdea(0) << std::endl;
	std::cout << deepcopy->getBrain()->getIdea(1) << std::endl;
	std::cout << deepcopy->getBrain()->getIdea(2) << std::endl;

	for (int i = 0; i < 4; i++)
	{
		delete array[i];
	}

	delete deepcopy;

	return (0);
}
