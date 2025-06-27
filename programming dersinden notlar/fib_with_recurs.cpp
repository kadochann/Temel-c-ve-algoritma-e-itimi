#include <iostream>
#include <string>
using namespace std;

//fib with recurs

int fib(int n){
    if (n==0){
       return 0; 
    } 
    else if(n==1){
       return 1; 
    } 
    else if(n>1){
       return fib(n-1)+fib(n-2); 
    } 
    else {
        cout<<"adam gibi sayi ver oc";
        return 0;
}
}

int main(){
    int n, result;
    cout<<"enter a number to see a nth element: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ,";
    }
    return 0;    
}

