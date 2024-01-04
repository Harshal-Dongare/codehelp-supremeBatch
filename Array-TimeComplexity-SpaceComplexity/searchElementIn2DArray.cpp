// Find the element in 2D array.

#include<iostream>
using namespace std;

bool findElement(int arr[][3], int rows, int cols, int key){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // if element founds, return true
            if(key == arr[i][j]) return true;
        }
    }
    return false;
}

int main(){
    int arrEle[3][3] = {{41, 23, 52},{77, 11, 66},{25, 79, 12}};
    int rows = 3, cols = 3, key = 53;

    if(findElement(arrEle, rows, cols, key)) cout << "element found";
    else cout << "Element not found";

    return 0;
}