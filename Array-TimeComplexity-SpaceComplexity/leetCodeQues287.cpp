/*
Leetcode problem 287: Find the duplicate number
Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in `nums`, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

Example 1:
Input: nums = [1,3,4,2,2]
Output: 2

Example 2:
Input: nums = [3,1,3,4,2]
Output: 3
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    // note: Don't run the entire program at a time, take each approach separately and run it.


    // Approach 1: sort() method [but this method modifies the array so can't use]
    vector<int> nums = {1, 3, 4, 2, 2};

    // sort() function to put all duplicated next to each other
    sort(nums.begin(), nums.end());

    for(int index= 0; index < nums.size()-1; index++){
        if(nums[index] == nums[index+1]){ 
            cout << "Repeated element: " << nums[index];
            break;
        }
    }
    

//-------------------------------------------------------------------------------------------------

    
    // Approach 2: Negative Marking method [but this method modifies the array so can't use]
    vector<int> nums = {1, 3, 4, 2, 2};

    // initialized ans if no duplicate entries found it will return -1
    int ans = -1; 
    
    for(int i = 0; i < nums.size(); i++){
        int index = abs(nums[i]);

        // if already visited
        if(nums[index] < 0){
            ans = index;
            break;
        }

        // mark visited
        nums[index] *= -1;
    }
    cout << "Repeated element: " << ans;
    

//-------------------------------------------------------------------------------------------------

    // Approach 3: Positioning element method
    vector<int> nums = {1, 3, 4, 2, 2};

    while(nums[0] != nums[nums[0]]){
        swap(nums[0], nums[nums[0]]);
    }

    cout << "Repeated number: " << nums[0];

    return 0;
}