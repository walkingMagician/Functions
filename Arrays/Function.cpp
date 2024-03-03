#include"Functions.h"

void FillRand(int arr[], int n, int minRand, int maxRand)
{
	// ���������� ������� ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = minRand + rand() % (maxRand - minRand);
	}
}

void Print(int arr[], int n)
{
	// ����� ������� �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	//cout << endl;
}

int Sum(int arr[], int n, int sum)
{
	// ������� ����� ���� ����� �������
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
	// ����������� int sum � double sum
	return (double)sum / 2;
}

int minValueIn(int arr[], int n)
{
	int minArr = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] < minArr) minArr = arr[i];
		// ���� ������� ������� ������ min �� min ����� �������� �������� �������	
	}
	return minArr;
}

int maxValueIn(int arr[], int n)
{
	int maxArr = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > maxArr) maxArr = arr[i];
		// ���� ������� ������� ������ max �� max ����� �������� �������� ������� 
	}
	return maxArr;
}

void Sort(int arr[], int n)
{
	for (int f = 0; f < n; f++)	// �������, ���� �� ����� �� ������
	{
		bool swapBool = false;
		for (int i = 0; i < n - 1; i++)	// ����������� �������� i �� 3, ���� �� ����� �� ������
		{								// ���� �������� i ����� ������ 3 �� ������ �� ������� �������
			if (arr[i] > arr[i + 1])	// ������ �������� ������� ������� ���� ��������� ������� ������ 
			{
				swap(arr[i], arr[i + 1]);	// ������ �������� �������
				swapBool = true;
			}
		}
		if (swapBool == false)	break;
	}

	for (int i = 0; i < n; i++)	// ����� ������� �� �����
	{
		cout << arr[i] << "\t";
	}
}

void ShiftLeft(int arr[], int n, int f)
{
	for (int i = 0; i < f; i++)	// ���-�� ������� ����� 
	{
		int perviy = arr[0];

		for (int j = 0; j < n - 1; j++)	// ��������� ������� ������� �� ������ ���� ��� ������������ ����� �������
		{	// j < n - 1 = ���� �� �������� �� ������� �������
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = perviy;	// ������ ���������� �������� � ������ 

		cout << endl;

		for (int i = 0; i < n; i++)	// ����� ������� �� �����
		{
			cout << arr[i] << "\t";
		}
	}
}
