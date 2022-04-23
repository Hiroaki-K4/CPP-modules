/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:27:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/21 22:26:45 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "[str]       memory address: " << &str << std::endl;
    std::cout << "[stringPTR] memory address: " <<  stringPTR << std::endl;
    std::cout << "[stringREF] memory address: " << &stringREF << std::endl;
    
    std::cout << "[str]                value: " << str << std::endl;
    std::cout << "[stringPTR]          value: " << *stringPTR << std::endl;
    std::cout << "[stringREF]          value: " << stringREF << std::endl;
    return (0);
}
