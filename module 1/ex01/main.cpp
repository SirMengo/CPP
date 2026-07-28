/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:56:54 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/01 23:29:17 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{
	int num = 5;
	std::string name = "Seila";
	
	Zombie *horde = zombieHorde(num, name);
	for(int i = 0; i < num; i++)
		horde[i].announce();
	delete[] horde;
}