// find unique element inside a vector. vector should be sorted and there will be a pair of element except one element

/*
    Test cases:
    [1, 1, 2, 2, 3, 3, 4, 6, 6, 7, 7, 8, 8]        output: 4
*/

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
