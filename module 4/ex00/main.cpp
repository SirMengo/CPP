/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 13:20:08 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:42:48 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	Animal  *teste = new Animal() ;
	
	*teste = *j;
	//const WrongAnimal* i = new Wrong
	Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); 
	
	j->makeSound();
	meta->makeSound();
	delete j;
	std::cout << teste->getType() << " " << std::endl;
	teste->makeSound();

	delete meta;
	
	delete i;
	
	return 0;
}
