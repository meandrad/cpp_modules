/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meandrad <meandrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 16:31:29 by meandrad          #+#    #+#             */
/*   Updated: 2026/04/07 20:15:03 by meandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

static void section(const std::string &title)
{
	std::cout << "\n=== " << title << " ===" << std::endl;
}

int main()
{
	section("Construction chain");
	FragTrap f1("Titan");
	FragTrap f2("Nova");
	FragTrap f3(f1);
	f2 = f1;

	section("High five ability");
	f1.highFivesGuys();
	f2.highFivesGuys();

	section("Basic combat");
	f1.attack("sparring drone");
	f1.takeDamage(25);
	f1.beRepaired(10);
	f1.takeDamage(90); // fatal
	f1.attack("phantom scout"); // silent (dead)
	f1.highFivesGuys(); // allowed even if dead (no restriction specified)

	section("Energy consumption");
	for (int i = 0; i < 100; ++i)
		f2.attack("sentry unit");
	f2.attack("sentry unit"); // silent
	f2.highFivesGuys(); // still works

	section("Destruction chain follows automatically");
	return 0;
}