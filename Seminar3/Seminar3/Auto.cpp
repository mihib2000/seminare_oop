#include "Auto.h"

Auto::Auto(int i, std::string ma, std::string mo)
{
	id = i;
	Marke = ma;
	Modell = mo;
}

std::string Auto::getMarke()
{
	return Marke;
}

std::string Auto::getModell()
{
	return Modell;
}

int Auto::getId()
{
	return id;
}

void Auto::setMarke(std::string ma)
{
	Marke = ma;
}

void Auto::setModell(std::string mo)
{
	Modell = mo;
}

void Auto::setId(int i)
{
	id = i;
}
