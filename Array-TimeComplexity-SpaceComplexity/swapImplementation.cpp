#include<iostream>
using namespace std;

    // arithmetic approach
    void swapUsingArithmetic(int &a, int &b){
        a = a + b;
        b = a - b;
        a = a - b;
    }

    // Bitwise XOR approach
    void swapUsingXOR(int &a, int &b){
        a = a ^ b;
        b = a ^ b;
        a = a ^ b;
    }

    // Temp variable approach
    void swapUsingTemp(int &a, int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

int main(){

    // approach 1: Arithmetic approach
    int x = 9, y = 10;
    cout << "Before swap: " << "x: "  << x << " y: " << y << endl;
    swapUsingArithmetic(x, y);
    cout << "After swap: " << "x: "  << x << " y: " << y;

//--------------------------------------------------------------------------------------

    // approach 2: Bitwise XOR approach
    int x = 2 , y = 3;
    cout << "Before swap: " << "x: "  << x << " y: " << y << endl;
    swapUsingXOR(x, y);
    cout << "After swap: " << "x: "  << x << " y: " << y;

//--------------------------------------------------------------------------------------

    // approach 3: temp variable
    int x = 17 , y = 2;
    cout << "Before swap: " << "x: "  << x << " y: " << y << endl;
    swapUsingTemp(x, y);
    cout << "After swap: " << "x: "  << x << " y: " << y;
    return 0;
}