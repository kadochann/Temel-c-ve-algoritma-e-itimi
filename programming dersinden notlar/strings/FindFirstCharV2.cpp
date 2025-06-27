#include <iostream>
#include <string>

using namespace std;

int findFirstChar(const string& str, const char ch);

int main(){
	string str;
	char target;
	int index;

	cout << "Enter a string: ";
	getline(cin, str);

	cout << "Enter a character: ";
	cin >> target;

	index = findFirstChar(str, target);

	if (index == -1) cout << "Not found!" << endl;
	else cout << "Found at index " << index << "." << endl;

	return 0;
}

int findFirstChar(const string& str, const char ch)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ch)
			return i;
	}

	return -1;
}