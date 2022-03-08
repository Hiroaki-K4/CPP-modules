/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:56:57 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/08 21:09:17 by hkubo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
    std::cout << "initial_deposit: " << initial_deposit << std::endl;
}

Account::~Account(void)
{
    std::cout << "~Account" << std::endl;
}

int Account::getNbAccounts(void)
{
    return (0);
}

int Account::getTotalAmount(void)
{
    return (0);
}

int Account::getNbDeposits(void)
{
    return (0);
}

int Account::getNbWithdrawals(void)
{
    return (0);
}

void Account::displayAccountsInfos(void)
{
    
}

void Account::makeDeposit(int deposit)
{
    std::cout << deposit << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout << withdrawal << std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    return (1);
}

void Account::displayStatus(void) const
{
    
}