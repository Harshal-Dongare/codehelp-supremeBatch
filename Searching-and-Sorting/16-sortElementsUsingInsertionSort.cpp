/*
Problem statement: Sort elements using insertion sort

Time complexity: O(n^2)  (worst case)
Space Complexity: O(1)   (best case)
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10, 1, 7, 6, 14, 9};

    int n = arr.size();

    for(int round = 1; round < n; round++){
        // step A: fetch element
        int element = arr[round];

        int j = (round-1);
        for(; j >=0; j--){
            // step B: compare element
            if(element < arr[j]){
                // step C: shift left element to the right index position
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        // step D: copy element to its appropriate position
        arr[j+1] = element;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}