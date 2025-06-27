#include <iostream>
using namespace std;

int fib(int);

int main(){
    cout<<"enter a non-negative number n to calculate the nth element in fibonacci sequence:";
    int n, result;
    cin>>n;
    result= fib(n);
    cout<<result;
    return 0;
}

int fib (int n){
    if(n=0) return 0;
    else if(n=1) return 1;
    else
        {
            return fib(n-1)+fib(n-2);
    }
}