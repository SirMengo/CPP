/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:19:15 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:24:05 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called." << std::endl;	
}

Animal &Animal::operator=(const Animal &copy)
{
	if(this == &copy)
		return *this;
	std::cout << "Animal copy assigment constructor called." << std::endl;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "*Animal noises*" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}
