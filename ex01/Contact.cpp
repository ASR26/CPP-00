/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:25 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/02 13:23:27 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int Contact::initData(void)
{
	std::string input;
	int i = 0;
	const char tab ='\t';
	const char space = ' ';
	
	std::cout << "First name: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return(1);
    while (input.empty() && !std::cin.eof())
	{
		std::cout << "A field cannot be empty" << std::endl;
		std::cout << "First name: ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		return(1);
   	std::replace(input.begin(), input.end(), tab, space);
	_field[i] = input;
	i++;
	input.clear();
	std::cout << "Last name: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "INTRO" << std::endl;
		std::cout << "A field cannot be empty" << std::endl;
		std::cout << "Last name: ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		return(1);
	std::replace(input.begin(), input.end(), tab, space);
	_field[i] = input;
	i++;
	std::cout << "Nickname: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "A field cannot be empty" << std::endl;
		std::cout << "Nickname: ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		return(1);
	std::replace(input.begin(), input.end(), tab, space);
	_field[i] = input;
	i++;
	std::cout << "Phone number: ";
	std::getline(std::cin, input);
	while ((input.empty() || input.find_first_not_of("0123456789") != std::string::npos) && !std::cin.eof())
	{
		std::cout << "It must be a number" << std::endl;
		std::cout << "Phone number: ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		return(1);
	std::replace(input.begin(), input.end(), tab, space);
	_field[i] = input;
	i++;
	std::cout << "Darkest secret: ";
	std::getline(std::cin, input);
	while (input.empty() && !std::cin.eof())
	{
		std::cout << "A field cannot be empty" << std::endl;
		std::cout << "Darkest secret: ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		return(1);
	std::replace(input.begin(), input.end(), tab, space);
	_field[i] = input;
	return (0);
}

std::string	Contact::getField(int index)
{
	return(this->_field[index]);
}

Contact::Contact()
{

}

Contact::~Contact()
{

}