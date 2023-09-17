/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:29 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/17 17:37:38 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0) 
{}

Fixed::Fixed(int const some_value) 
{
    value = some_value << nb_bits;
}

Fixed::Fixed(float const some_value) 
{
    value = roundf(some_value * (1 << nb_bits));
}

Fixed::Fixed(const Fixed &src)
{
    *this = src;
}

Fixed::~Fixed() 
{}

Fixed &Fixed::operator=(const Fixed &src)
{
    value = src.getRawBits();
    return (*this);
}

bool    Fixed::operator<(const Fixed &other) const
{
    return (this->value < other.value);
}

bool    Fixed::operator>(const Fixed &other) const
{
    return (this->value > other.value);
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return (this->value <= other.value);
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return (this->value >= other.value);
}

bool    Fixed::operator==(const Fixed &other) const
{
    return (this->value == other.value);
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return (this->value != other.value);
}

Fixed   Fixed::operator+(const Fixed &other) const 
{
    Fixed sum;
    sum.setRawBits(this->value + other.value); 
    return (sum);
}

Fixed   Fixed::operator-(const Fixed &other) const 
{
    Fixed sub;
    sub.setRawBits(this->value - other.value);
    return (sub);
}

Fixed   Fixed::operator*(const Fixed &other) const 
{
    Fixed prod;
    prod.setRawBits((this->value * other.value) >> this->nb_bits);
    return (prod);
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    Fixed quot;
    if (other == 0) {
        std::cout << "Div by 0 not allowed" << std::endl;
        return (0);
    }
    else {
        quot.setRawBits((this->value  << this->nb_bits) / other.value);
        return (quot);
    }
}

Fixed   Fixed::operator++(int) 
{
    Fixed tmp;

    tmp = *this;
    this->value += 1;
    return (tmp);
}

Fixed	&Fixed::operator++ () 
{
    this->value += 1;
    return (*this);
}

Fixed   Fixed::operator--(int) 
{
    Fixed tmp;

    tmp = *this;
    this->value -= 1;
    return (tmp);
}

Fixed	&Fixed::operator-- () 
{
    this->value -= 1;
    return (*this);
}

std::ostream &operator<<(std::ostream &outstream, const Fixed &other) 
{
    outstream << other.toFloat();
    return (outstream);
}

int Fixed::getRawBits() const 
{
    return (value);
}

void Fixed::setRawBits(const int raw) 
{
    value = raw;
}

float Fixed::toFloat() const 
{
    return ((float)value / (1 << nb_bits));
}

int Fixed::toInt() const 
{
    return (value >> nb_bits);
}

Fixed	&Fixed::min(Fixed &obj1, Fixed &obj2) 
{
    if (obj1 <= obj2)
        return (obj1);
    return (obj2);
}

const Fixed	&Fixed::min(const Fixed &obj1, const Fixed &obj2)  
{
    if (obj1 <= obj2)
        return (obj1);
    return (obj2);
}

Fixed	&Fixed::max(Fixed &obj1, Fixed &obj2) 
{
    if (obj1 >= obj2)
        return (obj1);
    return (obj2);
}

const Fixed	&Fixed::max(const Fixed &obj1, const Fixed &obj2)  
{
    if (obj1 >= obj2)
        return (obj1);
    return (obj2);
}