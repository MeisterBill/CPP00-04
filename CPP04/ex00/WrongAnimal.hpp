#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
	protected :

	std::string	_type;

	public:

	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &other);

	std::string	getType() const;
	void makeSound() const;
	//test
};

#endif
