// Leetcode Problem 54: Spiral print a matrix

#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // 2D Matrix
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rowCount = v.size();
    int colCount = v[0].size();
    int totalElements = (rowCount * colCount);

    // store all the elements in ans vector
    vector<int> ans;

    // variable initialization 
    int startingRow = 0;
    int endingCol = (colCount - 1);
    int endingRow = (rowCount - 1);
    int startingCol = 0;

    int elementCount = 0;
    while(elementCount < totalElements){
        // print starting row
        for(int i = startingCol; i <= endingCol && elementCount < totalElements; i++){
            ans.push_back(v[startingRow][i]);
            elementCount++;
        }
        startingRow++;

        // print ending col
        for(int i = startingRow; i <= endingRow && elementCount < totalElements; i++){
            ans.push_back(v[i][endingCol]);
            elementCount++;
        }
        endingCol--; 

        // print ending row
        for(int i = endingCol; i >= startingCol && elementCount < totalElements; i--){
            ans.push_back(v[endingRow][i]);
            elementCount++;
        }
        endingRow--;

        // print starting col
        for(int i = endingRow; i >= startingRow && elementCount < totalElements; i--){
            ans.push_back(v[i][startingCol]);
            elementCount++;
        }
        startingCol++;
    }

    // print ans vector
    for(auto element: ans){
        cout << element << " ";
    }

    return 0;
}
