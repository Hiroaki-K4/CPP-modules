/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 22:20:27 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/26 22:35:46 by hkubo            ###   ########.fr       */
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
    if (dynamic_cast<A*>(p))
        std::cout << "The type is A." << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The type is B." << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The type is C." << std::endl;
}

void identify(Base &p)
{
    try
    {
        A &ref = dynamic_cast<A&>(p);
        (void)ref;
        std::cout << "The type is A." << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        B &ref = dynamic_cast<B&>(p);
        (void)ref;
        std::cout << "The type is B." << std::endl;
    }
    catch(const std::exception& e){};
    try
    {
        C &ref = (dynamic_cast<C&>(p));
        (void)ref;
        std::cout << "The type is C." << std::endl;
    }
    catch(const std::exception& e){};
}
