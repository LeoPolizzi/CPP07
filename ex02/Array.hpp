/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpolizzi <lpolizzi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 16:37:29 by lpolizzi          #+#    #+#             */
/*   Updated: 2025/03/24 17:07:35 by lpolizzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>

class Array
{
  private:
	T *_array;
	size_t _size;

  public:
	Array() : _size(0)
	{
		this->_array = new T[this->_size];
	}

	Array(unsigned int n) : _size(n)
	{
		this->_array = new T[this->_size];
	}

	Array(Array const &src) : _size(src._size)
	{
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}

	~Array()
	{
		delete[] this->_array;
	}

	Array &operator=(Array const &src)
	{
		if (this->_array)
			delete[] this->_array;
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
		return (*this);
	}

	T &operator[](unsigned int n)
	{
		if (n >= this->_size)
			throw std::exception();
		return (this->_array[n]);
	}

	size_t size() const
	{
		return (this->_size);
	}
};

#endif
