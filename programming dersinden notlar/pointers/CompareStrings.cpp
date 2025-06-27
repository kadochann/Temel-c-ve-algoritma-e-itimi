#include <iostream>

using namespace std;

int compareStr(char* str1, char* str2);

int main()
{
	int maxSize, result;
	
	cout << "Enter the max. string size: ";
	cin >> maxSize;

	maxSize++;
	char* str1 = new char[maxSize];
	char* str2 = new char[maxSize];

	cout << "Enter the first string:" << endl;
	cin.ignore();
	cin.getline(str1, maxSize);

	cout << "Enter the second string:" << endl;
	cin.getline(str2, maxSize);

	result = compareStr(str1, str2);

	if (result < 0)
		cout << "The 1st string is lexicographically smaller than the 2nd." << endl;
	else if (result > 0)
		cout << "The 1st string is lexicographically greater than the 2nd." << endl;
	else
		cout << "Both strings are lexicographically equal." << endl;

	delete[] str1;
	delete[] str2;

	return 0;
}

int compareStr(char* str1, char* str2)
{
	while ((*str1 && *str2) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}

	return *str1 - *str2;
}