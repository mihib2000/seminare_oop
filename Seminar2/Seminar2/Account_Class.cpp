#include "Account_Class.h"
//#include <iostream>
#include <fstream>
#include <string>


Account::Account(){
	sold = 0;
	std::ofstream g("datei.txt");
	g.clear();
	g.close();
}

void Account::bezahlen(const double &betrag) {


	if (sold >= betrag) {
		sold -= betrag;
		std::ofstream g("datei.txt", std::ofstream::out | std::ofstream::app);
		g << "OUT " << betrag << ' ' << sold<<'\n';
		g.close();
	}
		
}

void Account::einzahlung(const double &betrag) {
	sold += betrag;

	std::ofstream g("datei.txt", std::ofstream::out | std::ofstream::app);
	g << "IN " << betrag << ' ' << sold<<'\n';
	g.close();
}

double Account::kontostand(void) {
	return sold;
}

void Account::automat(std::string file) {

	std::ifstream input_file;
	input_file.open(file);
	std::string in;
	double a;
	if (input_file.is_open())
		while (!input_file.eof())
		{
			while (input_file >> in >> a)
			{
				if (in == "IN")
				{
					//std::cout << in << " ";
					einzahlung(a);
				}
				else
				{
					//std::cout << in << " ";
					bezahlen(a);
				}

			}
		}

	input_file.close();

}