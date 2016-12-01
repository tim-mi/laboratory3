// Сумма чисел.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, k;
	int sum = 0;
	cout << "введите первое число ";
	cin >> k;
	cout << "введите второе число ";
	cin >> j;
	i = k;
	if (i > j) cout << "недопустимые знаечния\n";
	else {
		for (i; i <= j; i++)
		{
			sum = sum + i;
		}
		cout << "Сумма чисел от " << k << " до " << j << " = " << sum << endl;
	}
	
	system("pause");
}

