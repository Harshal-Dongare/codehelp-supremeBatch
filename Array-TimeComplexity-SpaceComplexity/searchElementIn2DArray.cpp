// Find the element in 2D array.

#include<iostream>
using namespace std;

int findElement(int arr[][3], int rows, int cols, int key){

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // if element founds, return true
            if(key == arr[i][j]) return cols*i+j;
        }
    }
    return -1;
}

int main(){
    int arrEle[3][3] = {{41, 23, 52},{77, 11, 66},{25, 79, 12}};
    int rows = 3, cols = 3, key = 53;

    int ans = findElement(arrEle, rows, cols, key);
    
    if(ans != -1) cout << "element found at index: " << ans;
    else cout << "Element not found";

    return 0;
}
