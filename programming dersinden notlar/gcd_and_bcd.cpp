#include <iostream>
using namespace std;
//umay yazdı baya iyi 

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b, a%b);
    }
}

int uslu(int taban, int us){

    if(taban == 0){
        return 0;
    }
    else if(taban == 1){
        return 1;
    }
    else if(us == 0){
        return 1;
    }
    else if(us == 1){
        return taban;
    }
    else{
        return taban * uslu(taban, us-1);

    }

}

int lcm (int n1, int n2){
    return n1*n2 / gcd (n1, n2); //çarpımları bölü ebobları
}
int main(){
    

    
    int a,b;
    cout << "a ve by gir: " << endl;
    cin >> a >> b;

    /*int result = gcd(a,b);

    cout << "sonucubz: " << result;

    

    int taban,us;

    cout << "asd: ";
    cin >> taban >> us;

    int r = uslu(taban, us);

    cout << r;*/
    int result= lcm (a,b);
    cout << "ekok: "<<result;
    return 0;
}

