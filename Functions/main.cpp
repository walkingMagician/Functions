#include<iostream>
using namespace std;

int Sum(int a, int b);
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b);
int Power(int n, int x);

//#define FUNCTIONS


void main()
{
	setlocale(LC_ALL, "");
#ifdef FUNCTIONS

	int a, b;
	cout << "введите два числа: "; cin >> a >> b;

	int c = Sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;
#endif


	int n, x;
	cout << "Возведение числа в степень" << endl;
	cout << "Введите число которое надо возвести: "; cin >> n;
	cout << "Степень воводимого числа: "; cin >> x;
	int c = Power(n, x);
	cout << "Результат: " << c;
}


int Power(int n, int x)
{
	int c = 1;

	for (int i = 0; i < x; i++)
	{
		c *= n;
	}
	return c;
}

int Sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Diff(int a, int b)
{
	return a - b;
}
int Prod(int a, int b)
{
	return a * b;
}
double Quot(int a, int b)
{
	return (double)a / b;
}