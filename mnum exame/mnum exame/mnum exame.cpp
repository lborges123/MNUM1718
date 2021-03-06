// mnum exame.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iomanip>
#include <cmath>
#include <iostream>

using namespace std;

double dfx(double x, double y) {
	return 12 * x - 1.6*y - 8;
}

double dfy(double x, double y) {
	return -1.6*x + 12 + 2 * y;
}

double f(double x, double y) {
	return 6 * x*x - 1.6*x*y + 12 * y + y*y - 8 * x;
}

int main()
{
	double h = 0.1, x, y, xa = 2.7, ya = 2.3;
	for (int i = 0; i < 3; i++) {
		x = xa - h*dfx(xa, ya);
		y = ya - h*dfy(xa, ya);
		if (f(xa, ya) < f(x, y)) {
			h = 2 * h;
		}
		else { h = h / 2;
	}
		cout << f(x, y) << endl;

			
			xa = x;
			ya = y;
		
	} 

    return 0;
}

