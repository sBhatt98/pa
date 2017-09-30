#include "stdafx.h"
/*
Assignment PA 2
Description:
Author: 
HSU ID:
*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include "MazeSpace.h"

using namespace std;
int main()
{
	int strt, end;
	char maze_data;
	const int SIZE = 13;
	char maze_storage[SIZE];
	string file_in;
	ifstream file;



	//File Name
	cout << "Enter the maze space file name: " << endl;
	file_in = "";
	getline(cin, file_in);

	//Opens file
	file.open(file_in);

	//Checks if file is open
	if (file.is_open() == true)
	{
		cout << "File is open" << endl;
		while (!file.eof())
		{
			for (int i = 0; i < SIZE; i++)
			{
				file >> maze_storage[i];
			}
		}
	}
	else
	{
		cout << "Unable to open" << endl;
		return 0;
	}
	file.close();

	for (int k:maze_storage)
	{
		//outputs the cardinal directions of the txt file
		if (k> 65)
		{
			cout << (char)k << endl;
		}

		//outputs the numbers of the txt file
		else if (k <= 57 && k > 47)
		{
			cout << (int)k - 48 << endl;
		}
	}

	/*/strting position
	cout << "Enter the strting position" << endl;
	cin >> strt;
	*/
	/*/ending position
	cout << "Enter the ending position" << endl;
	cin >> end;
	return 0;
	*/
}