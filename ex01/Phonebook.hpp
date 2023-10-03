/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:57 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/02 13:23:57 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <sstream>
# include <string>
#include <iomanip>
#include "Contact.hpp"

class Phonebook
{
private:
	Contact _contacts[8];
	int		_index;
	int		_counter;
public:
	Phonebook();
	~Phonebook();
	void	addContact();
	void	searchContact(int);
	void	printContact();
	void    printPhonebook();
	int	getCounter();
};