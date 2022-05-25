/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:24:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/25 23:37:23 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "Identify.hpp"

int main(void)
{
    std::cout << "test" << std::endl;
    Base *test = generate();
    identify(test);

    return (0);
}
