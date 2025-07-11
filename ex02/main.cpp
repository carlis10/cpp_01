/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:30:25 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/30 10:54:11 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string& stringREF = var;
    std::cout << "memory address var: " << &var << std::endl;
    std::cout << "memory address stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address stringREF: " << &stringREF << std::endl;
    std::cout << "memory value var: " << var << std::endl;
    std::cout << "memory value stringPTR: " << *stringPTR << std::endl;
    std::cout << "memory value stringREF: " << stringREF << std::endl;
    return 0;
}
