#include <iostream>
#include <string>

using namespace std;

int main() {
	string sifre; //kullaicinin inputu 
	string asil_sifre= "admin123";
	bool basarili = 0; //basarili durumu flagi
	int hak = 3;

	while (hak>0 && basarili==0 ) {
		cout << "sifrenizi giriniz: " << endl;
		getline(cin, sifre);
		if(sifre==asil_sifre){
			cout << "sisteme giris basarili!";
			//break;
			basarili = 1;
		}
		else {
			basarili == 0;
			hak--;
			cout << "basarisiz, yanlis sifre!" << endl;
			cout << "kalan haklar: " << hak << endl;
		}
	}
	
	//haklar bitti, kullanici basarisiz ise!!
	if (!basarili) {
		cout << "haklariniz tukettiniz!";
	}

	return 0;
}