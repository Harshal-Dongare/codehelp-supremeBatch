// Do union of two vector with no duplicates allowed in the solution vector.
// Remember when we pass vector with function, it creates a copy of an vector and when we pass a static array it passes reference.

#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

vector<int> arrC;

// to mark duplicate entries & pass reference of vector array
void intersectionOperation(vector<int>& arr, vector<int>& arr2){
    for(int index = 0; index < arr.size(); index++){
        int element = arr[index];
        for(int j = 0; j < arr2.size(); j++){
            if(element == arr2[j]){
                // set duplicate entry as INT_MIN
                arr2[j] = INT_MIN;
            } 
        }
    }
}

// Union of two vectors excluding duplicate entries
void unionOperation(vector<int> arr){
    for(int index = 0; index < arr.size(); index++){
        // add only those elements which value != INT_MIN
        if(arr[index] != INT_MIN){
            arrC.push_back(arr[index]);
        }
    }
}

int main(){
    vector<int> arrA{1, 3, 45, 63, 17, 2};
    vector<int> arrB{19, 83, 17, 63, 2, 23};

    // Mark repeated element 
    intersectionOperation(arrA, arrB);   

    // Union of the vectors
    unionOperation(arrA);
    unionOperation(arrB);

    // print vector with unique element
    for(auto element: arrC){
        cout << element << " ";
    }

    return 0;
}