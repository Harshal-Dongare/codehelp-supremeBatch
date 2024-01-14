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


/*
Why memset() doesn't print expected output for integers like 42, -74, 12, 60 ?

-> memset() function sets each byte of the memory block to a given value. When you use it to set integer byte, the interpretation of those bytes depends on the endianess of the system. 

-> 1. Little-endian system: The least byte of the binary number of a decimal is stored at the lowest memory address. 
    example: let's you have 32bit integer format
    42: 00101010 
    representation of 42 in 32 bit integer format of Little-endian system will be : 00101010 00000000 00000000 00000000 

    this is how each memory block of array get set with this value and when you print each value, compiler again convert this value to number but it converts to 707406378 which is the conversion of 
    00101010 00000000 00000000 00000000. It is totally depend upon the endianess of the system
    
-> 2. Big-endian system: The most significant byte of the binary number is stored at lowest memory address.
*/
