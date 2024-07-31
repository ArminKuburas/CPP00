/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:45:11 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/31 09:52:13 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
	public:
		Contact(void);
		void SetDetails(const std::string& FirstName, const std::string& LastName, const std::string& Nickname, const std::string& PhoneNumber, const std::string& DarkestSecret);
		void DisplayShortenedDetails(int index) const;
		void DisplayFullDetails(void) const;
	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
};

#endif