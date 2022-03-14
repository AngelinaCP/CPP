#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void	Karen::debug() {
	std::cout	<< "I love having extra bacon for my"
					"7XL-double-cheese-triple-pickle-special- ketchup"
					"burger. I really do!" << std::endl;
}

void	Karen::info() {
	std::cout	<< "I cannot believe adding extra bacon "
					"costs more money. You didn’t put enough "
					"bacon in my burger! If you did, I wouldn’t "
					"be asking for more!" << std::endl;
}

void	Karen::warning() {
	std::cout	<< "I think I deserve to have some extra bacon "
					"for free. I’ve been coming for years whereas "
					"you started working here since last month." << std::endl;
}

void	Karen::error() {
	std::cout	<<	"This is unacceptable! I want to speak to "
					"the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	std::string options[] = {"debug", "info", "warning", "error"};
	void (Karen:: *ptr_fun[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int	i = 0;

	for(; options[i] != level; i++) {
		if (i > 3) {
			std::cout << "Sorry, can't implement this level" << std::endl;
			return ;
		}
	}
	(this->*ptr_fun[i])();
}