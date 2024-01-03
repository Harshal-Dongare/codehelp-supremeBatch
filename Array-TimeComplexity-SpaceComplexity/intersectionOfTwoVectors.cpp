// Intersection of two vectors. Returns common elements only present in both vectors.

#include<iostream>
#include<vector>
using namespace std;

void intersectionOperation(vector<int> arr, vector<int> arr2){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j< arr2.size(); j++){
            // if element present in both vectors, print it
            if(arr[i] == arr2[j]){
                cout << arr[i] << " ";
                break;
            }
        }
    }
}

int main(){
    vector<int> arrA{1, 2, 12, 41, 23};
    vector<int> arrB{42, 12, 2, 40, 123};

    intersectionOperation(arrA, arrB);
    return 0;
}