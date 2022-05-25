/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:20:27 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/25 23:38:16 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

Base *generate(void)
{
    srand(time(NULL));
    Base *obj = NULL;

    int i = rand() % 3;
    if (i == 0)
        obj = new A;
    else if (i == 1)
        obj = new B;
    else if (i == 2)
        obj = new C;
    return obj;
}

void identify(Base *p)
{
    (void)p;
    std::cout << typeid(*p).name() << std::endl;
}

void identify(Base &p)
{
    (void)p;
}
