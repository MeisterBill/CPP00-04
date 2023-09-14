#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	public:

	Fixed();
	Fixed(Fixed &number);
	Fixed &operator=(Fixed &src);
	~Fixed();
	int		getRawBits(void);
	void	setRawBits(int const raw);

	private:

	static int const	nb_bits;
	int								value;
};

#endif
