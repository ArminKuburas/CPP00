/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   namespace_test.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:56:40 by akuburas          #+#    #+#             */
/*   Updated: 2024/07/29 13:00:27 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

namespace test
{
	void	print_hello_world(void)
	{
		std::cout << "Hello, World!" << std::endl;
	}
}

int	main(void)
{
	test::print_hello_world();
	return (0);
}