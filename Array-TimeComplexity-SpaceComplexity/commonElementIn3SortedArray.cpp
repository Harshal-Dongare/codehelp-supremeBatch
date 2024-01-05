/* 
GFG problem statement: Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

Input:
n1 = 6; A = {1, 5, 10, 20, 40, 80}
n2 = 5; B = {6, 7, 20, 80, 100}
n3 = 8; C = {3, 4, 15, 20, 30, 70, 80, 120}

Output: 20 80
*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;


    // Approach 2 function
    void removeDuplicates(vector<int>& arr){

        int n = arr.size();

        // If passed array contains only one elements then no need to remove duplicates
        if(n <= 1) return;

        int index = 0;
        for (int i = 1; i < n; ++i) {
            if (arr[i] != arr[index]) {
                ++index;
                arr[index] = arr[i];
            }
        }

        // Resize the vector to the new size
        arr.resize(index + 1);
}

int main(){

    // Approach 1: with set() STL
    vector<int> a = {1, 5, 10, 20, 20, 40, 80,};
    vector<int> b= {6, 7, 20, 20, 80, 100};
    vector<int> c= {3, 4, 15, 20, 20, 30, 70, 80, 120};


    int i =0, j=0, k=0;
    // declaration of set array which stores unique elements
    set<int> st;

    while(i < a.size() && j < b.size() && k < c.size()){
        // if element founds in all 3 arrays
        if(a[i] == b[j] && b[j] == c[k]){
            // It will add only unique common entries
            st.insert(a[i]);
            i++, j++, k++;
        }
        // if element in `a` is < element in `b`
        else if(a[i] < b[j]){
            i++;
        }
        // if element in `b` is < element in `c`
        else if(b[j] < c[k]){
            j++;
        }
        // if element in `c` is smaller than `a` and `b`
        else{
            k++;
        }
    }

    // printing common elements found in three arrays
    for(auto element: st){
        cout << element << " ";
    }

//-------------------------------------------------------------------------------------------------

    // Approach 2: without set() STL

    vector<int> a = {1, 5, 10, 20, 20, 40, 80,};
    vector<int> b= {6, 7, 20, 20, 80, 100};
    vector<int> c= {3, 4, 15, 20, 20, 30, 70, 80, 120};

    // array to store all common entries
    vector<int> ans;

    // removing duplicates calls
    removeDuplicates(a);
    removeDuplicates(b);
    removeDuplicates(c);

    int i =0, j=0, k=0;
    // declaration of set array which stores unique elements

    while(i < a.size() && j < b.size() && k < c.size()){
        // if element founds in all 3 arrays
        if(a[i] == b[j] && b[j] == c[k]){
            // It will add only unique common entries
            ans.push_back(a[i]);
            i++, j++, k++;
        }
        // if element in `a` is < element in `b`
        else if(a[i] < b[j]){
            i++;
        }
        // if element in `b` is < element in `c`
        else if(b[j] < c[k]){
            j++;
        }
        // if element in `c` is smaller than `a` and `b`
        else{
            k++;
        }
    }

    // printing common elements found in three arrays
    for(auto element: ans){
        cout << element << " ";
    }

    return 0;
}