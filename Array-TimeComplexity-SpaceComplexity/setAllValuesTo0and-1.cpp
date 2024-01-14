// set all values inside an array to either 0 or -1 using memset() function

// syntax: memset(baseAddress, replaceValue, sizeOfTheArray);

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    // memset() approach:
    // syntax: memset(arrName, -1 or 0, sizeof(arrName));

    int arrEle[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    memset(arrEle, -1, sizeof(arrEle));

    for(int index = 0; index < size ; index++){
        cout << arrEle[index] << " ";
    }
    
    return 0;
}
