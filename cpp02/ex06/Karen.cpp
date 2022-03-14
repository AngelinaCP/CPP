#include "Karen.hpp"

Karen::Karen() {}
Karen::~Karen() {}

void	Karen::debug() {
	std::cout << "[DEBUG]" << std::endl;
	std::cout	<< "I love having extra bacon for my"
					"7XL-double-cheese-triple-pickle-special- ketchup"
					"burger. I really do!" << std::endl;
}

void	Karen::info() {
	std::cout << "[INFO]" << std::endl;
	std::cout	<< "I cannot believe adding extra bacon "
					"costs more money. You didn’t put enough "
					"bacon in my burger! If you did, I wouldn’t "
					"be asking for more!" << std::endl;
}

void	Karen::warning() {
	std::cout << "[WARNING]" << std::endl;
	std::cout	<< "I think I deserve to have some extra bacon "
					"for free. I’ve been coming for years whereas "
					"you started working here since last month." << std::endl;
}

void	Karen::error() {
	std::cout << "[ERROR]" << std::endl;
	std::cout	<<	"This is unacceptable! I want to speak to "
					"the manager now." << std::endl;
}

void	Karen::complain(std::string level) {
	std::string options[] = {"debug", "info", "warning", "error"};
	void (Karen:: *ptr_fun[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int	i = 0;

	for(; options[i] != level && i < 4; i++) {
	}
	switch (i) {
		case 0:
			(this->*ptr_fun[0])();
		case 1:
			(this->*ptr_fun[1])();
		case 2:
			(this->*ptr_fun[2])();
		case 3:
			(this->*ptr_fun[3])();
			return ;	
		default:
			std::cout << "Sorry, can't implement this level" << std::endl;
	}
}