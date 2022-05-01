/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:22:29 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 11:51:09 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
}

Animal::Animal(const std::string type)
{
    this->type = type;
}

Animal::Animal(const Animal &obj)
{
    std::cout << "[Copy constructor]" << std::endl;
    *this = obj;
}

Animal::~Animal()
{
    std::cout << "[Destructor] " << this->type << " is dead." << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    std::cout << "[Copy assignment operator]" << std::endl;
    this->type = obj.type;
    return (*this);
}

std::string const &Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal Animal!" << std::endl;
}
