#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	std::string name;
	Pony* pny1 = new Pony;
	//std::string num = "first";

	pny1->setNr("first");
	std::cout << "Give a name for your " << pny1->getNr() << pny1->getColor() << " pony" << std::endl;
	std::cin >> name;
	pny1->setName(name);

	delete pny1;
}

void ponyOnTheStack(void)
{
	std::string name;
	Pony pny2;
	//std::strin num = "second";
	
	pny2.setNr("second");
	std::cout << "Give a name for your " << pny2.getNr() << pny2.getColor() << " pony" << std::endl;
	std::cin >> name;
	pny2.setName(name);
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	
	return (0);
}
