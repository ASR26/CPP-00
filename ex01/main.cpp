/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:40 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/02 13:23:41 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string.h>
# include <ctype.h>
#include "Contact.hpp"
#include "Phonebook.hpp"
void	ft_add()
{
	std::cout << "ENTER YOUR CONTACT NAME" << std::endl;
}

int main()
{
	std::string input;
	Phonebook	pb;
    while (!std::cin.eof() && input.compare("EXIT"))
    {
        std::cout << "CHOOSE AN OPTION:" << std::endl;
        std::cout << "  1. ADD" << std::endl;
        std::cout << "  2. SEARCH" << std::endl;
        std::cout << "  3. EXIT" << std::endl;
        std::cout << std::endl;
	    std::getline(std::cin, input);
        if (input.compare("ADD") == 0)
            pb.addContact();
        else if (input.compare("SEARCH") == 0)
            {
                if (pb.getCounter() != 0)
                {
                    pb.printPhonebook();
                    pb.printContact();
                }
                else
                    std::cout << "Phonebook is empty" << std::endl;
            }
        else if (input.compare("EXIT") == 0)
            return (0);
        else
            std::cout << "Wrong option, try again" << std::endl;
    }
    return (0);
}