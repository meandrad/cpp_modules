/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:02:41 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/10 11:46:45 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
	std::string brain = "HI THIS IS BRAIN";
	
	std::string* stringPTR = &brain;
	std::string& stringREF = brain;

	std::cout << "Memory address of brain: " << &brain << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl << std::endl;

	std::cout << "Content of brain: " << brain << std::endl;
	std::cout << "Content pointed by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Content referenced by stringREF: " << stringREF << std::endl;
}