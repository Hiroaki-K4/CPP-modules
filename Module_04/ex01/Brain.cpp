/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:19:21 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 14:48:06 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    ideas[0] = "ideas";
}

Brain::Brain(const Brain &obj)
{
    std::cout << "[Brain copy constructor]" << std::endl;
    *this = obj;
}

Brain::~Brain()
{
    std::cout << "[Brain destructor] Brain is dead." << std::endl;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "[Brain copy assignment operator]" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    return (*this);
}
