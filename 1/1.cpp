// 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{
	const int col = 3; // const values 
	const int row = 4; // according to the task

	int zero_counter = 0;

	int matrix[row][col] = {{1, 0, 2}, // manual input
							{3, 0, -2},
							{2, 4, 1},
							{1, 4, 0}};

	cout << "INITIAL RECTANGULAR 4x3 MATRIX\n";
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << matrix[i][j] << "\t";
		}
		cout << "\n";
	}
	
	bool zero_check = true;
	int counter = row;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (matrix[i][j] == 0 && zero_check == true) 
			{
				zero_counter++;
				zero_check = false;	
			}		
		}
		counter -= zero_counter;
		zero_counter = 0;
		zero_check = true;
	}
	cout << "NUMBER OF ROWS WITHOUT ZERO: " << counter << endl;

    return 0;
}

