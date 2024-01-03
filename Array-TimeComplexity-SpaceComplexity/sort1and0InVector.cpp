// Sort all 0's and 1's inside a vector. Use two pointers approach and `i` variable for traversing

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arrEle{0, 1, 1, 0, 0, 0, 1, 1, 0, 1};
    // `start` is to keep the left side of the vector to `0`
    int start = 0; 
    // `end` is to keep the right side of the vector to `1`
    int end = arrEle.size() - 1;
    // `i` is to traverse the entire vector and check the value 
    int i = 0;


    // loop will break when i == end
    while(i != end){
        // if i founds the value 0
        if(arrEle[i] == 0){
            swap(arrEle[i], arrEle[start]);
            i++;
            start++;
        }

        // if i founds the value 1
        if(arrEle[i] == 1){
            swap(arrEle[i], arrEle[end]);
            end--;
        }
    }
    
    for(auto element: arrEle){
        cout << element << " ";
    }
    return 0;
}