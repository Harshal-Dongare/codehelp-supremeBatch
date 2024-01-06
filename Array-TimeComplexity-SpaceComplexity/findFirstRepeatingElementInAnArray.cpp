/*
GFG Problem statement: Given an array arr[] of size n, find the first repeating element. The element should occur more than once and the index of its first occurrence should be the smallest.

Note:- The position you return should be according to 1-based indexing. 

Example 1:
Input:
n = 7
arr[] = {1, 5, 3, 4, 3, 5, 6}
Output: 2
*/

#include<iostream>
// header file to use hash table
#include<unordered_map>
#include<vector>
using namespace std;

    // Approach 1 function
    int findRepeatingElement(vector<int> arr){
        for(int i = 0; i < arr.size(); i++){
        int element1 = arr[i];
        for(int j = i + 1; j < arr.size(); j++){
            int element2 = arr[j];
            // if element founds return the index
            if(element1 == element2){
                cout << "Repeating element is: " << element1 << endl;
                return (i + 1);
                }
            }
        }
        // in case element not found, return -1
        return -1;
    }

int main(){

    // Approach 1: Linear Search
    // Time Complex: O(n^2) and Space Complex: O(1)

    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};

    int result = findRepeatingElement(arr);

    (result != -1) ? (cout << "Index: " << result) : (cout << "No repeating element found.") << endl; 

//---------------------------------------------------------------------------------------------------  

    // Approach 2: Hash method(using library function)
    // Time complex: O(n) and Space Complex: O(n)

    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    // declaration of hashmap and also mention header file for this syntax 
    unordered_map<int, int> hash;

    // Counting occurrences of each element in the array using an unordered map
    for(int i =0; i < arr.size(); i++){
        hash[arr[i]]++;
    }

    // Check which first elements has more than one occurencess
    for(int i = 0; i < hash.size(); i++){
        if(hash[arr[i]] > 1) {
            cout << "Index: " << (i+1) << ", Repeating element: " << arr[i];
            break;
        }
    }

//----------------------------------------------------------------------------------------------------

    // Approach 3: Hash table without using STL(Standard Template Library) function
    // Time complex: O(n) and Space Complex: O(n)
    
    vector<int> arr = {1, 5, 3, 4, 3, 5, 6};
    
    // hash table for storing count of elements with initial values set to 0
    vector<int> hash(7,0);

    // increment the count if element repeats
    for(int i = 0; i < arr.size(); i++){
        hash[arr[i]] = hash[arr[i]] + 1;
    }

    for(int i = 0; i < hash.size(); i++){
        // first element found whose occurrences is more than 1
        if(hash[arr[i]] > 1){
            cout << "Index: " << (i+1) << ", Repeating element: " << arr[i];
            break;
        }
    }

    return 0;
}
