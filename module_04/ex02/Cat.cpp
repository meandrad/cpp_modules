/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:56:13 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/08 19:31:02 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
	this->type = "Cat";
	std::cout << "[Cat] Default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "[Cat] Copy assignment" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (!this->brain)
			this->brain = new Brain(*other.brain);
		else
			*(this->brain) = *other.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

void Cat::setIdea(int index, const std::string &idea)
{
	if (brain)
		brain->setIdea(index, idea);
}

const std::string &Cat::getIdea(int index) const
{
	if (brain)
		return (brain->getIdea(index));
	static const std::string empty = "";
	return (empty);
}

void Cat::printIdeas(int start, int count) const
{
	if (brain)
		brain->printIdeas(start, count);
}