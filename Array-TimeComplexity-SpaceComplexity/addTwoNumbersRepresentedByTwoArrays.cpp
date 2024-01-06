/* 
GFG Problem Statement: 
Given two array A[0….N-1] and B[0….M-1] of size N and M respectively, representing two numbers such that every element of arrays represent a digit. 

Example: 
A[] = { 1, 2, 3} and B[] = { 2, 1, 4 } represent 123 and 214 respectively. The task is to find the sum of both the numbers.

Input : A[] = {1, 2}, B[] = {2, 1}
Output : 33
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // Note: Take each approach separately and run it. Don't try to run entire program at a time.

    // Approach 1: use string to store the final answer

    // to store answer in a string
    string ans;

    int a[] = {4, 6, 2, 8};
    int b[] = {2, 1, 8};

    // size of arrays (catch)
    int m = (sizeof(a)/sizeof(int)) - 1;
    int n = (sizeof(b)/sizeof(int)) - 1;
    int carry = 0;

    // if a[] and b[] length are equal
    while(m >=0 && n >=0){
        int sum = a[m] + b[n] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum/10;
        m--, n--;
    }

    // if a[] has more digits than b[]
    while(m >=0){
        int sum = a[m] + 0 + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum/10;
        m--;
    }

    // if b[] has more digits than a[]
    while(n >=0){
        int sum = 0 + b[n] + carry;
        int digit = sum % 10;
        ans.push_back(digit + '0');
        carry = sum/10;
        n--;
    }

    // after all addition, if there is any carry
    if(carry){
        ans.push_back(carry + '0');
    }

    // to remove ending 0's before reversing the string
    while(ans[ans.size() - 1] == '0'){
        ans.pop_back();
    }

    reverse(ans.begin(), ans.end());

    cout << ans;

//---------------------------------------------------------------------------------------------------------------
    
    // Approach two: You can also store values in vector array and not in string

    vector<int> ans;
    int a[] = {4, 6, 2, 8};
    int b[] = {2, 1, 8};

    // size of arrays (catch)
    int m = (sizeof(a)/sizeof(int)) - 1;
    int n = (sizeof(b)/sizeof(int)) - 1;
    int carry = 0;

    // if a[] and b[] length are equal
    while(m >=0 && n >=0){
        int sum = a[m] + b[n] + carry;
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum/10;
        m--, n--;   // to traverse backward
    }

    // if a[] has more digits than b[]
    while(m >=0){
        int sum = a[m] + 0 + carry; // take b[n] element value as 0, because there is no digits left in b array 
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum/10;
        m--;
    }

    // if b[] has more digits than a[]
    while(n >=0){
        int sum = 0 + b[n] + carry; // take a[n] element value as 0, because there is no digits left in a array 
        int digit = sum % 10;
        ans.push_back(digit);
        carry = sum/10;
        n--;
    }

    // after all addition, if there is any carry left
    if(carry){
        ans.push_back(carry);
    }

    // reverse the vector `ans` array to make the final output
    reverse(ans.begin(), ans.end());

    // print vector `ans` array
    for(auto element: ans){
        cout << element;
    }

    return 0;
}