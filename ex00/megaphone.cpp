/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asolano- <asolano-@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 13:23:08 by asolano-          #+#    #+#             */
/*   Updated: 2023/10/02 13:23:13 by asolano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ctype.h>

int main(int argc, char **argv)
{
    int j = -1;
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (0);
    }
    for (int i = 1; i < argc; i++)
    {
        while (argv[i][++j])
            std::cout << (char)toupper(argv[i][j]);
        j = -1;
    }
    std::cout << std::endl;
    return 0;
}
