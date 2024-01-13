/*
Problem statement: Sort all elements in the array using Bubble sort.

Time complexity of Bubble sort: 
    worst case: O(n^2) (if array is in reverse order)
    best case: O(1)    (if array is already sorted)
*/  

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {10, 1, 7, 6, 14, 9};
    int n = arr.size();

    // flag to change swapped operation
    bool swapped = false;

    for(int round = 1; round < n; round++){
        for(int j =0; j < n -round; j++){
            
            // if left element > right element, swap elements with each other
            if(arr[j] > arr[j+1]){
                swapped = true;
                swap(arr[j], arr[j+1]);
            }
        }

        // if there is no swapped operation performed, no need to perform for further rounds
        if(swapped == false) break;
    }

    for(auto i: arr){
        cout << i << " ";
    }
    return 0;
}

/*
why (n-round): for each round, we will sort first largest element and that largest element will be at the right most position of an array.

example:

    rounds              iterations          element sorted             
    round 1:                5                   14              
    round 2:                4                   10
    round 3:                3                   9
    round 4:                2                   7
    round 5:                1                   6

conclusion: 
    for first round, n-1 element is sorted, so for the next round we will traverse upto n-2 index only, for third round we will traverse upto n-3 index and like wise.

    To solve this logic we came with the formula of (n-round)

*/