/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:55:31 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/31 09:52:10 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

Contact::Contact(void) : _first_name(""), _last_name(""), _nickname(""), _phone_number(""), _darkest_secret("")
{
}

void Contact::SetDetails(const std::string& FirstName, const std::string& LastName, const std::string& Nickname, const std::string& PhoneNumber, const std::string& DarkestSecret)
{
	this->_first_name = FirstName;
	this->_last_name = LastName;
	this->_nickname = Nickname;
	this->_phone_number = PhoneNumber;
	this->_darkest_secret = DarkestSecret;
}

void Contact::DisplayShortenedDetails(int index) const
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << (_first_name.length() > 10 ? _first_name.substr(0, 9) + "." : _first_name) << "|";
    std::cout << std::setw(10) << (_last_name.length() > 10 ? _last_name.substr(0, 9) + "." : _last_name) << "|";
    std::cout << std::setw(10) << (_nickname.length() > 10 ? _nickname.substr(0, 9) + "." : _nickname) << std::endl;
}

void Contact::DisplayFullDetails() const
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _darkest_secret << std::endl;
}