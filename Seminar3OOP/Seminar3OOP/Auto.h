#pragma once
#include <string>
class Auto
{
protected:
	int id;
	std::string Marke;
	std::string Modell;
public:
	Auto(int, std::string, std::string);
	std::string getMarke();
	std::string getModell();
	int getId();

	void setMarke(std::string);
	void setModell(std::string);
	void setId(int);

};

