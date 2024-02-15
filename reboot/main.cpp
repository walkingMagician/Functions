#include<iostream>
using namespace std;

void FillRand(int** arr, int n, int x);
void Print(int** arr, int n, int x);
int Sum(int** arr, int n, int x);
double Avg(int** arr, int n, int x);
int minValue(int** arr, int n, int x);


void main()
{
	setlocale(LC_ALL, "");

	// x - вертикаль n - горизонталь
	int n, x;
	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;

	int** arr = new int* [x];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}


	FillRand(arr, n, x);
	Print(arr, n, x);
	cout << endl;
	cout << "Sum = " << Sum(arr, n, x) << endl;
	cout << "Avg = " << Avg(arr, n, x) << endl;
	cout << "minValue = " << minValue(arr, n, x) << endl;


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
			//arr[i][j] = 1;
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

int Sum(int** arr, int n, int x)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int** arr, int n, int x)
{
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			sum += arr[i][j];
		}
	}
	return (double)sum / 2;
}

int minValue(int** arr, int n, int x)
{
	int min = arr[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (arr[i][j] < min)	min = arr[i][j];
		}
	}
	return min;
}
