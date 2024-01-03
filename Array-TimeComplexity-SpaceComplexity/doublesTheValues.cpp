// Doubles the values of array and print them. Do not alter the array

#include <iostream>
using namespace std;

int main(){
    int arrEle[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};    
    int size = 9;    

    for(int index = 0; index < size; index++){
        cout << arrEle[index] * 2 << " ";
        
    }
    cout << endl;
    return 0;
}