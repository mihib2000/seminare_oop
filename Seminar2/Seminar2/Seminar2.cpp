#include <iostream>
#include <string.h>
#include "functii.h"
#include "Account_Class.h"


using namespace std;







int main() {


	char *s = new char[3]{ 'b','c','\0' };



	char *f = new char[5]{ 'a','b','c','d', '\0' };
	

	cout << endl << strfind(s, f) << endl;

	cout <<"dimensiune struct: "<< sizeof(structura) << endl;
	cout <<"dimensiune struct: "<< sizeof(structura_maxima) << endl;




	structura *p,pp;
	p = &pp;

	p->a = 12;
	cout << p->a<<endl;

	cout << strlength(f)<<endl;
	//cout << (f+1);
	char* newstr = strcopy(f, f+1);
	cout<< newstr<<endl;

	cout<<pi(99999)<<endl;

	Account a;
	a.einzahlung(9999);
	cout << a.kontostand()<<endl;
	a.bezahlen(999);
	cout << a.kontostand()<<endl;
	cout << "inut \n";
	a.automat("input.txt");
	cout << a.kontostand() << endl;

	
	return 0;
};