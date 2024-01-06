/*
Leetcode problem 852: Peak index in a Mountain array

Input: nums = [1,2,3,1]
Output: 2

Explanation: 3 is a peak element and your function should return the index number 2.

*/

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 10, 5, 2};

    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end -start) / 2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            // search to the right
            start = mid + 1;
        }
        else{
            // change the ending index
            end = mid;
        }
        mid = start + (end - start)/2;
    }

    cout << end << endl;

    return 0;
}