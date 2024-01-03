// Left rotate an array by one element
#include<iostream>
#include<vector>

using namespace std;

// Approach 2:
void leftRotateByOne(vector<int>& arr){
    int firstElement = arr[0];
    for(int index = 1; index < arr.size(); index++){
        arr[index - 1] = arr[index];
    }
    arr[arr.size() - 1] = firstElement;
}

int main(){
    // Approach 1: using swap() function
    vector<int> arrEle{1,2,3,4,5};
    for(int index = 0; index < arrEle.size() - 1; index++){
        swap(arrEle[index], arrEle[index+1]);
    }
    // printing vector
    for(auto element: arrEle){
        cout << element << " ";
    }

//-------------------------------------------------------------------------------------------

    // Approach 2: 
    vector<int> arrElements{5, 6, 7, 8, 9};

    leftRotateByOne(arrElements);
    // printing vector
    for(auto element: arrElements){
        cout << element << " ";
    }

    return 0;
}

