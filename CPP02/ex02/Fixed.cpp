/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:29 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/14 17:44:27 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed b( 5.05f );
	Fixed c( 2 );

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;

	std::cout << "b + c = " << Fixed( b + c ) << std::endl;
	std::cout << "b - c = " << Fixed( b - c ) << std::endl;
	std::cout << "c - b = " << Fixed( c - b ) << std::endl;
	std::cout << "b * c = " << Fixed( b * c ) << std::endl;
	std::cout << "b / c = " << Fixed( b / c ) << std::endl;
	std::cout << "c / b = " << Fixed( c / b ) << std::endl;

	std::cout << "max(b, c) = " << Fixed::max(b, c) << std::endl;
	std::cout << "min(b, c) = " << Fixed::min(b, c) << std::endl;

	return 0;
}