/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 17:36:27 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/17 14:56:58 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

    private:
        int					value; 
        static int const	nb_bits = 8;

    public:
        Fixed();
        Fixed(int const some_value);
        Fixed(float const some_value);
        Fixed(const Fixed &src);
        ~Fixed();
        Fixed	&operator=(const Fixed &other);
        bool	operator>(const Fixed  &other) const;  
        bool	operator<(const Fixed  &other) const;  
        bool	operator<=(const Fixed  &other) const;  
        bool	operator>=(const Fixed  &other) const;  
        bool	operator==(const Fixed  &other) const;  
        bool	operator!=(const Fixed  &other) const;  
        Fixed	operator+(const Fixed &other) const;
        Fixed	operator-(const Fixed &other) const;
        Fixed	operator*(const Fixed &other) const;
        Fixed	operator/(const Fixed &other) const;
        Fixed	operator++(int);
        Fixed	&operator++();
        Fixed	operator--(int);
        Fixed	&operator--();

        int		getRawBits() const;
        void	setRawBits(int const raw);
        float	toFloat() const;
        int		toInt() const;

        static Fixed		&min(Fixed& obj1, Fixed& obj2);
        static const Fixed	&min(const Fixed& obj1, const Fixed& obj2);
        static Fixed		&max(Fixed& obj1, Fixed& obj2);
        static const Fixed	&max(const Fixed& obj1, const Fixed& obj2);

};

std::ostream &operator<<(std::ostream &outstream, const Fixed &other);

#endif