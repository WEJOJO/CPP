#include <iostream>
#include <ctime>
#include "Account.hpp"

int	Account::_totalAmount = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = getNbAccounts();
	Account::_nbAccounts+=1;
	Account::_totalAmount+=initial_deposit;
	_amount = initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "created" << std::endl;
}

int		Account::checkAmount( void ) const
{
	return _amount;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << checkAmount() << ";" << "closed" << std::endl;
}
int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday << "_0" << (ltm->tm_hour*3600) + (ltm->tm_min*60) + ltm->tm_sec << "]" << " ";
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp(); //Account:: >>> ?? 동일 클래스끼리는 접근이 가능하기 때문??
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << checkAmount() << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int p_amount;

	p_amount = checkAmount();
	_amount=_amount+deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	Account::_displayTimestamp();
	if (deposit < 0)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposits:refused" << std::endl;
		return ;
	}
	_totalAmount+=deposit; //return 되지 않은 것만 더한다
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposits:" << deposit << ";amount:" << checkAmount() << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount;

	p_amount = checkAmount();
	Account::_displayTimestamp();
	if (withdrawal > p_amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	_amount-=withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_totalAmount-=withdrawal;
	std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return true;
}