/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:27:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/18 22:58:23 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    Zombie first_zombie("Harry");
    first_zombie.announce();

    Zombie *new_zombie = newZombie("Voldemort");
    new_zombie->announce();
    delete new_zombie;

    std::string name_list[10] = {"Dobby", "Hagrid", "Hermione", "Malfoy", "Snape", "Ron", "Dumbledore", "Sirius"};
    for (int i = 0; i < 8; i++) {
        int rand_num = rand() % 10;
        randomChump(name_list[rand_num]);
    }
    return (0);
}
