/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:56:11 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/28 22:01:57 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"
#define CLR "\e[33m"
#define NONE "\e[0m"

template <typename T>
void print(T& x)
{
	std::cout << x << std::endl;
	return;
}

int main(void)
{
	char	arr_char[] = {'a', 'b', 'c', 'd', 'e'};
	int		arr_int[] = {0, 1, 2, 3, 4};
	float	arr_float[] = {0.0f, 1.1f, 2.2f, 3.3f, 4.4f};
	double	arr_double[] = {0.0, 1.1, 2.2, 3.3, 4.4};
	std::string arr_string[] = {"zero", "one", "two", "three", "four"};

	std::cout << CLR "iterating function print on char array" NONE << std::endl;
	iter(arr_char, 5, print<char>);
	std::cout << CLR "iterating function print on int array" NONE << std::endl;
	iter(arr_int, 5, print<int>);
	std::cout << CLR "iterating function print on float array" NONE << std::endl;
	iter(arr_float, 5, print<float>);
	std::cout << CLR "iterating function print on double array" NONE << std::endl;
	iter(arr_double, 5, print<double>);
	std::cout << CLR "iterating function print on string array" NONE << std::endl;
	iter(arr_string, 5, print<std::string>);
	return 0;
}