/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 11:03:37 by carlos            #+#    #+#             */
/*   Updated: 2025/06/30 12:19:20 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>
# include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();
	std::string& getType();
	void setType(std::string type);
};

#endif
