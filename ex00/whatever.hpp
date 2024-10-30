/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:47:23 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/27 21:59:07 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T	tmp = b;
	b = a;
	a = tmp;
}

template <typename T>
T&	min(T& a, T&b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T&	max(T& a, T& b)
{
	if (a > b)
		return a;
	return b;
}

#endif
