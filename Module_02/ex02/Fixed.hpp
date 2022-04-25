/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:08:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/25 22:13:48 by hkubo            ###   ########.fr       */
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
        bool operator>(const Fixed &obj);
        bool operator<(const Fixed &obj);
        bool operator>=(const Fixed &obj);
        bool operator<=(const Fixed &obj);
        bool operator==(const Fixed &obj);
        bool operator!=(const Fixed &obj);
        Fixed operator+(const Fixed &obj);
        Fixed operator-(const Fixed &obj);
        Fixed operator*(const Fixed &obj);
        Fixed operator/(const Fixed &obj);
        Fixed &operator=(const Fixed &obj);
        Fixed &operator++();
        Fixed &operator--();
        Fixed operator++(int notused);
        Fixed operator--(int notused);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
        static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
        static Fixed &max(Fixed &obj1, Fixed &obj2);
        static Fixed &min(Fixed &obj1, Fixed &obj2);
};

std::ostream &operator<<(std::ostream& os, const Fixed &obj);

#endif
