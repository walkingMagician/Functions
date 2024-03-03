#include"Functions.h"

template<typename T>
void ShiftRaight(T arr[], int n, int f)
{
	for (int i = 0; i < f; i++)	// кол-во сдвигов вправо
	{
		int posledniy = arr[n - 1];

		for (int j = n - 2; j >= 0; j--)	// int j = n - 2 = для того чтоб arr[j + 1] не выходил за границы массива
		{
			arr[j + 1] = arr[j];

		}
		arr[0] = posledniy;

		cout << endl;

		for (int i = 0; i < n; i++)	// вывод массива на экран
		{
			cout << arr[i] << "\t";
		}
	}
}