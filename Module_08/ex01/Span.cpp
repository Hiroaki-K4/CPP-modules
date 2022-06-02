/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:45:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/02 22:52:31 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N)
{
    this->size = N;
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span &Span::operator=(const Span &obj)
{
    this->size = obj.size;
    this->v = obj.v;
    return (*this);
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    if (this->v.size() >= this->size)
        throw std::exception();
    this->v.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (end - begin > this->size)
        throw std::exception();
    this->v.insert(this->v.begin(), begin, end);
}

int Span::shortestSpan()
{
    if (this->v.size() <= 1)
        throw std::exception();
    std::vector<int> copy = this->v;
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator prev = copy.begin();
    std::vector<int>::iterator next = ++copy.begin();
    int shortest_span = *next - *prev;
    prev = next;
    next++;
    while (next != copy.end())
    {
        if (*next - *prev < shortest_span)
            shortest_span = *next - *prev;
        prev = next;
        next++;
    }
    return (shortest_span);
}

int Span::longestSpan()
{
    if (this->v.size() <= 1)
        throw std::exception();
    std::vector<int> copy = this->v;
    std::sort(copy.begin(), copy.end());
    return (copy.back() - copy.front());
}
