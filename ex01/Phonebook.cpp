/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:49 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/02 13:23:51 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void    Phonebook::addContact()
{
    _contacts[_index % 8].initData();
    if (_counter < 8)
        _counter++;
        _index++;
}

void    Phonebook::printPhonebook()
{
	for(int i = 0; i < this->_counter; i++)
	{
		std::cout << "|         " << i+1 << "|";
		for (int j = 0; j < 3; j++)
		{
			if (this->_contacts[i].getField(j).length() < 11)
				std::cout << std::setw(10) << this->_contacts[i].getField(j) << "|";
			else
				std::cout << this->_contacts[i].getField(j).substr(0, 9) << "." << "|";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
}

int	Phonebook::getCounter()
{
	return(this->_counter);
}

void	Phonebook::printContact()
{
	std::string input;
	std::getline(std::cin, input);
	while (!input.empty() && !std::cin.eof())
	{
		if (atoi(input.c_str()) < 1 || atoi(input.c_str()) > 8 || this->_contacts[atoi(input.c_str()) - 1].getField(0).empty())
		{
			std::cout << std::endl << "That contact does not exist" << std::endl;
			return ;
		}
		else
			for (int i = 0; i < 6; i++)
			{
				if (i == 5)
					return;
				switch (i) 
				{
					case 0:
						std::cout << "First name: ";
						break;
					case 1:
						std::cout << "Last name: ";
						break;
					case 2:
						std::cout << "Nickname: ";
						break;
					case 3:
						std::cout << "Phone number: ";
						break;
					case 4:
						std::cout << "Darkest secret: ";
						break;
				}
				std::cout << this->_contacts[atoi(input.c_str()) - 1].getField(i) << std::endl << std::endl;
			}
	}
}

Phonebook::Phonebook()
{
    
}

Phonebook::~Phonebook()
{
    
}