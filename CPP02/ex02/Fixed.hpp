/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:27 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/14 17:42:38 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:

    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &src);
    Fixed	&operator=(const Fixed &src);
	bool	operator>(const Fixed &other);
    bool	operator<(const Fixed &other);
    bool	operator>=(const Fixed &other);
    bool	operator<=(const Fixed &other);
    bool	operator==(const Fixed &other);
    bool	operator!=(const Fixed &other);
    Fixed	operator+(const Fixed &other);
    Fixed	operator-(const Fixed &other);
    Fixed	operator*(const Fixed &other);
    Fixed	operator/(const Fixed &other);
    Fixed	operator++();
    Fixed	operator--();
    Fixed	operator++(int);
    Fixed	operator--(int);
    ~Fixed();
	
    int		getRawBits(void) const;
    void	setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;
	static Fixed		&min(Fixed &obj1, Fixed &obj2);
    static const Fixed	&min(const Fixed &obj1, const Fixed &obj2);
    static Fixed		&max(Fixed &obj1, Fixed &obj2);
    static const Fixed	&max(const Fixed &obj1, const Fixed &obj2);


    private:

    static int const	nb_bits = 8;
    int					value;
};

std::ostream &operator<<(std::ostream &outstream, const Fixed &other);

#endif