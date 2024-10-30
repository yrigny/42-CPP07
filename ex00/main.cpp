/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrigny <yrigny@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:22:11 by yrigny            #+#    #+#             */
/*   Updated: 2024/10/27 22:22:18 by yrigny           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"
#define CLR "\e[33m"
#define NONE "\e[0m"

int main( void ) {
	int a = 2;
	int b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	::swap<int>( a, b );
	std::cout << CLR << "a = " << a << ", b = " << b << NONE << std::endl;
	std::cout << "min( a, b ) = " << ::min<int>( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max<int>( a, b ) << std::endl;
	std::cout << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "c = " << c << ", d = " << d << std::endl;
	swap(c, d);
	std::cout << CLR << "c = " << c << ", d = " << d << NONE << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;
	std::cout << std::endl;

	char	e = 'e';
	char	f = 'f';
	std::cout << "e = " << e << ", f = " << f << std::endl;
	::swap(e, f);
	std::cout << CLR << "e = " << e << ", f = " << f << NONE << std::endl;
	std::cout << "min( e, f ) = " << ::min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max( e, f ) << std::endl;
	std::cout << std::endl;

	float	g = 0.42;
	float	h = 42.42;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	::swap(g, h);
	std::cout << CLR << "g = " << g << ", h = " << h << NONE << std::endl;
	std::cout << "min( g, h ) = " << ::min( g, h ) << std::endl;
	std::cout << "max( g, h ) = " << ::max( g, h ) << std::endl;
	return 0;
}
