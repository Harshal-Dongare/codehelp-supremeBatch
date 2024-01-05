// Wave print a matrix

#include<iostream>
#include<vector>
using namespace std;

void wavePrintFunc(vector<vector<int>>arr){
    int rows = arr.size();
    int cols = arr[0].size();

    for(int startCol = 0; startCol < cols; startCol++){

        // if col is even -> go Top to Bottom
        if((startCol & 1) == 0){
            for(int i = 0; i < rows; i++){
                cout << arr[i][startCol] << " ";
            }
        }
        else{
            // if col is oddd -> go Bottom to Top
            for(int i = rows - 1; i >= 0 ; i--){
                cout << arr[i][startCol] << " ";
            } 
        }
    }
}

int main(){
    vector<vector<int>> matrixArr = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    wavePrintFunc(matrixArr);
    return 0;
}