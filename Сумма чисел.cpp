// ����� �����.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int i, j, k;
	int sum = 0;
	cout << "������� ������ ����� ";
	cin >> k;
	cout << "������� ������ ����� ";
	cin >> j;
	i = k;
	if (i > j) cout << "������������ ��������\n";
	else {
		for (i; i <= j; i++)
		{
			sum = sum + i;
		}
		cout << "����� ����� �� " << k << " �� " << j << " = " << sum << endl;
	}
	
	system("pause");
}

