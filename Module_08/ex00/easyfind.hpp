/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:58:04 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/31 22:52:38 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>

template <class T>
typename T::iterator easyfind(T container, int num)
{
    typename T::iterator it;
    it = find(container.begin(), container.end(), num);
    if (it == container.end())
        throw std::exception();
    return (it);
}

#endif
