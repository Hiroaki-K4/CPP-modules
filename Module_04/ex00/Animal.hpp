/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:22:06 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 17:11:33 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const std::string type);
        Animal(const Animal &obj);
        ~Animal();
        Animal &operator=(const Animal &obj);
        std::string const &getType() const;
        void makeSound() const;
};

#endif