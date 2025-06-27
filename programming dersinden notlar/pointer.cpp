#include <iostream>
#include <string>
using namespace std;

int main(){
    string kelime= "lol";
    string* ptr = &kelime;
    cout<<"hello and here is your word "<< *ptr<<endl;
    cout<<"if you wanna change the word type here: ";
    cin>>*ptr;
    cout<<"your new word: "<< kelime;
    return 0;
}