#include <iostream>


using namespace std;

int main() {
    int satır=0;
  
    cout << "yukseklik giriniz: ";
    cin >> satır;
    
    for (int i = 1; i <= satır; i++)
    {
        cout << endl;
        
        for (int v = 0; v <= satır -i; v++)
        {
            cout << " ";


        }
       
        for (int x = 1; x <= 2* i-1; x++)
        { 


            cout << "*";
        }
      

    }
    for (int i2 = satır-1; i2 >= 0; i2--)
    {
        cout << endl;

        for (int v = 0; v <= satır - i2; v++)
        {
            cout << " ";


        }

        for (int x = 1; x <= 2 * i2 - 1; x++)
        {


            cout << "*";
        }


    }

    
    return 0;
}