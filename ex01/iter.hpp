/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:22:27 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/27 23:54:38 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, std::size_t N, typename Func>
void	iter(T (&arr)[N], std::size_t len, Func f)
{
	for (std::size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif
