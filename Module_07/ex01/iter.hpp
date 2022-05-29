/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:42:17 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/29 14:13:42 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <class Type>
void output(Type input)
{
    std::cout << "The input is " << input << "." << std::endl;
}

template <class Type>
void iter(Type *adr, size_t len, void (*f)(Type &))
{
    for (size_t i = 0; i < len; i++)
    {
        (*f)(adr[i]);
    }
}

#endif
