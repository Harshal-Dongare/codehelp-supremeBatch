/* Problem statement: Find the first occurrence of an given element in an array.

input: [1, 2, 2, 3, 4, 5, 6]; target: 2
output: 1st index
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1 function
int firstOccurrence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){
        // if arr[mid] == target 
        if(arr[mid] == target){
            // store the current occurrence 
            ans = mid;
            // search on left side
            end = mid - 1;
        }
        else if(target < arr[mid]) end = mid - 1;
        else if(target > arr[mid]) start = mid + 1;

        mid = start + (end - start)/2;
    }
    return ans;
}

int main(){
    // Note: Run one approach at a time instead of running entire program at once

    // // Approach 1: user-defined find first occurence method
    // vector<int> arrEle= {1, 2, 3, 8, 8, 9, 12, 15};
    // int target = 8;

    // int ans = firstOccurrence(arrEle, target);
    // cout << ans << " index" << endl;

//-------------------------------------------------------------------------------------

    // Approach 2: We have predefined STL method available to find first occurrence of the element in <>
    vector<int> arrEle2= {1, 2, 3, 8, 8, 9, 12, 15};
    int target = 8;

    // lower_bound stl
    auto ans2 = lower_bound(arrEle2.begin(), arrEle2.end(), target);

    cout << ( ans2 - arrEle2.begin() ) << endl;

    return 0;
}
