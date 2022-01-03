/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanlee <kanlee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:03:17 by kanlee            #+#    #+#             */
/*   Updated: 2022/01/03 21:22:32 by kanlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <time.h>
#include "Account.hpp"

using std::cout;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += _amount;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

Account::Account(void) {
	_accountIndex = _nbAccounts;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << endl;
}

Account::~Account(void) {
	_nbAccounts--;
	_totalAmount -= _amount;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << endl;
}

void Account::_displayTimestamp(void) {
	time_t rawtime;
	struct tm *timeinfo;
	char str[18];

	time(&rawtime);
	timeinfo = localtime (&rawtime);
	strftime(str, 18, "[%G%m%d-%H%M%S]",timeinfo);
	cout << str << " ";
}

int Account::getNbAccounts(void) {
	return _nbAccounts;
}

int Account::getTotalAmount(void) {
	return _totalAmount;
}

int Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
	_displayTimestamp();
	cout << "accounts:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:" << getNbWithdrawals() << endl;
}

void Account::makeDeposit(int deposit) {
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount - deposit << ";";
	cout << "deposit:" << deposit << ";";
	cout << "amount:" << _amount << ";";
	cout << "nb_deposits:" << _nbDeposits << endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		cout << "index:" << _accountIndex << ";";
		cout << "p_amount:" << _amount << ";";
		cout << "withdrawal:refused" << endl;
		return false;
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount + withdrawal << ";";
	cout << "withdrawal:" << withdrawal << ";";
	cout << "amount:" << _amount << ";";
	cout << "nb_withdrawals:" << _nbWithdrawals << endl;
	return true;
}

int Account::checkAmount(void) const {
	return _amount;
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << endl;
}
