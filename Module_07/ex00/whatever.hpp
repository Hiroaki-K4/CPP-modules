/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 21:46:40 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/27 22:21:47 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <class Type>
void swap(Type &a, Type &b)
{
    Type tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <class Type>
Type min(Type a, Type b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <class Type>
Type max(Type a, Type b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif
