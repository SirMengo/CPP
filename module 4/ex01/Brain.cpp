/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:16:45 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 16:25:37 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for(int i = 0; i < 100 ; i++)
		this->ideas[i] = "Nothing.";
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called." << std::endl;	
}

Brain &Brain::operator=(const Brain &copy)
{
	if(this == &copy)
		return *this;
	std::cout << "Brain copy assigment constructor called." << std::endl;
	return *this;
}

void Brain::setIdea(std::string str, int i)
{ 
	this->ideas[i] = str;
}

std::string Brain::getIdea(int i)
{
	return this->ideas[i];
}


Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
