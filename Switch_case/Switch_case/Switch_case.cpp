// Switch_case.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int a;
	cout << "enter any number";
	cin >> a;
	switch (a)    
	{
	case 1: { // if (a==1) a> , == 
		cout << "your number is 1";
		break;
	}
	default: { //else 
		cout << "your number is not 1";
		break;
	}
		
	}
	int b = 32;
	system("pause");
    return 0;
}

