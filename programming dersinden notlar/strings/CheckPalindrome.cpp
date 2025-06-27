#include <iostream>
#include <string>

using namespace std;

bool checkPalindrome(const string& str);

//int main()
//{
//	string str;
//
//	cout << "Enter a string: ";
//	getline(cin, str);
//
//	cout << (checkPalindrome(str) ? "Palindrome!" : "Not palindrome!") << endl;
//
//	return 0;
//}

bool checkPalindrome(const string& str)
{
	int left = 0;
	int right = str.length() - 1;

	while (left <= right)
	{
		if (str[left] != str[right])
			return false;

		left++;
		right--;
	}

	return true;
}