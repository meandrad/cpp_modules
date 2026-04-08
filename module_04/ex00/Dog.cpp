/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:56:13 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/08 18:48:15 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "[Dog] Default constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "[Dog] Copy constructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "[Dog] Copy assignment" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}