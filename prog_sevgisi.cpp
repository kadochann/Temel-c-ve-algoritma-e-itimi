#include <iostream>
#include <string>
using namespace std;

int main() {
    string cevap;
    cout << "Programlamayi seviyor musun? (evet/hayir): ";
    cin >> cevap;

    if (cevap == "evet") {
        cout << "Harika! Devam et!" << endl;
    } else {
        cout << "O zaman sevdirecegiz. :)" << endl;
    }

    return 0;
}
