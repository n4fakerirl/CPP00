/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 14:36:43 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/09 14:58:55 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    char c;
    
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
        
    }
    for (int i = 1; av[i]; i++)
    {
        for (int y = 0; av[i][y]; y++)
        {
            c = toupper(av[i][y]);
            std::cout << c;
        }
    }
    std::cout << "\n";
    return (0);
}
