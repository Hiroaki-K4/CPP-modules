/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:08:32 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/24 22:13:30 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed::Fixed(const int num)
{
    value = num << fractional_bits_num;
}

Fixed::Fixed(const float f_num)
{
    value = (int)(roundf(f_num * (1 << fractional_bits_num)));
}

bool Fixed::operator>(const Fixed &obj)
{
    return (value > obj.value);
}

bool Fixed::operator<(const Fixed &obj)
{
    return (value < obj.value);
}

bool Fixed::operator>=(const Fixed &obj)
{
    return (value >= obj.value);
}

bool Fixed::operator<=(const Fixed &obj)
{
    return (value <= obj.value);
}

bool Fixed::operator==(const Fixed &obj)
{
    return (value == obj.value);
}

bool Fixed::operator!=(const Fixed &obj)
{
    return (value != obj.value);
}

Fixed Fixed::operator+(const Fixed &obj)
{
    Fixed result;
    result.setRawBits(value + obj.value);
    return (result);
}

Fixed Fixed::operator-(const Fixed &obj)
{
    Fixed result;
    result.setRawBits(value - obj.value);
    return (result);
}

Fixed Fixed::operator*(const Fixed &obj)
{
    Fixed result;
    result.setRawBits(value * obj.value / (1 << fractional_bits_num));
    return (result);
}

Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed result;
    result.setRawBits(value / obj.value * (1 << fractional_bits_num));
    return (result);
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    value = obj.value;
    return (*this);
}

Fixed &Fixed::operator++()
{
    value++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    value--;
    return (*this);
}

Fixed Fixed::operator++(int notused)
{
    (void)notused;
    Fixed tmp = *this;
    this->value++;
    return (tmp);
}

Fixed Fixed::operator--(int notused)
{
    (void)notused;
    Fixed tmp = *this;
    this->value--;
    return (tmp);
}

std::ostream &operator<<(std::ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)value / (float)(1 << fractional_bits_num));
}

int Fixed::toInt(void) const
{
    return (value >> fractional_bits_num);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if ((Fixed)obj1 > (Fixed)obj2)
        return (obj1);
    return (obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if ((Fixed)obj1 < (Fixed)obj2)
        return (obj1);
    return (obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    return (obj2);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    return (obj2);
}
