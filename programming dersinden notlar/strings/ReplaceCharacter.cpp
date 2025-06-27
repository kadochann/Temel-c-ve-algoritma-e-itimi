#include <iostream>
#include <string>

using namespace std;

void replaceCharacter(string& str, char source, char target);

int main()
{
	string str;
	char source, target;

	cout << "Enter a string: ";
	getline(cin, str);

	cout << "Enter the character to replace: ";
	cin >> target;

	cout << "Enter the new character: ";
	cin >> source;

	cout << "Before replacing: " << endl;
	cout << str << endl;

	replaceCharacter(str, source, target);

	cout << "After replacing: " << endl;
	cout << str << endl;

	return 0;
}

void replaceCharacter(string& str, char source, char target)
{
	for (char& c : str)
	{
		if (c == target)
			c = source;
	}
}