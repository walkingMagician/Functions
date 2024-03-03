#include"Functions.h"
#include"TemplateFunctions.cpp"

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

