/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:06:38 by carlos            #+#    #+#             */
/*   Updated: 2025/06/30 12:19:13 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{

}
std::string& Weapon::getType()
{
	return (this->_type);
}
void Weapon::setType(std::string type)
{
	this->_type = type;
}