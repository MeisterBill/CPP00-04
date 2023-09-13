/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:36:43 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/13 15:42:00 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    public:

    Harl();
    ~Harl();


    void    complain( std::string lvl );

    private:

    void		debug();
	void		info();
	void		warning();
	void		error();
	std::string	level[4];
    void		(Harl::*fct[4])(void);
};

#endif

