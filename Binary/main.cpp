#include <iostream>

using namespace std;
#define VAR_1
void main()
{
	setlocale(LC_ALL, "Russian");
	int decimal;
	cout << "Введите десятичное число: "; cin >> decimal;
	const int n= 32;
	bool bin[n] = {};
	int i = 0;
#ifdef VAR_1

	while (decimal > 0)
	{
		bin[i] = decimal % 2;
		i++;
		decimal /= 2;
	}
#endif VAR_1
	int i = 0;
	
	for (--i; i>=0; i--)
	{
		cout << bin[i];
	}
	cout << endl;

}