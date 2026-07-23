/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:36:54 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/23 13:30:35 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << "=== Creating Cloud ===" << std::endl;
	ClapTrap cloud("Cloud");

	std::cout << "\n=== Attack while alive/with energy ===" << std::endl;
	cloud.attack("Sephiroth");

	std::cout << "\n=== Take damage (still alive) ===" << std::endl;
	cloud.takeDamage(4);

	std::cout << "\n=== Repair ===" << std::endl;
	cloud.beRepaired(2);

	std::cout << "\n=== Take lethal damage ===" << std::endl;
	cloud.takeDamage(100);

	std::cout << "\n=== Attack while dead (0 hp) ===" << std::endl;
	cloud.attack("Sephiroth");

	std::cout << "\n=== Take damage while already dead ===" << std::endl;
	cloud.takeDamage(5);

	std::cout << "\n=== Repair while dead but has energy (should still work per current code) ===" << std::endl;
	cloud.beRepaired(3);

	std::cout << "\n=== Creating Tifa to test energy running out ===" << std::endl;
	ClapTrap tifa("Tifa");
	for (int i = 0; i < 12; i++)
		tifa.attack("Sephiroth");

	std::cout << "\n=== Creating Aerith to test energy running out via repair ===" << std::endl;
	ClapTrap aerith("Aerith");
	for (int i = 0; i < 12; i++)
		aerith.beRepaired(1);

	std::cout << "\n=== Testing copy constructor ===" << std::endl;
	ClapTrap sephiroth(aerith);

	std::cout << "\n=== Testing copy assignment operator ===" << std::endl;
	ClapTrap barret("Barret");
	barret = tifa;

	std::cout << "\n=== End of main, destructors will now be called ===" << std::endl;
	return 0;
}
