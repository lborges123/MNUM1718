// MNUM2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float dp;
	double x1, x2, xn, guess;
	cout << "guess? ";
	cin >> guess;
	x1 = x2 = xn = guess;

	for (int i = 0; i < 50; i++) {
		x1 = 4 / x1;
		x2 = x2 - x2*x2 + 4;
		xn = (xn*xn + 4) / (2 * xn);
		cout << i << "\t" << x1 << "\t" << x2 << "\t" << xn << endl;



	}


    return 0;
}

