/*
Leetcode Problem statement 532:
Given an array of integers nums and an integer k, return the number of unique k-diff pairs in the array.

A k-diff pair is an integer pair (nums[i], nums[j]), where the following are true:

    -> 0 <= i, j < nums.length
    -> i != j
    -> |nums[i] - nums[j]| == k
Notice that |val| denotes the absolute value of val.

Example :

Input: nums = [3,1,4,1,5], k = 2
Output: 2
Explanation: There are two 2-diff pairs in the array, (1, 3) and (3, 5).
Although we have two 1s in the input, we should only return the number of unique pairs.

------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

// Approach 3 function for binary search operation
int binarySrch(vector<int> arr, int start, int x){
    int end = arr.size()-1;
    int mid = start + (end -start)/2;
    while(start <= end){
        if(arr[mid] == x) return mid;
        else if (arr[mid] > x) end = mid -1;
        else if(arr[mid] < x) start = mid + 1;

        mid = start + (end -start)/2;

    }
    return -1;
}

int main(){
    // Run one approach at a time

    // approach 1: Linear search 
    // Time complexity : O(n^2)
    int arr[] = {3,1,4,1,5};
    int size = 5;
    int k = 2;
    int count = 0;
    
    // subtract current `i` element from the other elements of an array
    for(int i =0; i < size; i++){
        // start from the next element of `i` which is `i+1`
        for(int j = i+1; j < size; j++){
            // store the difference  and take the absolute value
            int diff = abs(arr[i] - arr[j]);

            // if difference is equal to the `K` then count that pair
            if(diff == k) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                count++;
            }
        }
    }

    cout << "Total number of pairs are: " << count << endl;

// --------------------------------------------------------------------------------------------------

    // Approach 2: Two pointers approach
    // Time Complexity: O(n)

    vector<int> arr= {3,1,4,1,5};
    int k = 2;

    // sort the array
    sort(arr.begin(), arr.end());

    // use set STL to store unique pairs as per the condition
    set<pair<int, int>> ans;

    int i = 0, j = 1;
    while(j <= arr.size()){
        int diff = arr[j] - arr[i];

        if(diff == k) {
            ans.insert({arr[i], arr[j]});
            i++, j++;
        }
        else if(diff > k) i++;
        else j++;

        // if index are pointing to the same element, eg: 5 - 5 = 0 not allowed for k = 0 as per the condition
        if(i == j) j++;
    }

    // to print pairs of set
    for(auto const& pairs: ans){
        cout << pairs.first << " " << pairs.second << endl;
    }

    cout << "Total number of pairs " << ans.size() << endl;

// --------------------------------------------------------------------------------------------------

    // approach 3: Binary Search
    // Time complexity: O(nlogn)

    vector<int> arr3 = {3,1,4,1,5};
    int k = 2;

    // sort the array
    sort(arr3.begin(),arr3.end());

    // to store unique pairs
    set<pair<int, int>> ans;

    // selection each `i` element and using binary search find the appropriate element 
    for(int i =0; i < arr3.size(); i++){
        //  `i+1`: the starting index for Binary search operation
        //  `arr3[i]+k` : search element which is a[j]
        // formula: a[j] - a[i] = k; a[j] = a[i] + k
        // a[j] is nothing but any element on the right side array except the current element `i`
        if(binarySrch(arr3, i+1, arr3[i]+k) != -1){
            // cout << "(" << arr3[i] << "," << arr3[i]+k << ")" << endl;
            ans.insert({arr3[i], arr3[i]+k});
        }
    }

    for(auto const& i : ans){
        cout << i.first << "," << i.second << endl;
    }

    cout << "Total number of pairs" << ans.size();


    return 0;
}
