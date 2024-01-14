// Find the minimum number in an array. Contains all types of numbers.

/*
Test cases: 
    [17, 62, 9, 63, 43]                            output: 9
    [45, 0, -75, 23, 61, 49, 52, 12, 96, 42]       output: -75
    [-45, 0, -175, -23, -61]                       output: -175
*/
#include<iostream>
#include <limits.h>
using namespace std;


int main(){
    int arrEle[] = {45, 0, -75, 23, 61, 49, 52, 12, 96, 42};
    int size = 10;
    int minNum = INT_MAX;
    
    for(int index = 0; index < size; index++){
        // If number found less than minNum, then update minNum
        if(arrEle[index] < minNum) minNum = arrEle[index];
    }

    cout << "Minimum Number: " << minNum;
    return 0;
}
