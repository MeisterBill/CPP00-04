/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:58:18 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/14 16:21:23 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:

	Fixed();
	Fixed(Fixed &src);
	Fixed &operator=(Fixed &src);
	~Fixed();
	int		getRawBits(void);
	void	setRawBits(int const raw);

	private:

	static int const	nb_bits = 8;
	int								value;
};

#endif
