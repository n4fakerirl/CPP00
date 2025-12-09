/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:18:58 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/09 17:23:42 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int ft_strcmp(std::string str1, std::string str2)
{
    int i = 0;
    
    while (str1[i] && str1[i] == str2[i])
        i++;
    return (str1[i] - str2[i]);
}

std::string ft_strdup(std::string src)
{
    std::string dest;
    int len = src.length();
    int i = 0;
    
    while (i < len)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
