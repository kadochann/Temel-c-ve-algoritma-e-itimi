#include <iostream>
using namespace std;
int main()
{
	int toplam = 0;

	for (int i = 0; i <= 5; i=i+2) {
		toplam += i; //toplam= toplam+i
	}
	cout << toplam;
    return 0;
}

