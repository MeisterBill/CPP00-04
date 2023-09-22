#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"

class AAnimal {

    protected:

    std::string _type;

    public:

    AAnimal();
    AAnimal(const AAnimal &other);
    virtual ~AAnimal();
    AAnimal &operator=(const AAnimal &other);

    std::string getType(void) const;
    virtual void makeSound(void) const = 0;
    virtual Brain *getBrain(void) const = 0;
};

#endif
