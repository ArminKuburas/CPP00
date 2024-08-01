/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuburas <akuburas@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 03:08:43 by akuburas          #+#    #+#             */
/*   Updated: 2024/08/01 03:33:56 by akuburas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(nullptr);
	std::tm *local_time = std::localtime(&now);
	std::cout << "[" << (local_time->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') 
				<< (local_time->tm_mon + 1)
				<< std::setw(2) << std::setfill('0')
				<< local_time->tm_mday << "_"
				<< std::setw(2) << std::setfill('0')
				<< local_time->tm_hour
				<< std::setw(2) << std::setfill('0')
				<< local_time->tm_min
				<< std::setw(2) << std::setfill('0')
				<< local_time->tm_sec << "] ";
}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" 
	<< _totalAmount << ";deposits:" << _totalNbDeposits 
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_nbAccounts--;
	this->_totalAmount -= this->_amount;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:"
	 << _amount - deposit << ";deposit:"
	 << deposit << ";amount:" << _amount
	 << ";nb_deposits:" << _nbDeposits << std::endl;
}

int Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	 << ";amount:" << _amount
	 << ";deposits:" << _nbDeposits 
	 << ";withdrawals:"
	 << _nbWithdrawals << std::endl;
}