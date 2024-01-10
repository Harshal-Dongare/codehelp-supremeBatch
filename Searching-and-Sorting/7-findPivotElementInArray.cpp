/*
Problem statement: Find the pivot element in the array
*/

#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/ 2;

    while(start < end){

        if(mid+1 < arr.size() && arr[mid] > arr[mid+1]) return mid;
        if(mid-1 >= 0 && arr[mid-1] > arr[mid]) return mid-1;

        // if start element is greater than mid element
        if(arr[start] >= arr[mid]) end = mid - 1; 
        // if end element is greater than mid element
        else start = mid;

        mid = start + (end - start)/ 2;
    }
    // if only one element present inside the array
    return start;
}

int main(){
    vector<int> arrEle = {3, 4, 5, 6, 7, 1, 2};

    int ans = findPivot(arrEle);
    cout << "The pivot element: " << arrEle[ans];
    return 0;
}
