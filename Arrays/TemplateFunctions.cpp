#include"Functions.h"

template<typename T>
void ShiftRaight(T arr[], int n, int f)
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