/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:56:13 by meandrad          #+#    #+#             */
/*   Updated: 2026/03/17 19:45:55 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap4;

	std::cout << "=== Creating ClapTrap's ===" << std::endl;
	
	ClapTrap clap1("CLAP1");
	ClapTrap clap2("CLAP2");
	
	std::cout << "\n=== COMBAT! ===" << std::endl;
	
	clap1.attack("Someone");
	clap1.attack("Other one");
	
	std::cout << "\n--- Damage ---" << std::endl;
	
	clap1.takeDamage(5);
	clap1.takeDamage(3);
	
	std::cout << "\n--- Healing ---" << std::endl;
	
	clap1.beRepaired(2);
	clap1.beRepaired(4);
	
	std::cout << "\n=== Testing resource depletion ===" << std::endl;
	std::cout << "\n--- Depleting energy points ---" << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Attack #" << (i + 1) << ": ";
		clap2.attack("Target");
	}
	
	std::cout << "Energy depleted, this attack should fail silently: ";
	
	clap2.attack("Target");
	
	std::cout << "\n--- DEATH ---" << std::endl;
	
	clap2.takeDamage(15);
	
	std::cout << "Hit points depleted, this repair should fail silently: " << std::endl;
	
	clap2.beRepaired(5);
	
	std::cout << "\n=== Copy constructor ===" << std::endl;
	
	ClapTrap clap3(clap1);
	
	clap3.attack("Bandit");
	clap4 = clap1;
	clap4.attack("Badass");
	
	std::cout << "\n=== FINISH ===" << std::endl;
	
	return (0);
}