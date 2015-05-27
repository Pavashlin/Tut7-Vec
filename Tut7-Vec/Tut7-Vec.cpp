// Tut7-Vec.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	vector<int> apples;										//array using stl
	for (int i = 0; i < 20; i++)
	{
		apples.push_back(rand() % 100);						//filling array with random numbers
	}
	for (int i = 0; i < 20; i++)
	{
		cout << apples.at(i) << " ";
	}

	
	return 0;
}

											   
