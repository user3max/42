//NinjaTrap.hpp by Carp-Bezverhnii Maxim
#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

class NinjaTrap : public ClapTrap
{

public:
	NinjaTrap(std::string name);
	~NinjaTrap();

	void	ninjaShoebox(FragTrap const & target);
	void	ninjaShoebox(ScavTrap const & target);
	void	ninjaShoebox(NinjaTrap const & target);

};

#endif