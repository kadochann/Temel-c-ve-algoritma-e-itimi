a#include <iostream>
#include <time.h>
using namespace std;

int main(){
string x;
cout<<"hello and welcome to the 8-ball!"<<"\n";
cout<< "please write your question:"<<"\n";
cin>> x;
srand(time(0));
int m=rand();
m=m%10;
switch(m){
    case 0:
        cout<<"yessir";
        break;
    case 1:
        cout<<"probably";
        break;
    case 2:
        cout<<"there is a big chance";
        break;
    case 3:
        cout<<"no";
        break;
    case 4:
        cout<<"it is a risk"  ;
        break;
    case 5:
        cout<<"yeah maybe";
        break;
    case 6:
        cout<<"bitch i dont even know";
        break;
    case 7:
        cout<<"probably no";
        break;
    case 8:
        cout<<"are you ok? ofc no!";
        break;
    case 9:
        cout<<"ehehehe";
        break;
}
return 0;
}


