#include <iostream>
#define SIZE 3
using namespace std;

int main(){
    int matris[SIZE][SIZE];
    cout<<"enter the rows and columns "<<endl;
    for(int i=0; i<SIZE; i++) {
        for(int j=0; j<SIZE; j++) {
            cin >> matris[i][j];
        }
    }
    
    cout<<"here is the matrix: "<<endl;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<matris[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"here is the transpose of the matrix: "<<endl;
    int transpose[SIZE][SIZE];
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            transpose[j][i]=matris[i][j];
        }
    }
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}