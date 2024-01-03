// Counting Zeros and Ones in an array

#include<iostream>
using namespace std;

int main(){
    int arrEle[] = {0, 1, 0, 0, 0, 1, 0, 1, 1};
    int size = 9;
    int zeros= 0, ones = 0;
    for(int index = 0; index < size; index++){
        // Don't use if-else statment otherwise it won't work for counting 1's if there will be other digits too in the array
        if(arrEle[index] == 0) zeros++;
        if(arrEle[index] == 1) ones++;
    }

    cout << "Number of zeros: " << zeros << " | "; 
    cout << "Number of Ones: " << ones; 
    return 0;
}