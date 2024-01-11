/*
Problem statement: Find the element index in the nearly sorted array.

Nearly sorted means there are elements in the array which should be at their current `i`th index but instead that will be either at `i-1` index or `i+1` index which means array is almost sorted. There will be some elements which will be at their correct index.

Example: 
input: [10, 3, 40, 20, 50, 80, 70]          target: 40
output: 2

*/

#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end -start)/2;

    while(start <= end){
        // check if element is present at mid, mid+1 or mid-1 element
        if(target == arr[mid]) return mid;
        if(mid-1 >= 0 && target == arr[mid-1]) return mid-1;
        if(mid+1 < arr.size() && target == arr[mid+1]) return mid+1;

        // search left
        if(target < arr[mid]) end = mid -2;
        // search right
        else start = mid + 2;

        mid = start + (end -start)/2;        
    }

    return -1;
}

int main(){
    vector<int> arr = {10, 3, 40, 20, 50, 80, 70};

    int target = 700;

    int ans = binarySearch(arr, target);

    cout << "Index of the element " << target << " is: "<< ans << endl;
    return 0;
}