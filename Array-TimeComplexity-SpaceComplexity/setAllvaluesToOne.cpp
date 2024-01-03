// set all values of an array to 1's

#include <iostream>
#include <cstring>
using namespace std;

int main(){

    // approach 1
    int arrEle[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    for(int index =0; index < size; index++){
        arrEle[index] = 1;
        cout << arrEle[index] << " ";
    }


    return 0;   
}