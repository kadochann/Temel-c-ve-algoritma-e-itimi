#include <iostream>

using namespace std;

void printArray(int* arr, int size);

//int main()
//{
//	int size;
//
//	cout << "Enter the array size: ";
//	cin >> size;
//
//	int* arr = new int[size];
//	int* left = arr;
//	int* right = &arr[size - 1];
//
//	cout << "Enter the elements:" << endl;
//	while (left <= right)
//	{
//		cin >> *left;
//		left++;
//	}
//
//	cout << "Array before reversing:" << endl;
//	printArray(arr, size);
//
//	left = arr;
//
//	while (left < right)
//	{
//		*left ^= *right;
//		*right ^= *left;
//		*left ^= *right;
//
//		left++;
//		right--;
//	}
//
//	cout << "Array after reversing:" << endl;
//	printArray(arr, size);
//
//	delete[] arr;
//
//	return 0;
//}

void printArray(int* arr, int size)
{
	int* end = arr + size - 1;

	while (arr <= end)
	{
		cout << *arr << " ";
		arr++;
	}

	cout << endl;
}