#include "Account.hpp"

void	makeDeposit( int deposit );
bool	makeWithdrawal( int withdrawal );
int		checkAmount( void ) const;
void	displayStatus( void ) const;


//private
static void	_displayTimestamp( void );