/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:08:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/25 22:13:58 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static const int fractional_bits_num = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif
