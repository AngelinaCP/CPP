#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;

Account::Account( int initial_deposit ) :   _accountIndex(_nbAccounts),
                                            _amount(initial_deposit),
                                            _nbDeposits(0),
                                            _nbWithdrawals(0)
                                            {
    _nbAccounts++;
    _totalAmount += _amount;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "created" << std::endl;
}

Account::~Account( void ) {

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "closed:" << std::endl;

};

int	Account::getNbAccounts( void ) {
    return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return _totalAmount;
}

int	Account::getNbDeposits( void ) {
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit ) {
    _nbDeposits++;
    _totalAmount += deposit;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:"  << _amount << ";"
                << "deposit:"   << deposit << ";"
                << "amount:"    << deposit+ + _amount
                << ";" << "nb_deposits:" << _nbDeposits
                << std::endl;
    _amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";"
                << "p_amount:" << _amount << ";";
    if (withdrawal > _amount) {
        std::cout << "withdrawal: refused" << std::endl;
        return false;
    }
    _nbWithdrawals++;
    std::cout << "withdrawal:" << withdrawal << ";"
                << "amount:" << _amount - withdrawal << ";"
                << "nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    return true;
}

void	Account::displayStatus( void ) const {
    _displayTimestamp();
     std::cout << "index:" << _accountIndex << ";"
                << "amount:" << _amount << ";"
                << "deposits:" << _nbDeposits << ";"
                << "withdrawals:" << _nbWithdrawals
                << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t res = std::time(nullptr);
    std::tm* 		time = std::localtime(&res);

    std::cout		<< "[" << time->tm_year + 1900
                     << time->tm_mon + 1
                     << time->tm_mday << "_"
                     << time->tm_hour
                     << time->tm_min
                     << time->tm_sec << "] ";

}
void	Account::displayAccountsInfos(void) {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";"
              << "total:" << _totalAmount << ';'
              << "deposits:" << _totalNbDeposits << ";"
              << "withdrawals:" << _totalNbWithdrawals
              << std::endl;

}

