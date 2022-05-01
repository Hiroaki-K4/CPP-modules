/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 12:08:16 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 14:04:30 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "Wrong animal";
}

WrongAnimal::WrongAnimal(const std::string type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "[Copy constructor]" << std::endl;
    *this = obj;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "[Destructor] " << this->type << " is dead." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    std::cout << "[Copy assignment operator]" << std::endl;
    this->type = obj.type;
    return (*this);
}

std::string const &WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Wrong animal!" << std::endl;
}
