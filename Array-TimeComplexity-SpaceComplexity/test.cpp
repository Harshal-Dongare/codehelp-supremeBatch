// find unique element inside a vector. 
// Conditions: only 1 unique element and pairs of repeated elements

#include<iostream>
#include<vector>
using namespace std;

int findUniqueEle(vector<int> arr){
    // XOR operation of a number with zero, returns the same number, that's why initialized with 0
    int ans = 0;

    // using XOR operator, 
    for(int index = 0; index < arr.size(); index++){
        ans = ans ^ arr[index];
    }

    return ans;
}

int main(){
    int n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;

    vector<int> arrEle(n);

    // put values inside a vector
    for(int index = 0; index < arrEle.size(); index++){
        cin >> arrEle[index];
    }

    int ans = findUniqueEle(arrEle);
    cout << "Unique element is: " << ans;
    return 0;
}