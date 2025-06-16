/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:54:08 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/16 14:24:53 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    _name = name;
}

Zombie::~Zombie()
{
    std::cout << _name + " has been killed" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << _name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}