#include <iostream>

using namespace std;

int main()
{
	int row, col;

	cout << "Enter the number of rows and columns: ";
	cin >> row >> col;

	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
		arr[i] = new int[col];

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			arr[i][j] = i * j;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			cout << *(*(arr + i) + j) << "\t";
		}

		cout << endl;
	}

	delete[] arr;

	return 0;
}