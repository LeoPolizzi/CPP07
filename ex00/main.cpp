/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:46:17 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/24 15:52:49 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int a = 42;
	int b = 21;

	float c = 42.42;
	float d = 21.21;

	std::cout << GREEN "Templates with int" RESET "\n" << std::endl;

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "\n" RED "Swapping a and b" RESET "\n" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;

	std::cout << "\n" GREEN "Templates with float" RESET "\n" << std::endl;

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "\n" RED "Swapping c and d" RESET "\n" << std::endl;
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << min(c, d) << std::endl;
	std::cout << "max(c, d) = " << max(c, d) << std::endl;
}
