/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 21:57:48 by hkubo             #+#    #+#             */
/*   Updated: 2022/06/05 18:38:20 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include "MutantStack.hpp"

int main(void)
{
    std::cout << "~~~Test MutantStack~~~" << std::endl;
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

    return (0);
}
