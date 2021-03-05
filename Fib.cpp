#include <iostream>
using namespace std;

int size_arr = 100; 
int* Fib(void)
{
	int* arr = new int[size_arr];
	arr[0] = arr[1] = 1;
	for (int i = 2; i < size_arr; i++) {
		if (INT_MAX - arr[i - 2] < arr[i - 1])
		{
			size_arr = i;
			break;
		}
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	return arr;
}
int main()
{
	int i;
	int* fibArr = Fib();
	cout << "Fibonacci numbers: " << endl;
	for (i = 0; i < size_arr; i++)
		cout << fibArr[i] << endl;
	if (size_arr < 100)
		cout << "The number is too large" << endl;
	cout << "The last fibonacci number: " << i << endl;
	delete[] fibArr;
	return 0;
}
