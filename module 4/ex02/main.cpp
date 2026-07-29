/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:20:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/29 13:17:03 by msimoes          ###   ########.fr       */
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
		if(i < 10)
		{
			array[i] = new Dog();
			for(int j = 0; j < 100; j++)
			{
				if(j % 2 == 0 && j % 5 == 0)
					dynamic_cast<Dog *>(array[i])->setIdea("Steak", j);
				if(j % 2 == 0)
					dynamic_cast<Dog *>(array[i])->setIdea("Bone", j);
				if(j % 5 == 0)
					dynamic_cast<Dog *>(array[i])->setIdea("Stick", j);
			}
		}
		else
		{
			array[i] = new Cat();
			for(int j = 0; j < 100; j++)
			{
				if(j % 2 == 0 && j % 5 == 0)
					dynamic_cast<Cat *>(array[i])->setIdea("Tuna", j);
				if(j % 2 == 0)
					dynamic_cast<Cat *>(array[i])->setIdea("Rat", j);
				if(j % 5 == 0)
					dynamic_cast<Cat *>(array[i])->setIdea("Yarn", j);
			}
		}
	}
	for(int i = 0; i < 20; i++)
	{
		if(i < 10)
		{
			Dog *d = dynamic_cast<Dog *>(array[i]);
			std::cout << "Dog [" << i + 1 << "] idea:" << d->getIdea(2) << std::endl;
		}
		else
		{
			Cat *c = dynamic_cast<Cat *>(array[i]);
			std::cout << "Cat [" << i + 1 << "] idea:" << c->getIdea(0) << std::endl;
		}
	}
	for(int i = 0; i < 20; i++)
		delete array[i];

	Dog *Dogao = new Dog();
	Dogao->setIdea("Sausage", 67);
	Dog *Doguinho = new Dog(*Dogao);
	std::cout << "Dogao: " << Dogao->getIdea(67) << std::endl;
	std::cout << "Doguinho: " << Doguinho->getIdea(67) << std::endl;
	Doguinho->setIdea("Cheese", 67);
	std::cout << "Dogao: " << Dogao->getIdea(67) << std::endl;
	std::cout << "Doguinho: " << Doguinho->getIdea(67) << std::endl;
	delete Dogao;
	delete Doguinho;

	/*const Animal* animal = new Animal();
		std::cout << "Hi, I am a " << animal->getType() << " and I don't have a Brain!" << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;*/
	
	return 0;
}
 