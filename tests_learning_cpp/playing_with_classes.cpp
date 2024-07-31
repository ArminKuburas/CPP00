/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   playing_with_classes.cpp                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 06:37:25 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/31 06:40:21 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include "classes.hpp"

int	main(void)
{
	no_constructor obj;
	obj.a = 1;
	obj.b = 2;
	obj.c = 3;

	std::cout << obj.a << std::endl;
	std::cout << obj.b << std::endl;
	std::cout << obj.c << std::endl;
	return (0);
}