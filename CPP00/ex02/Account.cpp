/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:53:59 by alsanche          #+#    #+#             */
/*   Updated: 2023/03/04 16:40:04 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <chrono>

int Account::_nbAccounts = -1;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inicial_deposit)
{
    _nbAccounts += 1;
    _totalAmount += inicial_deposit;
    _accountIndex = _nbAccounts;
    _amount = inicial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::Account()
{
    _nbAccounts += 1;
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
}

Account::~Account()
{}

void    Account::_displayTimestamp()
{
    std::chrono::
}

int  Account::getNbAccounts()
{
    return (_nbAccounts);
}
int  Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos()
{
    int aux, id;

    for(id = 0; id < _nbAccounts; id++)
    {
        
    }
}