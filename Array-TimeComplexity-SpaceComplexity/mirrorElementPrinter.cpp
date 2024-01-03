// print elements in pairs, alternating between the first and last positions, second and second-to-last positions, and so on, in an array

#include<iostream>
using namespace std;

int main(){

    // approach : 2 pointers approach
    int arrEle[] = {1, 5, 63, 75, 42, 4, 55, 99};
    int size = 8;

    int start = 0, end = size - 1;

    while(start <= end){
        // if array count is an odd , then the middle element will be printed only for once
        if(start == end) {
        cout << arrEle[start];
        start++;
        }
        
        if(start < end){
            cout << arrEle[start] << " " << arrEle[end] << " ";
            start++;
            end--;
        }
    }
    return 0;
}