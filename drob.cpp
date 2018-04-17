#include "drob.h"

void drob::setX(int a)
{
	x = a;
}

void drob::setY(int b)
{
	y = b;
}

double drob::Ddrob()
{
	return (double)x / y;
}

int drob::Cdrob()
{
	return x/y;
}

drob::drob()
{
	int x;
	int y;
	std::cin >> x >> y;
	setX(x);
	setY(y);
	std::cout << "tselaya chast:" << Cdrob() << std::endl;
	std::cout << "veshchestvennoe chislo:" << Ddrob();

}


