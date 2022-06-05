/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:09:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 18:35:39 by hkubo            ###   ########.fr       */
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
        typedef typename std::deque<T>::iterator iterator;
        iterator begin() {return this->c.begin();};
        iterator end() {return this->c.end();};
};

#endif
