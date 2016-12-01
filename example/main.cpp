#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "Введите количество элементов массива";
	cin >> n;
	
	int *arr;
	arr = new int[n];
	
	for (int i = 0; i<n; i++)
	{
		cout << "Введите [" << i + 1 << "]-й элемент массива ";
		cin >> arr[i];
	}
	system("cls");
	
	for (int i = 0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int s = 0;
	for (int i = 0; i<n; i++)
		s += arr[i];
	cout << "Сумма равна " << s;
	cout << "\n\n";
	delete[]arr;
	system("pause");
	return 0;
}
