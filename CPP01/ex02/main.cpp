/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:14:20 by artvan-d          #+#    #+#             */
/*   Updated: 2023/09/10 17:50:21 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str_brain("HI THIS IS BRAIN");
    std::string *stringPTR = &str_brain;
    std::string &stringREF = str_brain;

    std::cout << "string address : " << &str_brain << std::endl;
    std::cout << "value of stringPTR : " << stringPTR << std::endl;
    std::cout << "address of stringREF : " << &stringREF << std::endl;

    std::cout << "string value : " << str_brain << std::endl;
    std::cout << "value pointed by stringPTR : " << *stringPTR << std::endl;
    std::cout << "value of stringREF : " << stringREF << std::endl;
}