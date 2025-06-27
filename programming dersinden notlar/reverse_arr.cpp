#include <iostream>
#define SIZE 5

using namespace std;
//array tersine çevirme

int main(){

    
    int arr[SIZE];
    int temp[SIZE];
    cout<<"enter 5 numbers: ";
    for(int i=0;i<SIZE;i++){
        cin>>arr[i];
    }
    for(int i=SIZE-1;i>=0;i--){
        cout<<arr[i]<< " ";
    }
    
    return 0;
}