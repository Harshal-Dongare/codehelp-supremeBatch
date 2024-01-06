/*
Problem statement: Find the last occurrence of the given element in the array.

input: [1, 3, 5, 7, 9, 9, 9, 12, 15]; target: 9
output: 6th index

*/

#include<iostream>
#include<vector>
#include<algorithm>
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
    // Note: run each approach at a time. Do not run entire program at once

    // Approach 1: user-defined method to find last occurrence of element
    vector<int> arrEle = {1, 3, 5, 7, 9, 9, 9, 12, 15};
    int target = 9;

    int ans = findLastOccurrence(arrEle, target);

    cout << ans << " index" << endl;

//---------------------------------------------------------------------------------------------

    // Approach 2: pre-defined stl method to find last occurrence of element available in <algorithm>
    vector<int> arrEle2 = {1, 3, 5, 7, 9, 9, 9, 12, 15};
    int target = 7;

    auto ans2 = std::upper_bound(arrEle2.begin(), arrEle2.end(), target);
    cout << (ans2 - arrEle2.begin() - 1);
    return 0;
}