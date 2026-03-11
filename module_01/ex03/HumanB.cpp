/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:48:43 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/10 21:42:13 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <string>

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

void HumanB::attack()
{
	if (weapon == nullptr)
		std::cout << "Human B does not have a weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
