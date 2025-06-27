#include <iostream>
#include <iomanip>
#define SIZE (4)
using namespace std;

void initializeMatrix(int A[][SIZE], int size);
void printMatrix(int A[][SIZE], int size);
void updateBorders(int A[][SIZE], int size);
void copyMatrix(int A[][SIZE], int B[][SIZE], int size);

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];
    int *p, *q;

    initializeMatrix(A, SIZE);
    cout << "A Matrix" << endl;
    printMatrix(A, SIZE);

    updateBorders(A, SIZE);
    cout << "B Matrix" << endl;
    printMatrix(A, SIZE);

    copyMatrix(A, B, SIZE);
    cout << "A Matrix" << endl;
    printMatrix(B, SIZE);

    return 0;
}

void initializeMatrix(int A[][SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            A[i][j] = 0;
        }
    }
}

void printMatrix(int A[][SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << setw(3) << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void updateBorders(int A[][SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        A[0][i] = 1;
        A[size-1][i] = 1;
        A[i][0] = 1;
        A[i][size-1] = 1;
    }
}

void copyMatrix(int A[][SIZE], int B[][SIZE], int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            B[i][j] = 2 * A[i][j];
        }
    }
}
