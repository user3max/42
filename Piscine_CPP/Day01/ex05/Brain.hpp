//Brain.hpp by Carp-Bezverhnii Maxim
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	int iq;
public:
	Brain();
	~Brain();
	
	std::string identify();
};

#endif