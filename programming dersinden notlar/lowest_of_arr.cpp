#include <iostream>
#define SIZE 5
using namespace std;

int lowest(int arr[]){
    int temp;
    for(int j=0;j<SIZE-1;j++){
        for(int i=0;i<SIZE-1;i++){
            if(arr[i]>arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
    return arr[0];
}

int main(){
    int arr[SIZE];
    cout<<"enter 5 numbers for the array: ";
    for(int i=0;i<SIZE;i++){
        cin>>arr[i];
    }
    int result= lowest(arr);
    cout<<"here is the lowest element of the array: "<<result;
    return 0;
}