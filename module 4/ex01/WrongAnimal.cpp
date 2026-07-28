/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:12:22 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:16:33 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "WrongAnimal copy constructor called." << std::endl;	
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
	if(this == &copy)
		return *this;
	std::cout << "WrongAnimal copy assigment constructor called." << std::endl;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "*Wrong animal noises*" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}
