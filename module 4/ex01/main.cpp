/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:20:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 16:32:23 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	Animal *array[20];
	for(int i = 0; i < 20; i++)
	{
		if(i <= 10)
		{
			array[i] = new Dog();
			dynamic_cast<Dog *>(array[i])->setIdea("Bone", i);
		}
		else
			array[i] = new Cat();
	}

}
 