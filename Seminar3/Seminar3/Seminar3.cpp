#include <iostream>
#include "Kund.h"
#include "Rental.h"
#include "LKW.h"
#include "PKW.h"

int main()
{
	LKW l = LKW(1, "Audi", "A4", 1500, "Nu stiu");
	PKW p = PKW(2, "BMW", "M4", "WTF");
	Kund k = Kund(1, "Mihai");
	Rental r;
	r.add_Auto(l);
	r.add_Auto(p);
	r.add_client(k);
	r.update_client(k);
	r.delete_client(k);
	r.delete_Auto(l);
	r.delete_Auto(p);


}

