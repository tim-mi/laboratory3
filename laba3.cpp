// laba3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n;
	//��������� �������
	cout << "������� ���������� ��������� �������";
	cin >> n;
	//������� ������������ ������
	int *arr;
	arr = new int[n];
	//��������� ������
	for (int i = 0; i<n; i++)
	{
		cout << "������� [" << i + 1 << "]-� ������� ������� ";
		cin >> arr[i];
	}
	system("cls");
	//������� ��ccbd
	for (int i = 0; i<n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	//������� �����
	int s = 0;
	for (int i = 0; i<n; i++)
		s += arr[i];
	cout << "����� ����� " << s;
	cout << "\n\n";
	delete[]arr;
	system("pause");
	return 0;
}
