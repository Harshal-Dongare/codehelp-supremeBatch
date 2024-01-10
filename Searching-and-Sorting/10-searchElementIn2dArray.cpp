/*
Problem statement: search element in the 2d array using binary search
*/

#include<iostream>
using namespace std;

bool findElementIn2dArray(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int end = (rows*cols) -1 ;
    int mid = start + (end -start)/2;

    while(start <= end){
        int rowIndex = mid / cols; // to find the row index
        int colIndex = mid % cols; // to find the column index

        // mid element 
        // mid element should converted into row index and col index 
        int element = arr[rowIndex][colIndex];

        if(target == element){
            cout << "index " << rowIndex << " " << colIndex << endl;
            return true;
        } 

        if(target > element) start = mid + 1;
        else end = mid - 1;

        mid = start + (end -start)/2;
    }

    return false;
}

int main(){
    int arr[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}};

    int rows = 4;
    int cols = 4;
    int target = 12;

    bool ans = findElementIn2dArray(arr, rows, cols, target);

    if(ans) cout << "Element found";
    else cout << "Element not found";

    return 0;
}