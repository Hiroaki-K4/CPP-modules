/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 22:10:03 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/17 23:11:29 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string weapon);
        const std::string &getType();
        void setType(std::string weapon);
};

#endif
