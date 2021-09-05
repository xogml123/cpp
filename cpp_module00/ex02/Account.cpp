#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<"accounts:"<<Account::_nbAccounts<<";total:"<<Account::_totalAmount
		<<";deposits:"<<Account::_totalNbDeposits
		<<";withdrawals:"<<Account::_totalNbWithdrawals<<std::endl;
}
Account::Account(int initial_deposit)
:_accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";created"<<std::endl;
	_nbAccounts++;
	_totalAmount+=initial_deposit;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;

}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount;
	_amount+=deposit;
	_totalAmount+=deposit;
	std::cout<<";deposit:"<<deposit<<";amount:"<<_amount;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout<<";nb_deposits:"<<_nbDeposits<<std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:";
	if (_amount - withdrawal < 0)
	{
		std::cout<<"refused"<<std::endl;
		return (false);
	}
	_amount-=withdrawal;
	_totalAmount-=withdrawal;
	std::cout<<withdrawal<<";amount:"<<_amount;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout<<"index:"<<_accountIndex<<";amount:"<<_amount<<";deposits:"<<_nbDeposits<<";withdrawals:"
		<<_nbWithdrawals<<std::endl;
}
void	Account::_displayTimestamp( void )
{
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std::setw(2) << utc_tm.tm_mon
			<< std::setw(2) << utc_tm.tm_mday << "_"
			<< std::setw(2) << utc_tm.tm_hour
			<< std::setw(2) << utc_tm.tm_min
			<< std::setw(2) << utc_tm.tm_sec << "] ";
}