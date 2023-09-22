#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{

	private:

	std::string _ideas[100];

	public:

	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);

	std::string getIdea(int index) const;
	void setIdea(std::string idea);
	void replaceIdea(std::string idea, int index);
};

#endif
