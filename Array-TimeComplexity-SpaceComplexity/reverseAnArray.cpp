// Reverse all the elements in an array.

#include<iostream>
using namespace std;

int main(){
    int arrEle[] = {12, 2, 4, 35, 77, 96, 5, 99};
    int size = 8;

    int start = 0, end = size - 1;

    while(start <= end){
        
        // this condition avoids infinite loop when size of the array is odd
        if(start == end) start++;
        
        if(start < end){
            swap(arrEle[start], arrEle[end]);
            start++;
            end--;
        }
    }

    for(auto element: arrEle){
        cout << element << " ";
    }
    return 0;
}
