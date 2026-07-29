/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes <msimoes@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 14:30:56 by msimoes           #+#    #+#             */
/*   Updated: 2026/07/29 12:27:06 by msimoes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
	public:
		Brain();
		Brain(const Brain &copy);
		Brain &operator=(const Brain &copy);
		std::string ideas[100];
		void setIdea(std::string str, int i);
		std::string getIdea(int i);
		~Brain();
	private:
	protected:
};

#endif