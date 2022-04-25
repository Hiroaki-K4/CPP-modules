/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 20:45:17 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/25 21:52:20 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clap("clap");
    ClapTrap trap("trap");

    clap.attack("trap");
    clap.takeDamage(10);
    clap.beRepaired(10);

    return (0);
}
