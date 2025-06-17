/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cravegli <cravegli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 12:30:25 by cravegli          #+#    #+#             */
/*   Updated: 2025/06/17 12:43:03 by cravegli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char const *argv[])
{
    std::string var = "HI THIS IS BRAIN";
    std::string *stringPTR = &var;
    std::string& stringREF = var;
    std::cout << "memory address var: " << &var << std::endl;
    std::cout << "memory address stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address stringREF: " << &stringREF << std::endl;
    std::cout << "memory address var: " << &var << std::endl;
    std::cout << "memory address stringPTR: " << stringPTR << std::endl;
    std::cout << "memory address stringREF: " << &stringREF << std::endl;
    return 0;
}
