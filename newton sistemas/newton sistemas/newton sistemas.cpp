// newton sistemas.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;


double f1(double a, double b) {
	double c= a + b - 3;
	return c;
}
double f2(double a, double b) {
	double c= a*a + b*b - 9;
	return c;
}
double df1x(double a, double b) {
	double c= 1;
	return c;
}
double df1y(double a, double b) {
	double c= 1;
	return c;
}
double df2x(double a, double b) {
	double c= 2 * a;
	return c;
}
double df2y(double a, double b) {
	double c = 2 * b;
	return c;
}

int main()
{
	double x0 = 4;
	double y0 = 1;
	double x1, y1;
	do{
		x1 = x0;
		y1 = y0;
		x0 = x0 - (f1(x0, y0)*df2y(x0, y0) - f2(x0, y0)*df1y(x0, y0)) / (df1x(x0, y0)*df2y(x0, y0) - df2x(x0, y0)*df1y(x0, y0));
		y0 = y0 - (f2(x0, y0)*df1x(x0, y0) - f1(x0, y0)*df2x(x0, y0)) / (df1x(x0, y0)*df2y(x0, y0) - df2x(x0, y0)*df1y(x0, y0));
		cout << "x0= " << x0 << endl;
		cout << "y0= " << y0 << endl;
} while ((abs(x1 - x0) / x1 > 0.005) || (abs(x1 - x0) / x0 > 0.005) || (abs(y1 - y0) / y1 > 0.005) || (abs(y1 - y0) / y0 > 0.005));
	
    return 0;
}



int picard_peano(){
	double x0;
	for () {
		x0 = g(x0);



	}



}

