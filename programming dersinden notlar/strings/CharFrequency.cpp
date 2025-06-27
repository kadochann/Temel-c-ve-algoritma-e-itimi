#include <iostream>
#include <string>

using namespace std;

void charFrequency(const string& str);

int main(){
string str;
cout << "Enter a string: ";
getline(cin, str);
charFrequency(str);
return 0;
}

void charFrequency(const string& str)
{
	const int alphabetLength = 26;
	int freq[alphabetLength] = { 0 };

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			freq[str[i] - 65]++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			freq[str[i] - 97]++;
	}

	for (int i = 0; i < alphabetLength; i++)
	{
		if (freq[i] != 0)
			cout << (char)(i + 65) << ": " << freq[i] << " time(s)" << endl;
	}
}