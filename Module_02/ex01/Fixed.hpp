/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:08:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/24 18:02:21 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int value;
        static const int fractional_bits_num = 8;

    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &obj);
        Fixed(const int num);
        Fixed(const float f_num);
        Fixed &operator=(const Fixed &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream &operator<<(std::ostream& os, const Fixed &obj);

#endif