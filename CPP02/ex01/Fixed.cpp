/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:58:33 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/17 17:12:58 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void):value(0)
{
    std::cout << "Default constructor called\n";
}

Fixed::Fixed(float const some_value)
{
    std::cout << "Float constructor called\n";
	value = roundf(some_value * (1 << nb_bits));
}

Fixed::Fixed(int const some_value)
{
    std::cout << "Int constructor called\n";
	value = some_value << nb_bits;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called\n";
    *this = src;
}

Fixed &Fixed::operator=(const Fixed &src)
{
    std::cout << "Copy assignment operator called\n";
    value = src.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

int Fixed::getRawBits() const
{
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called\n";
    value = raw;
}

float Fixed::toFloat() const
{
    return (float(value) / (1 << nb_bits));
}

int Fixed::toInt() const
{
    return (value >> nb_bits);
}

std::ostream &operator<<(std::ostream &outstream, const Fixed &obj)
{
	outstream << obj.toFloat();
	return outstream;
}