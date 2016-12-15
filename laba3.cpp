#include<iostream>
using namespace std;
int main()
{
	int n, i, s = 0;
	cout << "Enter the number of array elements";
	cin >> n;
	
	int *array;
	array = new int[n];
	
	for (i = 0; i<n; i++)
	{
		cout << "Enter [ "<< i + 1 <<"] th element of the array";
		cin >> array[i];
	}

	for (i = 0; i<n; i++)
		s += array[i];
	cout << "The sum of elements is equal to" << s;
	cout << "\n\n";
	delete[]array;
	system("pause");
	return 0;
}
