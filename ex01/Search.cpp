/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:37:22 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/09 18:26:03 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void check_l(std::string str, int len)
{
    if (len < 10)
    {
        std::cout << str;
        while (len < 10)
        {
            std::cout << " ";
            len ++;
        }
    }
    else if (len == 10)
        std::cout << str;
    else
    {
        for (int i = 0; i < 9; i++)
            std::cout << str[i];
        std::cout << ".";
    }
}

int remain(PhoneBook *phone)
{
    int ret = 0;
    
    if ((phone->contact_list[0].first_name.substr(9).length()) > 0)
    {
        std::cout << phone->contact_list[0].first_name.substr(9);
        std::cout << ".";
        ret++;
    }
    if ((phone->contact_list[0].last_name.substr(9).length()) > 0)
    {
        std::cout << phone->contact_list[0].last_name.substr(9);
        std::cout << ".";
        ret++;
    }
    if ((phone->contact_list[0].nickname.substr(9).length()) > 0)
    {
        std::cout << phone->contact_list[0].nickname.substr(9);
        std::cout << ".";
        ret++;
    }
    if (ret > 0)
        std::cout << "\n";
    return (ret);
}

void printbook(PhoneBook *phone)
{
    int len;
    
    for (int i = 0; i < 8; i++)
    {
        std::cout << i + 1;
        std::cout << "         ";
        len = phone->contact_list[0].first_name.length();
        std::cout << "|";
        check_l(phone->contact_list[0].first_name, len);
        len = phone->contact_list[0].last_name.length();
        std::cout << "|";
        check_l(phone->contact_list[0].last_name, len);
        len = phone->contact_list[0].nickname.length();
        std::cout << "|";
        check_l(phone->contact_list[0].nickname, len);
        std::cout << "\n";
        while (1)
        {
            if (remain(phone) == 0)
                break;
        }
    }
}
