/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:58:36 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/14 16:21:16 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:

    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &src);
    Fixed &operator=(const Fixed &src);
    ~Fixed();
    int		getRawBits(void) const;
    void	setRawBits(int const raw);
    float	toFloat(void) const;
    int		toInt(void) const;

    private:

    static int const	nb_bits = 8;
    int					value;
};

std::ostream &operator<<(std::ostream &outstream, const Fixed &other);

#endif