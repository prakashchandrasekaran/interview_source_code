// SortingExamples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

void print(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insertion_sort(int arr[], int size)
{
	if (arr == nullptr)
	{
		return;
	}

	if (size <= 1)
	{
		return;
	}
	
	int value = -1;
	int j = -1;
	for (int i = 1; i < size; i++)
	{
		j = i - 1;
		value = arr[i];
		while (j >= 0 && arr[j] > value)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = value;
	}
}

int main()
{
	int arr[] = { 1,4,5,3,2,5,8,6,2,7,0,9,3 };
	int size = 13;
	print(arr, size);
	insertion_sort(arr, size);
	print(arr, size);
	getchar();
}