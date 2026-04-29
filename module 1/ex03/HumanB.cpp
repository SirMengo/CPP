/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:35:29 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 14:30:00 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL), name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
{
	if(!weapon)	
		std::cout << name << " ha no weapon to attack!" << std::endl;
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
