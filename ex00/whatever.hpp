/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 15:33:00 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/24 15:55:01 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define RESET "\033[0m"

template <typename T>

void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>

const T	min(const T &a, const T &b)
{
	return (a < b ? a : b);
}

template <typename T>

const T	max(const T &a, const T &b)
{
	return (a > b ? a : b);
}

#endif
