/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:56:13 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/08 19:30:24 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
	this->type = "Dog";
	std::cout << "[Dog] Default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "[Dog] Copy assignment" << std::endl;
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

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
	if (brain)
		brain->setIdea(index, idea);
}

const std::string &Dog::getIdea(int index) const
{
	if (brain)
		return (brain->getIdea(index));
	static const std::string empty = "";
	return (empty);
}

void Dog::printIdeas(int start, int count) const
{
	if (brain)
		brain->printIdeas(start, count);
}