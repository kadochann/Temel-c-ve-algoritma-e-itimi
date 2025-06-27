#include <iostream>
#define MAX_SIZE 100

using namespace std;

int findFirstChar(const char* str, const char ch);

//int main()
//{
//	char str[MAX_SIZE];
//	char target;
//	int index;
//
//	cout << "Enter a string: ";
//	cin.getline(str, MAX_SIZE);
//
//	cout << "Enter a character: ";
//	cin >> target;
//
//	index = findFirstChar(str, target);
//
//	if (index == -1) cout << "Not found!" << endl;
//	else cout << "Found at index " << index << "." << endl;
//
//	return 0;
//}

int findFirstChar(const char* str, const char ch)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ch)
			return i;
		i++;
	}

	return -1;
}