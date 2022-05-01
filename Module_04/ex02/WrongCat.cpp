/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:06:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 13:57:52 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("Wrong cat")
{
}

WrongCat::WrongCat(const WrongCat &obj): WrongAnimal(obj)
{
}

WrongCat::~WrongCat()
{
    std::cout << "[ WrongCat destructor] " << this->type << " is dead." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
    this->WrongAnimal::operator=(obj);
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Nya-Nya-!" << std::endl;
}
