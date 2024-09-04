/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:06:45 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/05 02:16:47 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <limits>
#include <iomanip>

PhoneBook::PhoneBook(void) : _contact_count(0), _oldest_contact_index(0)
{
}

void PhoneBook::AddContact(void)
{
	std::string first_name, last_name, nickname, phone_number, darkest_secret;

	std::cout << "Enter the first name: ";
	std::getline(std::cin, first_name);
	std::cout << "Enter the last name: ";
	std::getline(std::cin, last_name);
	std::cout << "Enter the nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter the phone number: ";
	std::getline(std::cin, phone_number);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkest_secret);

	if (first_name.empty() || last_name.empty() || nickname.empty() || phone_number.empty() || darkest_secret.empty())
	{
		std::cout << "One or more fields are empty. Contact not added." << std::endl;
		return ;
	}
	int index = (_contact_count < 8) ? _contact_count : _oldest_contact_index;
	_contacts[index].SetDetails(first_name, last_name, nickname, phone_number, darkest_secret);
	if (_contact_count < 8)
		_contact_count++;
	else
		_oldest_contact_index = (_oldest_contact_index + 1) % 8;
	std::cout << "Contact added." << std::endl;
}

void PhoneBook::SearchContact(void) const
{
	if (_contact_count == 0)
	{
		std::cout << "No contacts to display." << std::endl;
		return ;
	}
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < _contact_count; i++)
		_contacts[i].DisplayShortenedDetails(i);
	std::cout << "Enter the index of the contact you want to display: ";
	int index = 0;
	std::string input;
	std::getline(std::cin, input);
	if (input.empty() || input.length() > 1)
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	if (std::cin.eof() || std::cin.bad())
	{
		std::cout << std::endl;
		return ;
	}
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Invalid index." << std::endl;
			return ;
		}
		else
		{
			index = index * 10 + input[i] - '0';
		}
	}
	if (index < 0 || index >= _contact_count)
	{
		std::cout << "Invalid index." << std::endl;
	}
	else
	{
		_contacts[index].DisplayFullDetails();
	}
}