/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:08:30 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/24 12:08:33 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

static void separator(const std::string &title)
{
	std::cout << "\n----- " << title << " -----" << std::endl;
}

int main()
{
	separator("Construction chaining (ClapTrap then FragTrap)");
	FragTrap terra("Terra");

	separator("ClapTrap on its own, for comparison");
	ClapTrap locke("Locke");

	separator("attack()");
	terra.attack("Kefka");
	locke.attack("Kefka");

	separator("highFivesGuy()");
	terra.highFivesGuy();

	separator("takeDamage() / beRepaired()");
	FragTrap celes("Celes");
	celes.takeDamage(40);
	celes.beRepaired(10);
	celes.takeDamage(1000); // should die (clamped to 0)
	celes.takeDamage(5);    // already dead
	celes.attack("an Imperial soldier"); // dead, should refuse
	celes.highFivesGuy();   // still works even dead, no hit point check here

	separator("Energy depletion");
	FragTrap edgar("Edgar");
	for (int i = 0; i < 101; i++) // 100 energy points available
		edgar.attack("a MagiTek armor");
	edgar.beRepaired(5); // also out of energy, should refuse

	separator("Copy constructor");
	FragTrap sabin("Sabin");
	FragTrap sabinCopy(sabin);
	sabinCopy.attack("a behemoth");

	separator("Copy assignment operator");
	FragTrap cyan("Cyan");
	FragTrap shadow("Shadow");
	shadow = cyan;
	shadow.attack("a ghost train");

	separator("Destruction (reverse order of construction)");
	return 0;
}