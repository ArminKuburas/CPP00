/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:19:56 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/31 09:24:31 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook phone_book;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			break;
		}
		else if (command == "ADD")
			phone_book.AddContact();
		else if (command == "SEARCH")
			phone_book.SearchContact();
		else if (command == "EXIT")
			break;
	}
	return (0);
}
