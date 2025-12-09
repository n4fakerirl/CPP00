/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocviller <ocviller@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 15:36:33 by ocviller          #+#    #+#             */
/*   Updated: 2025/12/09 17:49:28 by ocviller         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int compare(std::string str, PhoneBook *phone)
{
    if (!ft_strcmp(str, "EXIT"))
        return (0);
    else if (!ft_strcmp(str, "ADD"))
    {
        if (add_contact(phone) == 0)
            return (0);
        return (1);
    }
    else if (!ft_strcmp(str, "SEARCH"))
        return (printbook(phone), 1);
    else
        return (2);
}

void freephone(PhoneBook *phone)
{
    delete phone->contact_list;
    delete phone;
}

int main(void)
{
    std::string str;

    PhoneBook *phone = new PhoneBook;
    phone->contact_list = new Contact;
    std::cout << "---Welcome to the Phonebook !---\n\n[ADD] : save a new contact\n[SEARCH] : display a specific contact\n[EXIT] : exit the phonebook\nPlease, type a command to start\n\n";
    while (1)
    {
        std::cout << "cmd> ";
        std::getline(std::cin, str);
        if (!compare(str, phone))
            return (freephone(phone), 0);
    }
}
