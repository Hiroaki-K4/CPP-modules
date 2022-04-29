/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:45:17 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 15:28:14 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("scav");
    ScavTrap s_trap("s_trap");

    scav.attack("s_trap");
    scav.takeDamage(20);
    scav.beRepaired(20);
    scav.guardGate();

    return (0);
}
