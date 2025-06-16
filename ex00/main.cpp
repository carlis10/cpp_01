/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:08:33 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/16 14:24:44 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie zombie = Zombie("Richtofen");
    zombie.announce();
    Zombie *newzombie = zombie.newZombie("Takeo");
    newzombie->announce();
    zombie.ramdomChump("Nikolai");
    newzombie->ramdomChump("Dempsey");
    zombie.~Zombie();
    delete newzombie;
    return (0);
}
