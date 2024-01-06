/*
GFG Problem statement: Given an integer N, find its factorial. 

Constraints:
    1 ≤ fact ≤ 1000

Input: N = 10
Output: 3628800


*/ 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> ans;

    ans.push_back(1);
    int fact = 50;
    int carry = 0;

    for(int i =2; i <= fact; i++){
        for(int j =0; j < ans.size(); j++){
            int x = ans[j] * i + carry;
            ans[j] = x % 10;
            carry = x / 10;
        }

        // if carry is in double digit
        while(carry){
            ans.push_back(carry%10);
            carry /= 10;
        }
    }

    reverse(ans.begin(), ans.end());
    for(auto element: ans){
        cout << element;
    }
    return 0;
}