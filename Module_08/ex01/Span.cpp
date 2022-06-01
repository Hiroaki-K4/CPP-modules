/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 21:45:51 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/01 22:58:48 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    this->size = N;
}

void Span::addNumber(int n)
{
    if (this->v.size() == this->size)
        throw std::exception();
    this->v.push_back(n);
}

int Span::shortestSpan()
{
    std::vector<int> copy = this->v;
    std::sort(copy.begin(), copy.end());
    std::vector<int>::iterator prev = copy.begin();
    std::vector<int>::iterator next = ++copy.begin();
    int shortest_span = *next - *prev;
    
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
    std::vector<int> copy = this->v;
    std::sort(copy.begin(), copy.end());
    return (copy.back() - copy.front());
}
