/*
Leetcode problem statement 658: Find K closest elements

Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

Definition for closest element:
    An integer a is closer to x than an integer b if: 
    |a - x| < |b - x|, or
    |a - x| == |b - x| and a < b

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]

Constraints:

1 <= k <= arr.length
1 <= arr.length <= 104
arr is sorted in ascending order.

-----------------------------------------------------------------------------------------------------------------------
*/


#include<iostream>
#include<vector>
using namespace std;

// Approach 1 function
void findClosestElements(vector<int> arr, int k, int x){

    int low = 0, high = arr.size()-1;

    while(high-low >= k){
        // if left side difference is larger than the right side difference
        if(x-arr[low] > arr[high]-x){
            low++;
        }
        else{
            // if right side difference is larger than the left side difference
            high--;
        }        
    }

    // print the closest elements
    for(int i =low; i <= high; i++){
        cout << arr[i] << " ";
    }

    // // other way to store the elements in new array and print them
    // vector<int> ans(arr.begin()+low, arr.begin()+high+1);
    // for(auto i: ans) cout << i << " ";
}


//--------------------------------------------------------------------------------------------------


// Approach 2 function using BS

// lower bound function to calculate the index of closest element
int lowerBound(vector<int>& arr, int x){
    int start = 0;
    int end = arr.size()-1;

    int mid = start + (end -start)/2;

    /* 
    if x is not present in the array and it is greater than all the elements present in array, return end element
    because that is the element which is close to that `x` element rather returning -1
    */
    int ans = end;

    // use lower bound logic to find the closest element
    while(start <= end){

        // use >=, not == because, x will be either present in the array or there will be closest element to `x`
        if(arr[mid] >= x){
            // store the current closest element
            ans = mid;
            end = mid - 1;
        }
        else if(x > arr[mid]) start = mid +1;
        else end = mid -1;
        mid = start + (end -start)/2;
    }

    return ans;
}


void findClosestElementsUsingBS(vector<int>& arr, int k, int x){
    int high = lowerBound(arr, x);
    int low = high -1;

    // run loop for k times
    while(k--){
        // if low is -ve, which means high is pointing to the 0th index of array
        if(low < 0) high++;
        // if high is pointing to the end index of the array
        else if(high >= arr.size()) low--;
        // if left side difference is greater than right side difference
        else if(x-arr[low] > arr[high]-x){
            high++;
        }
        // if right side difference is greater than left side difference
        else{
            low--;
        }
    }

    // Printing the result
    vector<int> ans(arr.begin()+ low + 1, arr.begin()+high);

    for(auto i: ans){
        cout << i << " ";
    }
}

int main(){

    // Approach1 : Two pointers approach
    vector<int> arr = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};

    // k is the total number of closest elements to find
    int k = 4;

    // x is the element to which those k number of elements are closest
    int x = 35;

    // two pointers function to search closest element
    findClosestElements(arr, k, x);


// -----------------------------------------------------------------------------------------------------------------


    // Approach 2: Two pointers approach + BS
    // vector<int> arr2 = {12, 16, 22, 30, 35, 39, 42, 45, 48, 50, 53, 55, 56};     --> test case 1
    vector<int> arr2 = {1, 2, 3, 4 , 5};

    // k is the total number of closest elements to find
    int k = 4;

    // x is the element to which those k number of elements are closest
    int x = -1;

    findClosestElementsUsingBS(arr2, k, x);
    return 0;
}