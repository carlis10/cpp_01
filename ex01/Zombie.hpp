/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:43:49 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/16 14:45:05 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void announce ( void );
    Zombie* newZombie(std::string name);
    void ramdomChump(std::string name);
    void setName(std::string name);
    
};

Zombie* zombieHorde(int N, std::string name);

#endif