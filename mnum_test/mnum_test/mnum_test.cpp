// mnum_test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double func1(double c) {
	return -exp((-0.1) / (20 + 273))*c;
}

double func2(double t) {
	return 15 * exp((-0.1) / t + 273) * 2 - 0.1*(t - 20);
}

int main()
{
	double t = 0.5;
	double tn, cn;
	double h = 0.5 / 2;
	double c = 2;
	for (size_t i = 0; i < 3; i++)
	{
		
		tn = t + h;
		cn = c + h*func1(c);
		cout << "t= " << tn << "\t c=" << cn << endl;
		t = tn;
		c = cn;
	}
	t = 0.5;
	double a=20;
	double an;
	for (size_t i = 0; i < 3; i++)
	{
		tn = t + h;
		an = a + h*func2(a);
		cout << "t= " << tn << "\t T=" << an << endl;
		t = tn;
		a = an;
	}





    return 0;
}

