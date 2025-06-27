#include <iostream>
#define SIZE 6
using namespace std;

int great(int arr[SIZE]){
    int temp;
    for(int j=0;j<SIZE-1;j++){ //buble sort için bu ikinci loop lazım!!!
       for(int i=0;i<SIZE-1;i++){
            if(arr[i]<arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        } 
    }
    
    return arr[0] ;
}

int main(){
    int arr [SIZE];
    for(int i=0;i<SIZE;i++){
        cin>>arr[i];
    }
    int greatest=great(arr);
    cout<<"greatest of the array is: "<< greatest;
    return 0;
}