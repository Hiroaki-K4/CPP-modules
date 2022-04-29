/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:45:17 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/29 16:03:08 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    FragTrap frag("frag");
    FragTrap f_trap("f_trap");

    frag.attack("f_trap");
    frag.takeDamage(20);
    frag.beRepaired(20);
    frag.highFivesGuys();

    return (0);
}
