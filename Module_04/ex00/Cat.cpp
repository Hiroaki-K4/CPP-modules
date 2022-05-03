/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:53:30 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 12:09:54 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
}

Cat::Cat(const Cat &obj): Animal(obj)
{
}

Cat::~Cat()
{
    std::cout << "[Cat destructor] " << this->type << " is dead." << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{
    this->Animal::operator=(obj);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Nya-Nya-!" << std::endl;
}
