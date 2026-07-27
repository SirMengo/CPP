/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:44:07 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/24 12:07:36 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << name << " was initialized has a FragTrap" << std::endl;
	std::cout << "\t" << "Hit points: " << _hit_points << std::endl;
	std::cout << "\t" << "Energy points: " << _energy_points << std::endl;
	std::cout << "\t" << "Attack damage: " << _attack_damage << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	if(this == &copy)
		return *this;
	_name = copy._name + " copy";
	_hit_points = copy._hit_points;
	_attack_damage = copy._attack_damage;
	std::cout << "Copy assigment operator called" << std::endl;
	return *this;
}

void FragTrap::attack(const std::string& target)
{
	if(_hit_points <= 0)
	{
		std::cout << "FragTrap " << _name << " has no hit points left!" << std::endl;
		return ;
	}
	if(_energy_points <= 0)
	{
		std::cout << "FragTrap " << _name << " has no energy left to do that!" << std::endl;
		return ;
	}
	_energy_points = _energy_points - 1;
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	if(_hit_points <= 0)
	{
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
		return ;
	}
	_hit_points = _hit_points - amount;
	if(_hit_points < 0)
		_hit_points = 0;
	if(_hit_points <= 0)
	{
		std::cout << "FragTrap " << _name << " reached zero or less hit points and died!" << std::endl;
		return ;
	}
	else
	{
		std::cout << "FragTrap " << _name << " took " << amount << " points of damage! Current hit points " << _hit_points << "." << std::endl;
		return ;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if(_energy_points <= 0)
	{
		std::cout << "FragTrap " << _name << " has no energy to repair!" << std::endl;
		return;
	}
	_energy_points = _energy_points - 1;
	std:: cout << "FragTrap " << _name << " has been repaired, going from " << _hit_points << " to " << _hit_points + amount << "!" << std::endl;
	_hit_points = _hit_points + amount;
}

void FragTrap::highFivesGuy()
{
	std::cout << "FragTrap " << _name << " high fives a guy!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}
