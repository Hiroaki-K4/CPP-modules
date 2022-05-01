/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:19:21 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 21:59:54 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    const std::string ideas[] = {"joy", "sadness", "anger", "surprise", "fear", "disgust"};
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = ideas[i % 6];
    }
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

std::string Brain::getIdea(const int index)
{
    return (this->ideas[index]);
}

void Brain::setIdea(const int index, std::string idea)
{
    this->ideas[index] = idea;
}
