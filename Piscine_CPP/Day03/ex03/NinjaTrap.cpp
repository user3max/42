//NinjaTrap.cpp by Carp-Bezverhnii Maxim

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) {
	_HP = 60;
	_maxHP = 60;
	_EP = 120;
	_maxEP = 120;
	_lvl = 1;
	_name = name;
	_melleeAttackDmg = 60;
	_rangedAttackDmg = 5;
	_armDmgRed = 0;
	std::cout << "Loading ... all modules" << std::endl;
	std::cout << "New Ninja Ninja Clap is created... " << "Hi, my new friend, my Ninja Clap Name is " << _name << std::endl;
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap Robot with name '" << _name << "'' was destroyed!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	std::cout << _name << " picked up the robot of type FragTrap and took him to the garbage" << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	std::cout << _name << " picked up the robot of type ScavTrap and took him to the garbage" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	std::cout << _name <<  ": I will try to jump into one leg master!" << std::endl;
}