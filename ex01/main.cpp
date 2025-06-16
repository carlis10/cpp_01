/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:43:26 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/16 14:59:10 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(5, "zombie");

    for (size_t i = 0; i < 5; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
