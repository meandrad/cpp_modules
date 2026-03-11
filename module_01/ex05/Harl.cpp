/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:49:18 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/11 14:37:23 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "Eu amo ter bacon extra para o meu hambúrguer 7XL-duplo-queijo-triplo- picles-ketchup-especial. Eu realmente amo!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "Eu não acredito que adicionar bacon extra custa mais dinheiro." << std::endl;
	std::cout << "Vocês não colocaram bacon suficiente no meu hambúrguer!" << std::endl;
	std::cout << "Se vocês tivessem colocado, eu não estaria pedindo por mais!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "Eu acho que mereço ter bacon extra de graça." << std::endl;
	std::cout << "Eu venho aqui há anos, enquanto você começou a trabalhar aqui apenas no mês passado." << std::endl;
}
void Harl::error(void)
{
	std::cout << "Isto é inaceitável! Eu quero falar com o gerente agora." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if(level == levels[i])
			(this->*funcs[i])();
	}
}

