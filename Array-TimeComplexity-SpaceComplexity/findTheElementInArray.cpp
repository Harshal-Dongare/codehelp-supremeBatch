// check whether an element is present inside an array or not using Linear search approach and flag approach

#include <iostream>
using namespace std;

// // approach 1 function definition
// // function to find the element inside an array
// bool findEle(int arr[], int size, int key){
//     for(int index = 0; index < size; index++){
//         if(arr[index] == key) return true;
//     }
//     return false;
// }

int main(){

    // // approach 1: Linear search
    // // array and its size
    // int arrEle[5] = {1, 2, 3, 4, 5};
    // int size = 5;
    
    // // key as an input from the user
    // cout << "Enter the key to find" << endl;
    // int key;
    // cin >> key;

    // if(findEle(arrEle, size, key)) cout << "found";
    // else cout << "not found";

//-------------------------------------------------------------------------------

    // // approach 2: using flags
    // int arrEle[5] = {1, 2, 3, 4, 5};
    // int size = 5;
    // int key = 14;
    // int flag = 0;

    // for(int index =0; index < size; index++){
    //     // set flag to 1 if founds
    //     if(arrEle[index] == key) {
    //         flag = 1;
    //         break;
    //         }
    // }

    // if(flag) cout << "found";
    // else cout << "Not found";

    return 0;
}
