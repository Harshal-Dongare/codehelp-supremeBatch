/*
Problem statement: Find the square root of a number
*/
#include<iostream>
using namespace std;

    int squareRoot(int n){
        int target = n;
        int start = 0;
        int end = n;
        int mid = start + (end - start)/2;
        int ans = -1;

        while(start <= end){
            if(mid*mid == target) return mid;
            if(mid*mid > target) end = mid - 1;
            if(mid*mid < target){
                ans = mid; 
                start = mid + 1;
            }

            mid = start + (end - start)/2;
        }
        return ans;
    }

int main(){
    int n;
    cout << "Enter the number to find the square root: ";
    cin >> n;

    int ans = squareRoot(n);
    cout << "Square root is: " << ans << endl;

    double finalAnswer = ans;

    int precision;
    cout << "Enter the precision count: ";
    cin >> precision;

    double step = 0.1;
    for(int i = 0; i < precision; i++){
        for(double j = finalAnswer; j*j <= n; j = j + step){
            finalAnswer = j;
        }
        step = step/10;
    }

    cout << "Final Answer: " << finalAnswer << endl;
    return 0;
}