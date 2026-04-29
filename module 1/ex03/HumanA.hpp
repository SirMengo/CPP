/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:20:56 by msimoes           #+#    #+#             */
/*   Updated: 2026/04/29 11:53:26 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon weapon;
		std::string name;
	public:
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon weapon);
		void HumanA::attack();
};

#endif