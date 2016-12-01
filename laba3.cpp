// laba3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	//Заполняем матрицу
	cout << "Введите количество элементов массива";
	cin >> n;
	//Создаем динамический массив
	int *arr;
	arr = new int[n];
	//Заполняем массив
	for (int i = 0; i<n; i++)
	{
		cout << "Введите [" << i + 1 << "]-й элемент массива ";
		cin >> arr[i];
	}
	system("cls");
	//Выводим маccbd
	for (int i = 0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//Считаем сумму
	int s = 0;
	for (int i = 0; i<n; i++)
		s += arr[i];
	cout << "Сумма равна " << s;
	cout << "\n\n";
	delete[]arr;
	system("pause");
	return 0;
}
