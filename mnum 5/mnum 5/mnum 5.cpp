// mnum 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <list>
#include <vector>


using namespace std;

void trapezios() {   /* usando listas */

list<float> valor_y({ 0, 0.25, 0.5, 0.75, 1 });
	float h = 0.25;
	float total = 0;
	total += valor_y.front();
	valor_y.pop_front();
	total += valor_y.back();
	valor_y.pop_back();
	while (!(valor_y.empty())) {
		total += (valor_y.front() * 2);
		valor_y.pop_front();
	}
	total = total*(h / 2);


	cout << total << endl;
	return;
}

void simpson() { /* usando vectores */
	vector<float> listay{ 0, 0.25, 0.5, 0.75, 1 };
	float total = 0;
	float h = 0.25;
	bool par = false;
	total += listay.at(0) + listay.back();
	
	for (int i = 1; i < listay.size() - 1; i++) {
		if (par == true) {
			total += (2 * listay.at(i));
			par = false;
		}
		else {
			total += (4 * listay.at(i));
			par = true;
		}
	}
	total = total * (h / 3);
	cout << total << endl;
	
	return;
	
}







int main()
{
	int a;
	cout << "[1] Trapezios \n[2] Simpson \n";
	cin >> a;
	switch (a) {
	case 1: trapezios();
	case 2: simpson();
	default: main();
	}


	

    return 0;
}

