// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>  
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;

int main()
{
	srand(time(0));
	
	int randNum = rand() % 1000 + 1;

	int x;

	int count = 8;


	for (int i = 0; i < count; i++)
	{
		for (;;) {
			cout << "guess number lol: ";
			if (cin >> x) {
				break;
			}
			else {
				cout << "Please enter a valid integer!!!!!11112!" << endl;
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}

		if (x == randNum) {
			cout << "winner lol xd   ";
			break;
		}
	}

	cout << randNum;

	system("pause");

	return 0;
}

