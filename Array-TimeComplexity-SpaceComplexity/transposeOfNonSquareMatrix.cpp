// Do transpose of non-square matrix.
#include<iostream>
using namespace std;

// print transposed matrix
void printTransposed(int transposedMat[][3]){
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << transposedMat[i][j] << " ";
        }
        cout << endl;
    }
}

// transpose opertation
void transposeOperation(int arr[][4], int rows, int cols, int transposedMat[][3]){
    for(int i = 0; i < rows; i++){
        for(int j =0; j < cols; j++){
            transposedMat[j][i] = arr[i][j];
        }
    }
    printTransposed(transposedMat);
}



int main(){

    int arrEle[3][4] = {
        {1, 2, 3, 11},
        {4, 5, 6, 12},
        {7, 8, 9, 13}};

    int rows = 3, cols = 4;

    // remember to swap rows and columns values while creating empty 2D Array
    int transposedMatrix[4][3];

    transposeOperation(arrEle, rows, cols, transposedMatrix);
    return 0;
}