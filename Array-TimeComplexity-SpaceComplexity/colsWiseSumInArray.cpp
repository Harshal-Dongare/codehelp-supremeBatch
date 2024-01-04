// Find the column wise sum in 2D array.

#include<iostream>
using namespace std;

// always mention columns number inside as parameter while passing 2D-array
void rowWiseSum(int arr[][3], int rows, int cols){

    cout << "Column wise sum: " << endl;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum = sum + arr[j][i];
        }
        cout << sum << endl; 
    }
}


int main(){
    int arrEle[3][3]= { 
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // when we use 2D-array, always pass rows and columns count
    int rowsCount = 3, colsCount = 3;

    rowWiseSum(arrEle, rowsCount, colsCount);    
    return 0;
}