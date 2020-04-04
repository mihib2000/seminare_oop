#pragma once
#include <iostream>
#include <cmath>

using namespace std;
struct structura { //minim
	bool ok;
	int a;
	char* s = new char[100];
	long b;
	double c;
	long double d;



}st;

struct structura_maxima {

	bool ok = true;
	int a = 100;
	char s[100];
	long b;
	double c = 4.20;
	long double d;
};

char* strfind(const char * s, const char * f) {
	int m = strlen(s);
	int n = strlen(f);

	//cout<<n<<' '<<m;
	int ok;
	for (int i = 0; i < n; i++) {
		ok = 1;
		for (int j = 0; j < m; j++) {
			if (*(f + i + j) != *(s + j)) {
				ok = 0;
				break;
			}
		}
		if (ok == 1)
			return (char*)(f + i);
	}

	return nullptr;
}

int strlength(char* s) {

	int ct = 0;
	while (s[ct] != '\0') {
		ct++;
	}

	return ct;
}

char* strcopy(char *s, char *f) {
	s = f;
	return s;



}


double pi(unsigned int nr) {
	//float Pi = 4 * AnzahlTreffer / AnzahlGesamt;
	unsigned int ct_total = 0, ct_inauntru = 0;
	long double x,y,d,pi;

	for (unsigned int i = 1; i <= nr; i++) {
		x = (long double)rand() / (long double)(RAND_MAX + 1);
		y = (long double)rand() / (long double)(RAND_MAX + 1);


		d = sqrt(x*x + y * y);


		if (d <= 1)
			ct_inauntru++;
	}
	pi = (long double)4;
	pi =pi * ct_inauntru / nr;
	return pi;


}