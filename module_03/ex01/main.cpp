/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:31:05 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/07 20:05:42 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	{
		ScavTrap atlas("Atlas");
		ScavTrap orion("Orion");
		ScavTrap echo(atlas);
		orion = atlas;

		std::cout << "\n=== Tactical drills ===" << std::endl;
		atlas.attack("training drone");
		orion.guardGate();
		echo.attack("rogue scout");

		std::cout << "\n=== Energy drain (condensed) ===" << std::endl;
		for (int i = 1; i <= 51; ++i)
		{
			bool shouldLabel = (i <= 3) || (i % 10 == 0) || (i > 47 && i <= 50); 
			if (shouldLabel)
				std::cout << "[Strike " << i << "] ";
			atlas.attack("breacher unit");
		}
		std::cout << "(Strikes 4..47 omitted for brevity)" << std::endl;

		std::cout << "Attempt repair after energy depletion (should be silent if no energy):" << std::endl;
		atlas.beRepaired(10);

		std::cout << "\n=== Damage and fatal damage ===" << std::endl;
		orion.takeDamage(30);
		orion.takeDamage(80);
		std::cout << "Attempt attack after HP zero (should be silent):" << std::endl;
		orion.attack("phantom target");
		orion.guardGate();
	}
	return 0;
}