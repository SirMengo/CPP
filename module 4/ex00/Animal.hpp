/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:19:22 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/27 14:03:42 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &copy);
		Animal &operator=(const Animal &copy);
		virtual void makeSound() const;
		std::string getType() const;
		virtual ~Animal();
	private:
	protected:
		std::string type;
};

#endif