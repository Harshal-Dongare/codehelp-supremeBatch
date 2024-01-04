// Find the maximum element in the 2D array

#include<iostream>
#include<limits.h>
using namespace std;

int findMaxElement(int arr[][3], int rows, int cols){
    int maxEle = INT_MIN;
    for(int i =0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            // if current element > maxEle, then update the maxEle with current element
            if(arr[i][j] > maxEle) maxEle = arr[i][j];
        }
    }

    return maxEle;

}

int main(){
    int arrEle[3][3] = {{4, 2, 3},{9, 112, 43},{22, 86, 99}};
    int rows = 3, cols = 3;

    int result = findMaxElement(arrEle, rows, cols);
    cout << "Maximum number: " << result;

    return 0;
}