#include <iostream>
#include <string>

using namespace std;

void trimLeadingSpaces(string& str);

//int main()
//{
//	string str;
//
//	cout << "Enter a string: ";
//	getline(cin, str);
//
//	cout << str.length() << " character(s) before the trim:" << endl;
//	cout << str << endl;
//
//	trimLeadingSpaces(str);
//
//	cout << str.length() << " character(s) after the trim:" << endl;
//	cout << str << endl;
//
//	return 0;
//}

void trimLeadingSpaces(string& str)
{
	int idx = 0;
	int i = 0;
	int length = str.length();

	while (str[idx] == ' ')
		idx++;

	while (idx + i < length)
	{
		str[i] = str[idx + i];
		i++;
	}
	str.resize(i); // Instead of str[i] = '\0' when using the string class;
}