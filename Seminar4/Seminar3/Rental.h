#pragma once
#include "Auto.h"
#include "Kund.h"
#include <iostream>
#include <vector>
#define NULL_AUTO Auto(-1,"","");

class Rental
{
private:
	std::vector<Auto> autos;
	std::vector<Kund> kunden;
public:
	Rental();
	void add_client(Kund k);
	void delete_client(Kund k);
	void update_client(Kund k);
	void add_Auto(Auto a);
	void delete_Auto(Auto a);
};

