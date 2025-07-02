/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:15:06 by carlos            #+#    #+#             */
/*   Updated: 2025/06/30 12:26:22 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(NULL)
{
	_name = name;
}

HumanB::~HumanB()
{
	
}
void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
void HumanB::attack()
{
/* 	if (_weapon.getType().compare("none"))
	{
		std::cout << "has no weapon" << std::endl;
		return ;
	} */
	std::cout << _name + " attacks with their " + _weapon->getType() << std::endl;
}