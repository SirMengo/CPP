/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 11:34:18 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/23 13:35:46 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
	std::cout << name << " was initialized" << std::endl;
	std::cout << "\t" << "Hit points:" << _hit_points << std::endl;
	std::cout << "\t" << "Energy points:" << _energy_points << std::endl;
	std::cout << "\t" << "Attack damage:" << _attack_damage << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap&copy)
{
	if(this == &copy)
		return *this;
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if(_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	if(_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to do that!" << std::endl;
		return ;
	}
	_energy_points = _energy_points - 1;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	_hit_points = _hit_points - amount;
	if(_hit_points < 0)
		_hit_points = 0;
	if(_hit_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " reached zero or less hit points and died!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " points of damage! Current hit points " << _hit_points << "." << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(_energy_points <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy to repair!" << std::endl;
		return;
	}
	_energy_points = _energy_points - 1;
	std:: cout << "ClapTrap " << _name << " has been repaired, going from " << _hit_points << " to " << _hit_points + amount << "!" << std::endl;
	_hit_points = _hit_points + amount;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

