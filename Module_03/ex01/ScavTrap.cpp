/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 22:26:52 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 15:25:53 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "[ScavTrap default constructor]" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
    std::cout << "[ScavTrap constructor] I'm " << name << "!" << std::endl;
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &obj): ClapTrap(obj)
{
}

ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap destructor] " << this->name << " is dead." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    ClapTrap::operator=(obj);
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap ";
    ClapTrap::attack(target);
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
