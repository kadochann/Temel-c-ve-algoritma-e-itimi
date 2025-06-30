#include <iostream>
using namespace std;

int main() {
	int sicaklik;
	cout << "Hava sicakligini giriniz: " << endl;
	cin >> sicaklik;

	if (sicaklik < 18 && sicaklik >=10 ) {
		cout << "Hava serin olacak, uzun kollu giyinmelisin.";
	}
	
	else if (sicaklik >= 18 && sicaklik < 24) {
		cout << "Hava ilik, tisort ile disari cikabilirsin.";
	}
	else if (sicaklik >= 22) {
		cout << "Hava sicak, yanina ceket almana gerek yok :)";

	}
	else {
		cout << " Hava soguk, mont giy!";
	}

	return 0;
}