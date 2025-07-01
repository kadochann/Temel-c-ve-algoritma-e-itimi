//#include <iostream>
//#include <time.h>
//#include <fstream>
//#include <cstdlib> 
//
//#define max (100)
//
//using namespace std;
//struct components {
//    int revealed[max];
//    int arr[max];
//    int points;
//};
//
//void table(const int revealed[], const int arr[], int row, int column);
//void shuffle(int arr[],int revealed[]);
//void playing(int arr[], int revealed[], int& points, int row, int column);
//void check(int revealed[],int& flag,int row, int column);
//bool load(components& data);
//void save(const components& data);
//int row, column;
//
//
//void table(const int revealed[], const int arr[], int row, int column) {
//    for (int i = 0; i < row; i++) {
//        for (int j = 0; j < column; j++) {
//            int index=i*column+j;
//            if(revealed[index]==0){
//                cout << ". ";        
//            }
//            else{
//                cout<<arr[index]<<" ";
//
//            }
//        }
//        cout << endl;
//    }
//}
//
//void shuffle(int arr[], int size) {
//    srand(time(0));
//    for (int i = 0;i<size;i++){
//        arr[i]=rand()%2;
//    }
//}
//void check(int revealed[],int& flag,int row, int column){
//    for (int i=0; i<row*column;i++){
//        if (revealed[i]==0){
//            flag=0;
//        }else{
//            flag=1;
//        }
//    }
//}
//void save(const components& data){
//    ofstream output("save.txt");
//    if (output.is_open()) {
//        output << row << " " << column << endl;
//        for (int i = 0; i < row*column; i++) {
//            output << data.arr[i] << " ";
//        }
//        output << endl;
//        for (int i = 0; i < row*column; i++) {
//            output << data.revealed[i] << " ";
//        }
//        output << endl;
//        output << data.points << endl;
//        output.close();
//        cout << "Game saved successfully." << endl;
//    } else {
//        cout << "Unable to save the game." << endl;
//    }
//}
//bool load(components& data) {
//    ifstream input("save.txt");
//    if (input.is_open()) {
//        input >> row >> column;
//        for (int i = 0; i < row*column; i++) {
//            input >> data.arr[i];
//        }
//        for (int i = 0; i < row*column; i++) {
//            input >> data.revealed[i];
//        }
//        input >> data.points;
//        input.close();
//        cout << "Game loaded successfully." << endl;
//        return true;
//    } else {
//        cout << "No saved game found." << endl;
//        return false;
//    }
//}
//void playing(int arr[], int revealed[], int &points,int row, int column){
//    int flag;
//    while(true){
//        table(revealed,arr,row, column);
//        int index2,r,c;
//        cout<<"enter 00  anytime to quit the game.\n";
//        cout<<"write the row of your shot:\n";
//        cin>>r;
//        if (r == 00 ) {
//            components gamedata;
//            for (int i = 0; i < row*column; i++) {
//                gamedata.arr[i] = arr[i];
//                gamedata.revealed[i] = revealed[i];
//            }
//            gamedata.points = points;
//            save(gamedata);
//            break;
//        }
//        cout<<"write the column of your shot:\n";
//        cin>>c;
//        system("cls");
//        if (c == 00 ) {
//            components gamedata;
//            for (int i = 0; i < row*column; i++) {
//                gamedata.arr[i] = arr[i];
//                gamedata.revealed[i] = revealed[i];
//            }
//            gamedata.points = points;
//            save(gamedata);
//            break;
//        }
//        index2=(r-1)*column+(c-1);
//        if (revealed[index2] == 1) {
//            cout << "this coordinate has already been revealed.\n";
//            continue;
//        }
//        revealed[index2]=1;
//        if (r>row||c>column){
//            cout<<"coordinates cannot be bigger than the table!"<<endl;
//            revealed[index2]=0;
//            continue;
//        }
//        if (r < 1 || r > row|| c < 1 || c > column) {
//            cout << "Invalid row or column value. Please try again." << endl;
//            revealed[index2] = 0;
//            continue;
//        }
//        table(revealed,arr,row, column);
//        if (arr[index2]==1){
//            points+=3;
//            cout<<"It's a shot!"<<endl;
//            } else{
//                points-=1;
//                cout<<"You missed!"<<endl;
//            }
//        cout<<"Points:"<<points<<endl;
//        check(revealed,flag, row, column);
//        if(flag==1){
//            cout<<"Game is over!"<<endl;
//        } 
//    }
//}
//int main() {
//    while(true){
//    cout<<"____WELCOME TO THE ADMIRAL SUNK____\n";
//    cout << " --- MAIN MENU --- \n";
//    cout << "0. New Game\n";
//    cout << "1. Load Game\n";
//    cout << "2. Exit\n";
//    cout << "Please enter your choice: ";
//    int choice;
//    cin>>choice;
//    if(choice==0){
//        cout<<"time to arrange the playing board as you want."<<endl;
//        cout<<"enter the row number:\n";
//        cin>>row;
//        cout<<"enter the column number:\n";
//        cin>>column;  
//        system("cls"); 
//        int arr[max];
//        int revealed[max];
//        for (int i = 0; i < row*column; i++) {
//            arr[i] = i % row*column + 1;
//        }
//        shuffle(arr, row*column);
//        for (int i = 0; i < row*column; i++) {
//            revealed[i] = 0;
//        }
//        int points=0;
//        int size = row* column;
//        shuffle(arr, size);
//        playing(arr,revealed, points, row, column);
//    }
//    if(choice==1){
//        components gamedata;
//        if(load(gamedata)){
//            playing(gamedata.arr, gamedata.revealed, gamedata.points, row, column);
//        }
//    } 
//    else if(choice==2){
//        cout<<"quiting from the game...\n\n";
//        system("cls");
//        break;
//    }
//    else{
//        cout<< "invalid choice. please select from the choices.";
//    }
//}
//}
