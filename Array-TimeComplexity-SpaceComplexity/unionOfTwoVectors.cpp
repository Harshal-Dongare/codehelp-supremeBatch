// Union of two vectors. Assume that given two vectors has no duplicate elements present.

#include<iostream>
#include<vector>
using namespace std;

// Declaration of Global vector to store all the elements from both vector
vector<int> arrC;

// Push all elements to vector arrC
void unionOperation(vector<int> arr){
    for(int index = 0; index < arr.size(); index++){
        arrC.push_back(arr[index]);
    }
}

int main(){
    vector<int> arrA{1, 3, 5, 7, 9};
    vector<int> arrB{2, 4, 6, 8};
    
    unionOperation(arrA);
    unionOperation(arrB);

    // print all elements in vector arrC
    for(auto element: arrC){
        cout << element << " "; 
    }

    return 0;
}