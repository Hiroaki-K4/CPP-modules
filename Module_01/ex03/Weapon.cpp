/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:09:26 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/17 23:11:34 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string weapon)
{
    type = weapon;
}

const std::string &Weapon::getType()
{
    return (type);
}

void Weapon::setType(std::string weapon)
{
    type = weapon;
}
