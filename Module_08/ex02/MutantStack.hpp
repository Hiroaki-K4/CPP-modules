/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:09:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/04 17:32:06 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iterator>

template <typename T> class MutantStack : public std::stack<T>
{
    public:
        MutantStack() {};
        MutantStack(const MutantStack &obj) {*this = obj;};
        MutantStack &operator=(const MutantStack &obj)
        {
            (void)obj;
            return (*this);
        };
        ~MutantStack() {};
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() {return this->c.begin();};
        // MutantStack<T>::iterator begin();
        // std::stack<T>::iterator end();
        // std::stack<T>::iterator cbegin();
        // std::stack<T>::iterator cend();
        // std::stack<T>::iterator rbegin();
        // std::stack<T>::iterator rend();
        // std::stack<T>::iterator crbegin();
        // std::stack<T>::iterator crend();
};

#endif
