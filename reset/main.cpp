#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;

	int number_of_shift;
	cout << "На сколько элементов сдвинуть: "; cin >> number_of_shift;
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
		system ("CLS");
		for (int i = 0; i < n; i++)
		{
			cout << arr[0] << "\t";
		}
		cout << endl;
		Sleep(1000);
	}
}