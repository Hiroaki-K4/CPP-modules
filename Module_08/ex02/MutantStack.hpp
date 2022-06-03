/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:09:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/03 23:03:37 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

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
        // begin, end, cbegin, cend, rbegin, rend, crbegin, crend
};

#endif
