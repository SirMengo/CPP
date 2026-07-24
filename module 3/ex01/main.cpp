/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:41:22 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/24 11:57:13 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

static void separator(const std::string &title)
{
	std::cout << "\n----- " << title << " -----" << std::endl;
}

int main()
{
	separator("Construction chaining (ClapTrap then ScavTrap)");
	ScavTrap alphinaud("Alphinaud");

	separator("ClapTrap on its own, for comparison");
	ClapTrap thancred("Thancred");

	separator("attack()");
	alphinaud.attack("a voidsent");
	thancred.attack("a voidsent");

	separator("guardGate()");
	alphinaud.guardGate();
	alphinaud.guardGate(); // should say already in guard mode

	separator("takeDamage() / beRepaired()");
	ScavTrap yshtola("Y'shtola");
	yshtola.takeDamage(30);
	yshtola.beRepaired(10);
	yshtola.takeDamage(1000); // should die (clamped to 0)
	yshtola.takeDamage(5);    // already dead
	yshtola.attack("a sin eater"); // dead, should refuse
	yshtola.guardGate();      // dead, should refuse

	separator("Energy depletion");
	ScavTrap urianger("Urianger");
	for (int i = 0; i < 51; i++) // 50 energy points available
		urianger.attack("a lightwarden");
	urianger.beRepaired(5); // also out of energy, should refuse

	separator("Copy constructor");
	ScavTrap estinien("Estinien");
	ScavTrap estinienCopy(estinien);
	estinienCopy.attack("a dragon");

	separator("Copy assignment operator");
	ScavTrap minfilia("Minfilia");
	ScavTrap graha("G'raha Tia");
	graha = minfilia;
	graha.attack("the Ascians");

	separator("Destruction (reverse order of construction)");
	return 0;
}
