#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUSSIAN");
	const int SIZE = 5;
	int arr[SIZE] = { 3,5,8 };
	cout << int() << endl;

	cout << "¬ведите элементов массива: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
}