/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:12:59 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:16:26 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	*this = copy;
	std::cout << "WrongCat copy constructor called." << std::endl;	
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
	if(this == &copy)
		return *this;
	std::cout << "WrongCat copy assigment constructor called." << std::endl;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}
