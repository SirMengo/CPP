/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mago <mago@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:32:53 by mago              #+#    #+#             */
/*   Updated: 2026/05/07 11:39:13 by mago             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
    public:
        void complain(std::string level);
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif