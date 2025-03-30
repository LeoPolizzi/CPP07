/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 17:02:02 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/25 10:18:25 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> a(5);
	Array<int> b(5);

	for (size_t i = 0; i < 5; i++)
	{
		a[i] = i;
		b[i] = i + 5;
	}
	std::cout << "a: ";
	for (size_t i = 0; i < 5; i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	std::cout << "b: ";
	for (size_t i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout << std::endl;
	Array<int> c(a);
	std::cout << "c: ";
	for (size_t i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout << std::endl;
	Array<int> d;
	d = b;
	std::cout << "d: ";
	for (size_t i = 0; i < 5; i++)
		std::cout << d[i] << " ";
	std::cout << std::endl;
}
