/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msimoes@student.42lisboa.com <msimoes>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:32:08 by mago              #+#    #+#             */
/*   Updated: 2026/05/13 15:56:40 by msimoes@stu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;
    
    if(ac == 1)
    {
        std::cout << "Missing instructions!";
        return 0;
    }
    for(int i = 1; i < ac; i++)
        harl.complain(av[1]);
    
    Harl copy(harl);
    for(int i = 1; i < ac; i++)
        harl.complain(av[1]);
    
    Harl assign;
    assign = copy;
    for(int i = 1; i < ac; i++)
        harl.complain(av[1]);
}