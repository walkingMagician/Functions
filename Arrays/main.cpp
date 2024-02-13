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
	cout << "Введите длину массива: ";	cin >> n;
	int* arr = new int[n];	// обьявдение динамического массива
	

	FillRand(arr, n);
	cout << "Исходный массив: ";	Print(arr, n);
	cout << endl;
	cout << "Сумма всех чисел массива: " << Sum(arr, n, sum) << endl;
	cout << "Среднее-арифметическое суммы чисел массива: " << Avg(arr, n, sum) << endl;	
	cout << "Минимальное элимент массива: " << minValueIn(arr, n) << endl;
	cout << "Максимальный элимент массива " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив по возростанию: "; Sort(arr, n);
	
	cout << endl;
	cout << "\nЦиклический сдвиг отсартированного массива " << endl;
	cout << "Насколько сдвинуть массив: "; cin >> f;
	Print(arr, n);	cout << "Исходный отсартированный массив: ";
	ShiftLeft(arr, n, f);
	cout << "Результаты сдвига массива влево" << endl;
	ShiftRaight(arr, n, f);
	cout << "Результаты сдвига массива вправо";
	cout << endl;
}

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
	for(int f = 0; f < n; f++)	// счётчик, чтоб не выйти за массив
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

void ShiftRaight(int arr[], int n, int f)
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