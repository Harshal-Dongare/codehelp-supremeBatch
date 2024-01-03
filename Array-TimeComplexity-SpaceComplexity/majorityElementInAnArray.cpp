// Majority element in an array. The element appears more than n/2 times, where n is the size of the array.

#include<iostream>
#include<vector>
using namespace std;

int findMajorityElement(vector<int>& arr){
    // outer loop for each element in the vector
    for(int i = 0; i < arr.size(); i++){
        int count = 0;
        int element = arr[i];
        // inner loop to count occurrences of the current element
        for(int j = 0; j < arr.size(); j++){
            int element2 = arr[j];
            if(element == element2) count++;
        }
        // to check if the count of element is > n/2 where n is the size of the vector
        if(count > arr.size()/2) return element;
    }

    // If there is no majority element founds in the vector
    return -1;
}

int main(){

    vector<int> arrEle{1,3,3,2,3};
    int majorityElement = findMajorityElement(arrEle);

    if(majorityElement != -1){
        cout << "Majority element: " << majorityElement << endl;
    }
    else{
        cout << "No majority element found." << endl;
    }
    
    return 0;
}