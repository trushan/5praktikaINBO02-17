#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale>

using namespace std;


void sorter(int *arrPtr, int arrSize)
{
	int t;
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			if (arrPtr[j] > arrPtr[j+1])
			{
				t = arrPtr[j];
				arrPtr[j] = arrPtr[j+1];
				arrPtr[j+1] = t;
			}
		}
	}
}

void sorter(double *arrPtr, double arrSize)
{
	int t;
	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			if (arrPtr[j] > arrPtr[j+1])
			{
				t = arrPtr[j];
				arrPtr[j] = arrPtr[j+1];
				arrPtr[j+1] = t;
			}
		}
	}
}


int main()
{
	int size;
	cout << "Enter size array >> ";
	cin >> size;
	cout << endl;
	
	double *array = new double[size];
	
	for (int k = 0; k < size; k++)
	{
		cout << "Enter array[" << k << "] = ";
		cin >> array[k];
		cout << endl;
	}
	
	sorter(array, size);
	
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	
	return 0;
}