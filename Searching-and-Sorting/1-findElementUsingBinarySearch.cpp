// Problem statement: Find the element in the array using binary search.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Approach 1: user-defined Binary Search function
int findElementUsingBinarySearch(int arr[], int size, int target){
    int start = 0;
    int end = (size - 1);

    int mid = start + (end - start)/2;

    while(start <= end){
        // assign mid index value to an element
        int element = arr[mid];

        if(element == target) return mid;   // if element founds, return index
        else if(target < element) end = mid - 1;  // if target is less than element, update `end`
        else start = mid + 1;   // if target is greater than element, update `start`

        // update the mid value
        mid = start + (end - start)/2;
    }
    // if no element founds
    return -1;
}

int main(){
    // Note: Run each approach separately and not entire code at a time.

    // Approach 1: User defined Binary Search Function
    int arrEle[] = {2, 4, 7, 10, 13, 19, 23, 24};
    int arrSize = sizeof(arrEle)/sizeof(int);

    // element to search
    int target = 19;

    int foundIndex = findElementUsingBinarySearch(arrEle, arrSize, target);

    if(foundIndex == -1) cout << "Element not found" << endl;
    else cout << "Element found at " << foundIndex << " index" << endl;

//--------------------------------------------------------------------------------------------

    // Approach 2: Pre-defined Binary Search function
    vector<int> arrEle2 = {2, 4, 7, 10, 13, 19, 23, 24};

    if(binary_search(arrEle2.begin(), arrEle2.end(), 159)) cout << "found" << endl; // if present
    else cout << "Not found" << endl; // if element is not present

//---------------------------------------------------------------------------------------------

    // Approach 3: Predefined BST function on array
    int arrEle3[] = {2, 4, 7, 10, 13, 19, 23, 24};

    if(binary_search(begin(arrEle3), end(arrEle3), 19)) cout << "found" << endl; // if present
    else cout << "Not found" << endl; // if element is not present

//----------------------------------------------------------------------------------------------
    return 0;
}


/*
Notes :
    1. To apply binary search method, array should be sorted, either in ascending or descending

    2. Initialize start, end and mid pointers

    3. Calculate the mid using formula [start + (end - start)/2] to avoid integer overflow 

    4. If target element is less than mid pointer, update end pointer

    5. If target element is greater than mid pointer, update start pointer

    6. Time complexity of Binary Search Method: O(logn)

    7. There is a predefined Binary Search function in Standard Template library of <algorithm> header file
        - Syntax for vector: binary_search(arrName.begin(), arrName.end(), target)

        - Syntax for array: binary_search(begin(arrName), end(arrName), target)

        - both syntaxes returns `true` on found or `false` to not found
*/