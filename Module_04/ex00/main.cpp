/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:21:16 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 17:14:53 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    // const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    j->makeSound();
    meta->makeSound();

    return (0);
}