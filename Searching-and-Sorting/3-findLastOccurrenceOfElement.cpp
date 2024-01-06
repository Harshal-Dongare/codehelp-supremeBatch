/*
Problem statement: Find the last occurrence of the given element in the array.

input: [1, 3, 5, 7, 9, 9, 9, 12, 15]; target: 9
output: 6th index

*/

#include<iostream>
#include<vector>
using namespace std;

int findLastOccurrence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){
        // if target is equal then traverse to the right
        if(arr[mid] == target){
            // stores the current ocurrence
            ans = mid;
            start = mid + 1;
        }
        else if(target < arr[mid]) end = mid - 1;
        else if(target > arr[mid]) start = mid + 1;

        // update the mid
        mid = start + (end - start)/2;
    }
    // returns the index
    return ans;
}

int main(){
    vector<int> arrEle = {1, 3, 5, 7, 9, 9, 9, 12, 15};
    int target = 9;

    int ans = findLastOccurrence(arrEle, target);

    cout << ans << " index" << endl;

    return 0;
}