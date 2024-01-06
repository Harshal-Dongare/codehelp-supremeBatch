/*
Problem statement: Find total occurrences of an element in an array
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> arrEle = {1, 2, 7, 9, 9, 9, 9, 9, 9, 10, 13};
    int target = 9;

    // find first occurrence index using lower_bound
    auto low = lower_bound(arrEle.begin(), arrEle.end(), target);
    // find last occurrence index using upper_bound
    auto high = upper_bound(arrEle.begin(), arrEle.end(), target);

    // total no of occurrences 
    int totalOccurrences = (high - arrEle.begin() -1 ) - (low - arrEle.begin()) + 1;

    cout << "Element "<< target <<" total occurrences: " << totalOccurrences << " times";
    return 0;
}