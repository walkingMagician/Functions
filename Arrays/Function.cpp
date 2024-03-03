#include"Functions.h"

void FillRand(int arr[], int n, int minRand, int maxRand)
{
	// заполнение массива случайноми числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}

void Print(int arr[], int n)
{
	// вывод массива на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	//cout << endl;
}

int Sum(int arr[], int n, int sum)
{
	// Считает сумму всех чисел массива
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

double Avg(int arr[], int n, int sum)
{
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	// преобразует int sum к double sum
	return (double)sum / 2;
}

int minValueIn(int arr[], int n)
{
	int minArr = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < minArr) minArr = arr[i];
		// если элемент массива меньше min то min равен текущиму элименту массива	
	}
	return minArr;
}

int maxValueIn(int arr[], int n)
{
	int maxArr = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > maxArr) maxArr = arr[i];
		// если элемент массива больше max то max равен текущиму элименту массива 
	}
	return maxArr;
}

void Sort(int arr[], int n)
{
	for (int f = 0; f < n; f++)	// счётчик, чтоб не выйти за массив
	{
		bool swapBool = false;
		for (int i = 0; i < n - 1; i++)	// ограничение итерации i до 3, чтоб не выйти за массив
		{								// если итарация i будет больше 3 он выйдет за границы массива
			if (arr[i] > arr[i + 1])	// меняет элименты массива местами если следующий элимент больше 
			{
				swap(arr[i], arr[i + 1]);	// меняет элименты местами
				swapBool = true;
			}
		}
		if (swapBool == false)	break;
	}

	for (int i = 0; i < n; i++)	// вывод массива на экран
	{
		cout << arr[i] << "\t";
	}
}

void ShiftLeft(int arr[], int n, int f)
{
	for (int i = 0; i < f; i++)	// кол-во сдвигов влево 
	{
		int perviy = arr[0];

		for (int j = 0; j < n - 1; j++)	// дублирует элемент массива по своему ходу для выравнивания всего массива
		{	// j < n - 1 = чтоб не выходить за границы массива
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = perviy;	// запись последнего элемента в первый 

		cout << endl;

		for (int i = 0; i < n; i++)	// вывод массива на экран
		{
			cout << arr[i] << "\t";
		}
	}
}
