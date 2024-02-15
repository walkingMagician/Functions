#include<iostream>
using namespace std;

void FillRand(int** arr, int n, int x);
void Print(int** arr, int n, int x);

void main()
{
	setlocale(LC_ALL, "");

	int n, x;
	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;

	int** arr = new int* [n];
	for (int i = 0; i < x; ++i)
	{
		arr[i] = new int[x];
	}


	FillRand(arr, n, x);
	Print(arr, n, x);

}

void FillRand(int** arr, int n, int x)
{
	int minRand = 0;
	int maxRand = 100;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			arr[i][j] = minRand + rand() % (maxRand - minRand);
		}
	}
}

void Print(int** arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}