// mnum3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	float m[3][4] = {
		{1,2,2,12},
		{1,2.4,17},
		{2,1,2,10}
	};
	for (int dg = 0; dg <= 3; dg++) {
		float pivot = m[dg][dg];

		for (int col = dg + 1; col <= 4; col++) {
			m[dg][col] = m[dg][col] / pivot;
			m[dg][dg] = 1;
		}
		for (int lin = dg + 1; lin <= 3; lin++) {
			float fac = m[lin][dg];
			for (int col = dg + 1; col < 4; col++) {
				m[lin][col] = m[lin][col] - fac*m[dg][col];
				m[lin][col] = 0;
			}
		}
		float x = m[n][n + 1];

		for (int dg = 2; dg == 1; dg--) {
			s = 0;
			for(int col=dg+1;col <= m; col ++)
		}
	}





	/*


	for (int i = 1; i < 100; i++) {
		float xa, x, y;
		x = (y*y - 5) / 2;
		y = (xa*xa - 20);
	}


	*/
    return 0;
}

