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
	std::cout<<"index:"<<_accountIndex<<";amount:"<<inicial_deposit<<";created"<<std::endl;
}

Account::Account()
{
    _nbAccounts += 1;
    _accountIndex = _nbAccounts;
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
}

Account::~Account()
{}

void	Account::_displayTimestamp()
{
	time_t atl_time = NULL;
	struct tm *info_time;
	char text[18];
	
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

void	Account::makeDeposit(int deposit)
{
	_totalAmount += deposit;
	_nbDeposits += 1;
	_totalNbDeposits += 1;
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";deposit:"<<deposit;
	_amount += deposit;
	std::cout<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		_displayTimestamp();
		std::cout<<"index;"<<this->_accountIndex<<";withdrawal:refused"<<std::endl;
		return (false);
	}
	else
	{
		_totalAmount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_displayTimestamp();
		std::cout<<"index;"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";withdrawal:"<<withdrawal;
		_amount -= withdrawal;
		std::cout<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
		return (true);
	}

}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";whithdrawals:"<<this->_nbWithdrawals<<std::endl;
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout<<"accounts:"<< getNbAccounts()<<";total:"<< getTotalAmount()<<":deposits:"<< getNbDeposits()<<":withdrawals:"<< getNbWithdrawals()<< std::endl;
}