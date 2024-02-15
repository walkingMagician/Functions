#include<iostream>
using namespace std;

void FillRand(int arr[], int n, int x, int minRand = 0, int maxRand = 100);
void Print(int arr[], int n, int x);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 5, x = 5;
	int arr[n][x];
	/*{ 
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11 },
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11 },
	{1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11 }
	};*/	// двумерный массив типа int 

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arr[i][j] = i + j;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j] << "\t";
		}
	}

}

