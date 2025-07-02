#include <iostream>
using namespace std;
int main()
{
    //string yıldız= "*";
    for(int i=1;i<=5;i++){ //hangi satır?
        for(int j=1; j<=i; j++){ //kaç yıldız 
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}

