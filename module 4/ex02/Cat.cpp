/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:55:48 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/29 11:59:02 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->type = "Cat";
	this->catBrain= new Brain(); 
	std::cout << "Cat constructor called." << std::endl;
}

Cat::Cat(const Cat &copy) : Animal()
{
	*this = copy;
	std::cout << "Cat copy constructor called." << std::endl;	
}

Cat &Cat::operator=(const Cat &copy)
{
	if(this == &copy)
		return *this;
	this->type = copy.type;
	this->catBrain = copy.catBrain;
	std::cout << "Cat copy assigment constructor called." << std::endl;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void Cat::setIdea(std::string str, int i)
{ 
	this->catBrain->setIdea(str, i);
}

std::string Cat::getIdea(int i)
{
	return this->catBrain->getIdea(i);
}

Cat::~Cat()
{
	delete this->catBrain;
	std::cout << "Cat destructor called" << std::endl;
}
