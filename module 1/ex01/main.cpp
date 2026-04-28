/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:56:54 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/28 12:01:34 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
	if(ac > 3)
	{
		std::cout << "Please max of the params.\n";
		exit (0);
	}
	randomChump("Seila");
	Zombie *armindo = newZombie("armindo");
	armindo->announce();
	delete armindo;
	Zombie *horde = zombieHorde(std::atoi(av[1]), av[2]);
	for(int i = 0; i < std::atoi(av[1]); i++)
		horde[i].announce();
	delete[] horde;
}