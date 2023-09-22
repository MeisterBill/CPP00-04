#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Brain  constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		_ideas[i] = "Some idea";
	}
}

Brain::Brain(const Brain &other)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int index) const
{

	if (index > 99 || index < 0)
	{
		return ("Index not valid");
	}
	else if (this->_ideas[index].empty())
	{
		return ("No idea stored yet");
	}
	else
	{
		return (this->_ideas[index]);
	}
}

void Brain::setIdea(std::string idea)
{
	if (idea.empty())
	{
		return;
	}
	else
	{
		int i = 0;
		while (this->_ideas[i] != "Some idea" && i < 100)
		{
			i++;
		}
		if (i == 100)
		{
			std::cout << "Brain overload" << std::endl;
			return;
		}
		else
		{
			this->_ideas[i] = idea;
		}
	}
}

void Brain::replaceIdea(std::string idea, int index)
{
	if (idea.empty())
	{
		return;
	}
	else
	{
		if (index < 0 || index > 99)
		{
			std::cout << "Index not valid" << std::endl;
			return;
		}
		else
		{
			this->_ideas[index] = idea;
		}
	}
}
