/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:53:31 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 16:01:03 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "[FragTrap default constructor]" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
    std::cout << "[FragTrap constructor] I'm " << name << "!" << std::endl;
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &obj): ClapTrap(obj)
{
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap destructor] " << this->name << " is dead." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    ClapTrap::operator=(obj);
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    std::cout << "FragTrap ";
    ClapTrap::attack(target);
}

void FragTrap::highFivesGuys()
{
    std::cout << "High fives request!!!!!" << std::endl;
}
