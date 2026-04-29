/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:02:12 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 14:15:16 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type) 
{
	this->type = type;
}

Weapon::~Weapon(){}

void Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType() const
{
	return type;
}