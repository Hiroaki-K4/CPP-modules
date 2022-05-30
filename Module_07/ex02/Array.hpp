/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:34:20 by hkubo             #+#    #+#             */
/*   Updated: 2022/05/30 21:48:48 by hkubo            ###   ########.fr       */
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
            this->array_size = obj.size();
            this->array = new T[obj.size()];
            for (unsigned int i = 0; i < obj.size(); i++)
                this->array[i] = obj[i];
        };
        Array &operator=(const Array &obj)
        {
            this->~Array();
            this->array_size = obj.size();
            this->array = new T[obj.size()];
            for (unsigned int i = 0; i < obj.size(); i++)
                this->array[i] = obj[i];
            return (*this);
        };
        T &operator[](int n) const
        {
            if (n < 0 || n >= static_cast<int>(this->size()))
                throw std::exception();
            return (array[n]);
        };
        ~Array()
        {
            delete[] this->array;
        };
        unsigned int size() const
        {
            return (this->array_size);
        };
        T getArray()
        {
            return (this->array);
        };
};

#endif
