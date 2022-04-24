/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 14:08:32 by hkubo             #+#    #+#             */
/*   Updated: 2022/04/24 18:53:16 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    value = num << fractional_bits_num;
}

Fixed::Fixed(const float f_num)
{
    std::cout << "Float constructor called" << std::endl;
    value = (int)(roundf(f_num * (1 << fractional_bits_num)));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = obj.value;
    return (*this);
}

std::ostream &operator<<(std::ostream& os, const Fixed &obj)
{
    os << obj.toFloat();
    return (os);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
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
