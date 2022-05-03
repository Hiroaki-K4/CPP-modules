/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:22:06 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/03 12:14:09 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
        Animal();
        Animal(const std::string type);
        Animal(const Animal &obj);
    public:
        virtual ~Animal();
        Animal &operator=(const Animal &obj);
        std::string const &getType() const;
        virtual void makeSound() const;
};

#endif
