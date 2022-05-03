/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 14:19:34 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/01 22:05:42 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &obj);
        ~Brain();
        Brain &operator=(const Brain &obj);
        std::string getIdea(const int index);
        void setIdea(const int index, std::string idea);
};

#endif
