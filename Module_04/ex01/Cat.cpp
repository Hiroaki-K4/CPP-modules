/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:53:30 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 21:20:18 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(): Animal("Cat")
{
    this->brain = new Brain();
}

Cat::Cat(const Cat &obj): Animal(obj)
{
    this->brain = new Brain();
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "[ Cat destructor] " << this->type << " is dead." << std::endl;
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

Brain *Cat::getBrain()
{
    return (this->brain);
}
