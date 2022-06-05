/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:57:48 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 20:52:25 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <stack>
#include "MutantStack.hpp"

int main(void)
{
    std::cout << "~~~MutantStack test~~~" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Size: " << mstack.size() << " Top: " << mstack.top() << std::endl;
    std::cout << "Delete top" << std::endl;
    mstack.pop();
    std::cout << "Size: " << mstack.size() << " Top: " << mstack.top() << std::endl;
    std::cout << "Delete top" << std::endl;
    mstack.pop();
    std::cout << "Empty: " << mstack.empty() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << std::endl;

    std::cout << "~~~List test~~~" << std::endl;
    std::list<int> test;
    test.push_back(5);
    test.push_back(17);
    std::cout << "Size: " << test.size() << " Top: " << test.back() << std::endl;
    std::cout << "Delete top" << std::endl;
    test.pop_back();
    std::cout << "Size: " << test.size() << " Top: " << test.back() << std::endl;
    std::cout << "Delete top" << std::endl;
    test.pop_back();
    std::cout << "Empty: " << test.empty() << std::endl;

    test.push_back(3);
    test.push_back(5);
    test.push_back(737);
    test.push_back(0);
    std::list<int>::iterator list_it = test.begin();
    std::list<int>::iterator list_ite = test.end();
    ++list_it;
    --list_it;
    while (list_it != list_ite)
    {
        std::cout << *list_it << std::endl;
        ++list_it;
    }

    return (0);
}
