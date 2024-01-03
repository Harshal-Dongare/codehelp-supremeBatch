// Find Maximum number in an array. Assum array contains values >= 0

#include<iostream>
// Header file for INT_MIN function
#include <limits.h>
using namespace std;

int main(){
    int arrEle[] = {4, 2, 75, 6, 8, 12, 40, 99};
    int size = 8;

    // Initialize the variable with INT_MIN. Doesn't work if array contains negative values
    int maxNum = INT_MIN;

    for(int index = 0; index < size; index++){
        // if found a number which is greater than maxNum, then update maxNum
        if(arrEle[index] > maxNum) maxNum = arrEle[index];
    }

    cout << "Maximum Number: " << maxNum;

    return 0;
}