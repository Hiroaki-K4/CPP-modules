/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:46:22 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 15:21:47 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "[Default constructor]" << std::endl;
    this->name = "NoName";
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const std::string &name)
{
    std::cout << "[Constructor] I'm " << name << "!" << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "[Copy constructor]" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[Destructor] " << this->name << " is dead." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "[Copy assignment operator]" << std::endl;
    this->name = obj.name;
    this->hit_points = obj.hit_points;
    this->energy_points = obj.energy_points;
    this->attack_damage = obj.attack_damage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    std::cout << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
    this->energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->name << " take " << amount << " damage!" << std::endl;
    this->hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->name << " will be repaired " << amount << " hit points!" << std::endl;
    this->hit_points += amount;
    this->energy_points -= 1;
}
