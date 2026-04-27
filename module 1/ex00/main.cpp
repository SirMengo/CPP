/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 11:56:54 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/27 13:36:45 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main()
{	
	randomChump("Seila");
	Zombie *armindo = newZombie("armindo");
	armindo->announce();
	//delete armindo;
}