// loop_pre.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
using namespace std;
int main()
{
	int a;   // without loop

	/*
	cout << "enter id";
	cin >> a;
	cout << "enter id";
	cin >> a;
	cout << "enter id";
	cin >> a;
	*/
	for (int b = 0;b < 4;b++)
	{
		cout << "enter id";
		cin >> a;
		//cout << a << endl;
	}

	system("pause");
    return 0;
}

