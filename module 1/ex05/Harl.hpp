/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes@student.42lisboa.com <msimoes>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:32:53 by mago              #+#    #+#             */
/*   Updated: 2026/05/13 15:17:41 by msimoes@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    public:
    	Harl();
		~Harl();
        void complain(std::string level);
        void	(Harl::*actions[4])(void);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif