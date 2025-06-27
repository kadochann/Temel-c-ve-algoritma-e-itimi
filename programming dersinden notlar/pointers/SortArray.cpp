#include <iostream>

using namespace std;

void inputArray(int* arr, int size);
void printArray(int* arr, int size);
int isGreater(int* num1, int* num2);
int isLesser(int* num1, int* num2);
void sort(int* arr, int size, int (*compare)(int*, int*));

//int main()
//{
//	int size;
//
//	cout << "Enter the array size: ";
//	cin >> size;
//
//	int* arr = new int[size];
//
//	cout << "Enter the elements:" << endl;
//	inputArray(arr, size);
//
//	cout << "Array before sorting:" << endl;
//	printArray(arr, size);
//
//	sort(arr, size, isGreater);
//	cout << "Array in ascending order:" << endl;
//	printArray(arr, size);
//
//	sort(arr, size, isLesser);
//	cout << "Array in descending order:" << endl;
//	printArray(arr, size);
//
//	delete[] arr;
//
//	return 0;
//}

void inputArray(int* arr, int size)
{
	int* end = arr + size - 1;

	while (arr <= end)
	{
		cin >> *arr;
		arr++;
	}
}

//void printArray(int* arr, int size)
//{
//	int* end = arr + size - 1;
//
//	while (arr <= end)
//	{
//		cout << *arr << " ";
//		arr++;
//	}
//
//	cout << endl;
//}

int isGreater(int* num1, int* num2)
{
	return (*num1) - (*num2);
}

int isLesser(int* num1, int* num2)
{
	return (*num2) - (*num1);
}

void sort(int* arr, int size, int (*compare)(int*, int*))
{
	int* end = arr + size - 1;
	int* current = arr;
	int* toSort;

	while (current <= end)
	{
		toSort = current;

		while (toSort <= end)
		{
			if (compare(current, toSort) > 0)
			{
				*current ^= *toSort;
				*toSort ^= *current;
				*current ^= *toSort;
			}

			toSort++;
		}

		current++;
	}
}