/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer_tests.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:45:38 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/29 12:56:11 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int	main(void)
{
	std::cout << "Hello, World!" << std::endl;
	std::cout << "This is a test without endl at the end of the line.\n";
	std::cout << "This is a test with endl at the end of the line." << std::endl;
	std::cout << "This is a test with flush at the end of the line.\n" << std::flush;	
	
	return (0);
}