/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:22:28 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 12:01:07 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumanB();
		~HumanB();
		HumanB(std::string name);
		void HumanB::attack();
		void HumanB::setWeapon(Weapon weapon);
};

#endif