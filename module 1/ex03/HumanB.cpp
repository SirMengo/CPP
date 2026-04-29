/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:35:29 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 12:00:33 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.getType();
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}