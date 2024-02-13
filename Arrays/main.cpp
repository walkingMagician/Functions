#include<iostream>
using namespace std; 

void FillRand(int arr[], int n, int minRand = 0, int maxRand = 100);
void Print(int arr[], int n);
int Sum(int arr[], int n, int sum);
double Avg(int arr[], int n, int sum);
int minValueIn(int arr[], int n);
int maxValueIn(int arr[], int n);
void Sort(int arr[], int n);
void ShiftLeft(int arr[], int n, int f);
void ShiftRaight(int arr[], int n, int f);

void main()
{
	setlocale(LC_ALL, "");
	
	/*const int n = 5;
	int arr[5];*/

	int n;
	int sum = 0, f;
	cout << "������� ����� �������: ";	cin >> n;
	int* arr = new int[n];	// ���������� ������������� �������
	

	FillRand(arr, n);
	cout << "�������� ������: ";	Print(arr, n);
	cout << endl;
	cout << "����� ���� ����� �������: " << Sum(arr, n, sum) << endl;
	cout << "�������-�������������� ����� ����� �������: " << Avg(arr, n, sum) << endl;	
	cout << "����������� ������� �������: " << minValueIn(arr, n) << endl;
	cout << "������������ ������� ������� " << maxValueIn(arr, n) << endl;
	cout << "��������������� ������ �� �����������: "; Sort(arr, n);
	
	cout << endl;
	cout << "\n����������� ����� ���������������� ������� " << endl;
	cout << "��������� �������� ������: "; cin >> f;
	Print(arr, n);	cout << "�������� ��������������� ������: ";
	ShiftLeft(arr, n, f);
	cout << "���������� ������ ������� �����" << endl;
	ShiftRaight(arr, n, f);
	cout << "���������� ������ ������� ������";
	cout << endl;
}

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
	for(int f = 0; f < n; f++)	// �������, ���� �� ����� �� ������
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

void ShiftRaight(int arr[], int n, int f)
{
	for (int i = 0; i < f; i++)	// ���-�� ������� ������
	{
		int posledniy = arr[n - 1];
		
		for (int j = n - 2; j >= 0; j--)	// int j = n - 2 = ��� ���� ���� arr[j + 1] �� ������� �� ������� �������
		{
			arr[j + 1] = arr[j];
			
		}
		arr[0] = posledniy;

		cout << endl;

		for (int i = 0; i < n; i++)	// ����� ������� �� �����
		{
			cout << arr[i] << "\t";
		}
	}
}