/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsanche <alsanche@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:53:59 by alsanche          #+#    #+#             */
/*   Updated: 2023/05/13 17:30:34 by alsanche         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int inicial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts += 1;
    _totalAmount += inicial_deposit;
    _amount = inicial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<inicial_deposit<<";created\n";
}

Account::Account()
{
    _nbAccounts += 1;
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created\n";
}

Account::~Account()
{}

void	Account::_displayTimestamp()
{
	time_t atl_time;
	struct tm *info_time;
	char text[20];
	
	time(&atl_time);
	info_time = localtime(&atl_time);
	std::strftime(text, sizeof(text), "[%Y%m%d_%H%M%S] ", info_time);
	std::cout<<text;
}

int	Account::getNbAccounts()
{
    return (_nbAccounts);
}
int	Account::getTotalAmount()
{
    return (_totalAmount);
}

int	Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

int		Account::checkAmount(void) const
{
	return(this->_amount);
}

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<checkAmount()<<";deposit:"<<deposit;
	_amount += deposit;
	std::cout<<";amount:"<<checkAmount()<<";nb_deposits:"<<this->_nbDeposits<<"\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > checkAmount())
	{
		_displayTimestamp();
		std::cout<<"index;"<<this->_accountIndex<<";withdrawal:refused\n";
		return (false);
	}
	else
	{
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout<<"index;"<<this->_accountIndex<<";p_amount:"<<checkAmount()<<";withdrawal:"<<withdrawal;
		_amount -= withdrawal;
		std::cout<<";amount:"<<checkAmount()<<";nb_withdrawals:"<<this->_nbWithdrawals<<"\n";
		return (true);
	}

}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<checkAmount()<<";deposits:"<<this->_nbDeposits<<";whithdrawals:"<<this->_nbWithdrawals<<"\n";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<<"accounts:"<< getNbAccounts()<<";total:"<< getTotalAmount()<<":deposits:"<< getNbDeposits()<<":withdrawals:"<< getNbWithdrawals()<<"\n";
}
