#pragma once
#include <fstream>
#include <iostream>
class Account
{

private:
	double sold;
public:
	Account();

	void bezahlen(const double &betrag);
	void einzahlung(const double &betrag);
	double kontostand(void);
	void automat(std::string file);







};

