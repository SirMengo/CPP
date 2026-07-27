/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:55:52 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:37:45 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &copy) : Animal()
{
	*this = copy;
	std::cout << "Dog copy constructor called." << std::endl;	
}

Dog &Dog::operator=(const Dog &copy)
{
	if(this == &copy)
	{
		std::cout << "Dog copy assigment constructor called." << std::endl;
		return *this;
	}
	std::cout << "Dog copy assigment constructor called." << std::endl;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}
