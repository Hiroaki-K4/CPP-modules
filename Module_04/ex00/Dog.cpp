/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:55:36 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 12:09:58 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal("Dog")
{
}

Dog::Dog(const Dog &obj): Animal(obj)
{
}

Dog::~Dog()
{
    std::cout << "[Dog destructor] " << this->type << " is dead." << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{
    this->Animal::operator=(obj);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wan Wan!" << std::endl;
}
