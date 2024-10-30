/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:34:47 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/28 23:44:26 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP
# include "Array.hpp"
# include <iostream>

template <typename T>
Array<T>::Array() : _size(0), _array(NULL) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	try
	{
		_array = new T[_size];
	}
	catch (std::bad_alloc &e)
	{
		_size = 0;
		_array = NULL;
		std::cerr << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = T();
}

template <typename T>
Array<T>::Array(const Array& src) : _size(src._size)
{
	try
	{
		_array = new T[src._size];
	}
	catch (std::bad_alloc &e)
	{
		_size = 0;
		_array = NULL;
		std::cerr << e.what() << std::endl;
	}
	for (unsigned int i = 0; i < _size; i++)
		_array[i] = src._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T>& rhs)
{
	if (this != &rhs)
	{
		if (_array)
			delete[] _array;
		_size = rhs._size;
		try
		{
			new T[_size];
		}
		catch (std::bad_alloc &e)
		{
			_size = 0;
			_array = NULL;
			std::cerr << e.what() << std::endl;
		}
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = rhs._array[i];
	}
	return *this;
}

template <typename T>
T&	Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfLimitsException();
	return _array[i];
}

template <typename T>
const char*	Array<T>::OutOfLimitsException::what() const throw()
{
	return static_cast<const char*>("Error: Out of limits");
}

template <typename T>
unsigned int Array<T>::size() const
{
	return _size;
}

#endif
