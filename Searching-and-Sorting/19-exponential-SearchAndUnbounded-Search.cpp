/*
Problem statement: Find the element using Exponential search
*/

#include<iostream>
#include<vector>
using namespace std;

// Exponential search function

int binarySearch(vector<int> arr, int start, int end, int searchElement){
    // simple binary search operation
    int mid = start + (end - start)/2;
    
    while(start <= end){
        if(arr[mid] == searchElement) return mid;
        else if(arr[mid] > searchElement) end = mid - 1;
        else start = mid + 1;

        mid = start + (end - start)/2;
    }
    return -1;
}

// function to return the sub-array for binary search
int exponentialSearch(vector<int> arr, int searchElement){
    int n = arr.size()-1;

    // check search element present at 0th index
    if(arr[0] == searchElement) return 0;

    // initialize from 1, if start from 0th index then `i` varaiable inside while() will be zero for every iteration 
    int i = 1;

    // returns the section of the array in which search element is present
    while(i < n && arr[i] <= searchElement){
        i = i*2;
    }

    // find at which index that element is present in the sub-array
    /* min(i, n-1) if end index of the subarray is out of bound, in that case select the (n-1) index which is
    the last index of an array*/
    return binarySearch(arr, i/2, min(i, (n-1)), searchElement);
}


// -----------------------------------------------------------------------------------------------------------



// Bounded search function

int binarySearch2(vector<int> arr, int start, int end, int searchElement2){
    int mid = start +(end -start)/2;

    while(start <= end){
        if(arr[mid] == searchElement2) return mid;
        else if(arr[mid] > searchElement2) end = mid -1;
        else start = mid+1;

        mid = start +(end -start)/2;
    }
    return -1;
}



int main(){

    // Exponential search:
    // Time complexity: O(log(2^logm/2))

    vector<int> arr = {3, 4, 5, 6, 11, 13, 14, 15, 56, 70};
    int searchElement = 4;

    // exponential search to find the sub-array in which the element is present
    int ans = exponentialSearch(arr, searchElement);

    cout << "Index: " << ans ; 


//-------------------------------------------------------------------------------------------------------------



    // Unbounded Search: In this search the array's length is infinite, i.e., n = ∞

    // assume this is infinite array
    vector<int> arr2 = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // take two pointers, first pointer is pointing to 0th index and 2nd pointer is pointing to the 1st index
    int i = 0;
    int j = 1; 

    int searchElement2 = 1;

    // it will update the length of the sub-array
    while(arr2[j] < searchElement2){

        // if jth index element is less than the search element, shift `i` and `j`th index
        i = j;

        // instead 2, we can take any other value to set the size of sub-array,
        j = j*2;
    }

    // here i will be starting index and j will be last index of sub-array
    int ans2 = binarySearch2(arr2, i, j, searchElement2);

    cout << "Index: " << ans2;



    return 0;
}





/* Notes:

-> Application of exponential search:
    1. search in an infinite arrays
    2. better than binary search if search element is near beginning of an array

-> Unbounded search is helpful where the size of the array i.e., last index of an array is unknown or in other words the array size is infinite.

*/