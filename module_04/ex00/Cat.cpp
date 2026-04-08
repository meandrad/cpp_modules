/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:56:13 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/08 18:47:14 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "[Cat] Default constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "[Cat] Copy constructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "[Cat] Copy assignment" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}