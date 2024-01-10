/*
Leetcode problem no 33 statement: 
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1

*/

#include<iostream>
#include<vector>
using namespace std;

// binary search function to find the element
int binarySearch(vector<int> arr, int target, int start, int end){
    int mid = start + (end - start)/2;

    while(start <= end){
        int element = arr[mid];
        if(target == element) return mid;
        if(target < element) end = mid - 1;
        if(target > element) start = mid + 1;

        mid = start + (end - start)/2;
    }
    return -1;
}

int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size()-1;
    int mid = start + (end - start)/2;

    while(start < end){
        // if mid element is greater than  mid+1 
        if( (mid+1) < arr.size() && arr[mid] > arr[mid+1]) return mid;
        // if mid-1 element is greater than mid
        if( (mid-1) >= 0 && arr[mid - 1] > arr[mid]) return (mid - 1);
        // search pivot element on left side of array
        if(arr[start] > arr[mid]) end = mid - 1;
        // if pivot element is present on right side of an array
        else start = mid;

        mid = start + (end - start)/2;
    }
    // if only one element present in the index return start
    return start;
}    

int main(){
    vector<int> arr = {3, 4, 5, 6, 7, 0, 1, 2};
    // search element
    int target = 7;
    int pivotIndex = findPivot(arr);

    if(target >= arr[0] && target <= arr[pivotIndex]){
        // search left part of an array till pivot index
        int ans = binarySearch(arr, target, 0, pivotIndex);
        cout << ans;
    }
    else if( (pivotIndex+1) < (arr.size()) && target >= arr[pivotIndex+1] && target <= arr[arr.size()-1]){
        // search right part of an array from nect element of pivot index till last index of an array
        int ans = binarySearch(arr, target, pivotIndex+1, arr.size()-1);
        cout << ans;
    }
    else{
        cout << "Element Not found";
    }

    return 0;
}