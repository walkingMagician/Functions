#include<iostream>
using namespace std;

void FillRand(int** arr, int n, int x);
void Print(int** arr, int n, int x);
int Sum(int** arr, int n, int x);
double Avg(int** arr, int n, int x);
int minValue(int** arr, int n, int x);
int maxValue(int** arr, int n, int x);
void Sort(int** arr, int n, int x);


void main()
{
	setlocale(LC_ALL, "");

	// x - горизонталь n - вертикаль
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
	cout << "maxValue = " << maxValue(arr, n, x) << endl;
	cout << "Sort = \n"; Sort(arr, n, x);
	cout << endl;


	int t;
	cout << "t = "; cin >> t;
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}


	//for (int j = 0; j < n - 1; j++)	// дублирует элемент массива по своему ходу для выравнивания всего массива
	//{	// j < n - 1 = чтоб не выходить за границы массива
	//	arr[j] = arr[j + 1];
	//}
	//arr[n - 1] = perviy;	// запись последнего элемента в первый 







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

int maxValue(int** arr, int n, int x)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (arr[i][j] > max)	max = arr[i][j];
		}
	}
	return max;
}

void Sort(int** arr, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			for (int c = 0; c < x - j - 1; c++)
			{
				if (arr[i][c] > arr[i][c + 1])
				{
					// 
					swap(arr[i][c], arr[i][c + 1]);
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
