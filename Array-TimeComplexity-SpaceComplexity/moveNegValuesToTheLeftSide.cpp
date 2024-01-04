// Move all negative values to the left side of an array. Assume that order maintence is not required.
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    
    // Approach 1: sort() function
    // Time complex: O(nlogn) and Space complex: O(n)

    vector<int> arrEle = {5, 6, -2, 3, -4, -9, 0};

    // sort() library function
    sort(arrEle.begin(), arrEle.end());

    // priting the array
    for(auto element: arrEle){
        cout << element << " ";
    }

//-----------------------------------------------------------------------------------    

    // Approach 2: Two pointers approach or Dutch National Flag
    // Time complex: O(n) and Space complex: O(1)

    vector<int> arrEle = {5, 6, -2, 3, -4, -9, 0};

    int low = 0;
    int high = arrEle.size() - 1;

    while(low < high){
        // if value at low is negative, then low++
        if(arrEle[low] < 0) low++;
        // if value at high is positive, then high--
        else if(arrEle[high] > 0) high--;
        // if value at high is negative and at low is positive, then do swap()
        else swap(arrEle[low], arrEle[high]);
    }

    // priting the array
    for(auto element: arrEle){
        cout << element << " ";
    }

    return 0;
}