/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 22:27:50 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/18 23:01:41 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        void announce(void);
        ~Zombie();
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);

#endif