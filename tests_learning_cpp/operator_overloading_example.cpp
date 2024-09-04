/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operator_overloading_example.cpp                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 06:23:08 by akuburas          #+#    #+#             */
/*   Updated: 2024/09/04 06:32:39 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class addition
{
	private:
		int total_sum;
	public:
		addition() : total_sum(0) {}
	addition& operator<<(int num)
	{
		total_sum += num;
		return *this;
	}
	int get_total_sum() const
	{
		return total_sum;
	}
};

int main()
{
	addition add;
	add << 5 << 10 << 15 << 20;
	std::cout << "Total sum: " << add.get_total_sum() << std::endl;
	return 0;
}