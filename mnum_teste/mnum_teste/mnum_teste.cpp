// mnum_teste.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double func(double u, double v) {
	return ((u*((u / 2) + 1)*v*v*v) + ((u + (5 / 2))*v*v));
}

int main() {
	double v0 = 0.15;
	double u0 = 1;
	double h = 0.05;
	double d1, d2, d3, d4;
	double v, u;
	for (size_t i = 0; i < 20; i++)
	{
		cout.precision(20);
		cout << "v= " << v0 << endl;
		cout.precision(20);
		cout << "u= " << u0 << endl << endl;
		d1 = h*func(u0, v0);
		d2 = h* func(u0 + (h / 2), v0 + (d1 / 2));
		d3 = h*func(u0 + (h / 2), v0 + (d2 / 2));
		d4 = h*func(u0 + h, v0 + d3);
		v = v0 + (1 / 6)*d1 + (1 / 3)*d2 + (1 / 3)*d3 + (1 / 6)*d4;
		u = u0 + h;
		
		v0 = v;
		u0 = u;
	}


}