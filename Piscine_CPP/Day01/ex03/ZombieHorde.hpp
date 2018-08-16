//ZombieHorde.hpp by Carp-Bezverhnii Maxim
#include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde(int n);
	~ZombieHorde(void);

	void announce(void);

	Zombie*	zmb;
};