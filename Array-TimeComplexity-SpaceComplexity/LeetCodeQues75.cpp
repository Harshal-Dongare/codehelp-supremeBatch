/* 
Leetcode Problem 75: Sort Colors
Given an array `nums` with `n` objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers `0`, `1`, and `2` to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // Note: Don't run all three approaches at a time. Take one approach and try to run it.
    
    // Approach 1: Using library sort() function(Not to be used : clearly mentioned in the problem)
    // Time Complex: O(nlogn) and Space Complex: O(n)

    vector<int> nums = {2, 2, 0, 1, 0, 1, 2, 0};

    // sorting the array using sort function and it requires <algorithm> header file
    sort(nums.begin(), nums.end());

    // printing sorted array
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    

//---------------------------------------------------------------------------------------------------

    
    // Approach 2: Counting first, Spread later method(Not applicable: in-place sort(shuffling) required)
    // Time Complex: O(n) and Space Complex: O(1)

    vector<int> nums = {2, 2, 0, 1, 0, 1, 2, 0};

    int zeros = 0, ones = 0, twos= 0;

    // counting of 0's, 1's and 2's
    for(int i =0; i < nums.size(); i++){
        if(nums[i] == 0) zeros++;
        else if(nums[i] == 1) ones++;
        else twos++;
    }

    // Overwrite the values in a vector according to the counts of 0's, 1's and 2's
    int i = 0;
    while(zeros--){
        nums[i] = 0;
        i++;
    }
    while(ones--){
        nums[i] = 1;
        i++;
    }
    while(twos--){
        nums[i] = 2;
        i++;
    }

    // printing the vector
    for(auto element: nums){
        cout << element << " ";
    }
    

//---------------------------------------------------------------------------------------------------

    
    // Approach 3: In-place method or 3-pointers approach
    // Time Complex: O(n) and Space Complex: O(1)

    vector<int> nums = {2, 2, 0, 1, 0, 1, 2, 0};

    // to keep the start values to 0's
    int start = 0;
    // to keep the medium values to 1's
    int medium = 0;
    // to keep end values to 2's
    int end = nums.size() - 1;

    while(medium <= end){
        // if medium founds 0, then swap with nums[start]
        if(nums[medium] == 0){
            swap(nums[medium], nums[start]);
            start++;
            medium++;
        }
        // if medium founds 1, then do nothing because we want middle part set to value 1
        else if(nums[medium] == 1){
            medium++;
        }
        // if medium founds 2, then swap with nums[end]
        else{
            swap(nums[medium], nums[end]);
            end--;
        }
    }

    // printing the vector
    for(auto element: nums){
        cout << element << " ";
    }
    

    return 0;
}