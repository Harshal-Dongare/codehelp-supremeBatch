// Find missing elements from an array with duplicates.

#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Note: Do not run the entire program at a time. copy each approach and then run it.

    // Approach 1 : Visiting method 
    vector<int> nums = {1, 4, 3, 5, 3};

    for(int i = 0; i < nums.size(); i++){
        // to take the positive value of element to use it as an index for traversing
        int index = abs(nums[i]);
        
        // why (index - 1)?: it will start from 0th index because we are using array's element as an index but array doesn't have `0` value so it won't traverse 0th and it will stay unvisited. Hence doing (index - 1) make sure that it will visite 0th index too.
        if(nums[index - 1] > 0){
            nums[index - 1] *= -1;
        }
    }

    // print missing elements
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > 0){
            cout << i + 1 << " ";
        }
    }

//--------------------------------------------------------------------------------------------

    // Approach 2: sorting + swapping method

    vector<int> nums = {1, 3, 3, 3, 4};

    int i = 0;
    while(i < nums.size()){
        int index = nums[i] - 1;

        // if current value is not present at its index, then swap that current value to that index 
        if(nums[i] != nums[index] ){
            swap(nums[i], nums[index]);
        }
        // if the current value is present at its index, then move to next value
        else i++;
    }

    for(int i =0; i < nums.size(); i++){
        // to check the element is present at its index. if not print the value
        if(nums[i] != (i + 1)){
            cout << i + 1 << " ";
        }
    }
    
    return 0;
}