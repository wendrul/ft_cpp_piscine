#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
              << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";created" << std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
    _nbDeposits++;
    _amount += deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << (_amount - deposit)
              << ";deposit:" << deposit
              << ";amount:" << _amount
              << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";p_amount:" << _amount
              << ";withdrawal:";
    if (_amount - withdrawal < 0)
    {
        std::cout << "refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    std::cout << withdrawal
              << ";amount:" << _amount
              << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}
int Account::checkAmount(void) const
{
    return _amount;
}
void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    // std::cout << "[19920104_091532] "; // for diff
    std::time_t t = std::time(0);
    std::tm *now = std::localtime(&t);
    std::cout << "["
              << std::setfill('0') << std::setw(4) << (now->tm_year + 1900)
              << std::setfill('0') << std::setw(2) << (now->tm_mon + 1)
              << std::setfill('0') << std::setw(2) << now->tm_mday
              << "_"
              << std::setfill('0') << std::setw(2) << (now->tm_hour)
              << std::setfill('0') << std::setw(2) << (now->tm_min)
              << std::setfill('0') << std::setw(2) << now->tm_sec
              << "] ";
}
