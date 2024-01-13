/*
Problem statment: Sort elements in ascending order using selection sort

Time complexity of Selection sort: O(n^2)
Space complexity of Selection sort: O(1)
*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {5, 4, 3, 2, 1};
    int n = arr.size();

    // outer loop will run for each element of the array
    // why i<(n-1)? -> doesn't make any sence to run for the last element
    for(int i =0; i < (n-1); i++){

        // initialize the ith index element as minimum element
        int minEleIndex = i;

        // inner loop will run for n time for each ith interation to find minimum
        for(int j = i+1; j < n; j++){

            // if jth index element is less than the minEle index element, then update minEle index
            if(arr[j] < arr[minEleIndex]) minEleIndex = j;
        }

        // swap the minElement with the ith index element
        swap(arr[i], arr[minEleIndex]);
    }

    // Printing sorted
    for(auto i: arr){
        cout << i << " ";
    }
    return 0;
}

