/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:44:46 by carlos            #+#    #+#             */
/*   Updated: 2025/06/30 12:53:15 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	
}
void HumanA::attack()
{
	std::cout << _name + " attacks with their " + this->_weapon.getType() << std::endl;
}