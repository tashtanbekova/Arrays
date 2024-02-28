#include <iostream>
using namespace std;

void main()
{
	for (int i = 0; i < 256; i++) cout << i << "\t" << (char)i << endl;
	setlocale(LC_ALL, "Russian");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n = 8;
	char hex[n] = {};
	int i = 0;
	for (; decimal; hex[i++] = decimal % 16, decimal >> = 4);
	for (; i >= 0; i--)
	{
		cout << char(hex[i] < 10 ? hex[i] + 48 : hex[i] + 'A' - 10);
	}
	cout << endl;
}