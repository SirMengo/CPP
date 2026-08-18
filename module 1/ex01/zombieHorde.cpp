/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 13:50:58 by msimoes           #+#    #+#             */
/*   Updated: 2026/08/18 11:53:53 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if(N <= 0)
	{
		std::cout << "Horde must be a positive non zero number." << std::endl;
		return NULL;
	}
	Zombie *zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombie[i].SetName(name);
	return zombie;
}
