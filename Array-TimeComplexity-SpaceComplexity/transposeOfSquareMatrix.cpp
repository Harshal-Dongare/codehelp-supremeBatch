// Do tranpose of a square matrix using 2D array

#include<iostream>
using namespace std;

void transposeOperation(int arr[][3], int rows, int cols, int transposedMat[][3]){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // Add elements to the new 2D array at opposite locations
            transposedMat[j][i] = arr[i][j];
        }
    }
}

// to print the 2D - array
void printTranspose(int arr[][3], int rows, int cols){
    for(int i = 0; i < rows; i++){
        for(int j =0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int arrEle[3][3] = {
        {1, 5, 7},
        {42, 22, 3},
        {2, 4, 6}};

    int transposedMatrix[3][3];
    int rows = 3, cols = 3;

    transposeOperation(arrEle, rows, cols, transposedMatrix);
    printTranspose(transposedMatrix, rows, cols);
    return 0;
}