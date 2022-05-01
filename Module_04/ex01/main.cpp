/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:21:16 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 22:11:13 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    Animal *Animals[10];
    for (int k = 0; k < 10; k++)
    {
        if (k % 2 == 0)
            Animals[k] = new Dog();
        else
            Animals[k] = new Cat();
    }

    std::cout << "~~~~~Deep copy~~~~~" << std::endl;
    Dog dog(*(Dog *)Animals[0]);
    dog.getBrain()->setIdea(99, "anger");
    for (int i = 0; i < 100; i++)
    {
        std::cout << "[Original] " << ((Dog *)(Animals[0]))->getBrain()->getIdea(i) << " [Deep copy] " << dog.getBrain()->getIdea(i) << std::endl;
    }

    std::cout << std::endl;
    for (int k = 0; k < 10; k++)
    {
        delete Animals[k];
    }

    return (0);
}
