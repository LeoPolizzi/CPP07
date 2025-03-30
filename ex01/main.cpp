/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:09:31 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/24 16:35:38 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>

void print(const T &x)
{
	std::cout << x << std::endl;
}

int main()
{
	int		int_array[5] = {1, 2, 3, 4, 5};
	float	float_array[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char	char_array[5] = {'a', 'b', 'c', 'd', 'e'};

	iter(int_array, 5, print);
	iter(float_array, 5, print);
	iter(char_array, 5, print);

	return (0);
}
