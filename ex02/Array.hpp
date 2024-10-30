/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 22:02:46 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/28 23:15:19 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& src);
		~Array();
		Array& operator=(const Array& rhs);
		T& operator[](unsigned int i);

		unsigned int	size() const;

		class OutOfLimitsException : public std::exception
		{
			public:
				const char* what() const throw();
		};
	
	private:
		unsigned int	_size;
		T*	_array;
};

# include "Array.tpp"
#endif
