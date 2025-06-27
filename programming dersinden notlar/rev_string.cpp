#include <iostream>
#include <cstring>  // String işlemleri için
using namespace std;

#define SIZE 100

int main() {
    char cumle[SIZE];

    cout << "Write your string to see the reverse version: ";
    cin.getline(cumle, SIZE);  // Tüm cümleyi almak için

    // Kelime sayısını bulma
    int word_count = 1;  // Boşluk varsa en az 1 kelime var demektir
    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == ' ' && cumle[i + 1] != ' ' && cumle[i + 1] != '\0') {
            word_count++;
        }
    }
    cout << "There are " << word_count << " words in this string." << endl;

    // Harfleri ve sayıları ayrı dizilere atama
    char letters[SIZE];
    int numbers[SIZE];  // Sayılar için
    int L = 0, N = 0;

    for (int i = 0; cumle[i] != '\0'; i++) {
        if ((cumle[i] >= 'a' && cumle[i] <= 'z') || (cumle[i] >= 'A' && cumle[i] <= 'Z')) {
            letters[L] = cumle[i];
            L++;
        }
        else if (cumle[i] >= '0' && cumle[i] <= '9') {
            numbers[N] = cumle[i] - '0';  // ASCII farkını kaldır
            N++;
        }
    }

    // Çıktıları göster
    cout << "Here are the letters: ";
    for (int i = 0; i < L; i++) {
        cout << letters[i];
    }
    cout << endl;

    cout << "Here are the numbers: ";
    for (int i = 0; i < N; i++) {
        cout << numbers[i];  // Sayılar integer olarak tutuldu
    }
    cout << endl;

    return 0;
}
