/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkubo <hkubo@student.42tokyo.jp>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 21:56:57 by hkubo             #+#    #+#             */
/*   Updated: 2022/03/07 22:22:19 by hkubo            ###   ########.fr       */
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

static int getNbAccounts(void)
{
    return (0);
}

static int getTotalAmount(void)
{
    return (0);
}

static int getNbDeposits(void)
{
    return (0);
}

static int getNbWithdrawals(void)
{
    return (0);
}

static void	displayAccountsInfos(void)
{
    
}

void makeDeposit(int deposit)
{
    std::cout << deposit << std::endl;
}

bool makeWithdrawal(int withdrawal)
{
    std::cout << withdrawal << std::endl;
    return (true);
}

int checkAmount(void)
{
    return (1);
}

void Account::displayStatus(void) const
{
    
}