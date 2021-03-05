#include <iostream>
using namespace std;

int* Fib(int size_arr)
{
	int* arr = new int[size_arr];
	arr[0] = arr[1] = 1;
	for (int i = 2; i < size_arr; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	return arr;
}
int main()
{
	int i, size_arr;
	cout << "Enter how many fibonnach numbers you need = ";
	cin >> size_arr;
	cout << "Fibonacci numbers: " << endl;
	for (i = 0; i < size_arr; i++)
	int* fibArr = Fib(size_arr);
	{ 
		cout << fibArr[i] << endl;
		if (INT_MAX - fibArr[i - 1] < fibArr[i])
		{
			cout << "The number is too large"<<endl;
			break;
		}
	}
	cout << "The last fibonacci number: " << i << endl;
	delete[] fibArr;
	return 0;
}
