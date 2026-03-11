/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 11:49:22 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/11 14:43:51 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl h;

	h.complain("DEBUG");
	std::cout << std::endl;
	h.complain("INFO");
	std::cout << std::endl;
	h.complain("WARNING");
	std::cout << std::endl;
	h.complain("ERROR");
	return (0);
}