/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:34:20 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/29 17:02:58 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T> class Array
{
    private:
        T *array;
        unsigned int array_size;
    public:
        Array()
        {
            array = new T[0];
            array_size = 0;
        };
        Array(unsigned int n)
        {
            array = new T[n];
            array_size = n;
        };
        Array(const Array &obj)
        {
            *this = obj;
        };
        Array &operator=(const Array &obj)
        {
            this->array = obj.array;
            this->array_size = obj.array_size;
            return (*this);
        };
        T &operator[](const unsigned int n)
        {
            if (n >= array_size)
                throw std::exception();
            return (array[n]);
        };
        ~Array()
        {
            delete[] this->array;
        };
        unsigned int size()
        {
            return this->array_size;
        };
        T getArray()
        {
            return (this->array);
        };
};

#endif
