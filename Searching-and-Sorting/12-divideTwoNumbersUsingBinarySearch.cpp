/*
Problem statement: Find the quotient by divinding two numbers using binary search
*/

#include<iostream>
using namespace std;

int findQuotient(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);
    int ans = 0;

    int mid = start + (end -start)/2;

    while(start <= end){
        // while solving the problem take all values as positive using abs function

        // perfect answer
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }
        // search left if mid*divisor is greater than the dividend
        if(abs(mid*divisor) > abs(dividend)) end = mid -1; 
        if(abs(mid*divisor) < abs(dividend)){
            ans = mid;           // store the answer
            start = mid + 1;     // search right
        }
        // update mid
        mid = start + (end -start)/2;
    }

    // if both dividend and divisor is poistive or negative
    if((dividend < 0) && (divisor < 0) || (dividend > 0) && (divisor > 0)){
        return ans;
    }
    else{
        // if any one of the value is negative
        return -ans;
    }
};

int main(){
    int dividend = -22;
    int divisor = 7;

    int ans = findQuotient(dividend, divisor);

    // for precision 
    double finalAnwser = abs(ans);

    int precision;
    cout << "Enter the precision count: ";
    cin >> precision;

    double step = 0.1;

    for(int i = 0; i < precision; i++){
        for(double j = finalAnwser; j*abs(divisor) <= abs(dividend); j = j + step){
            finalAnwser = j;
        }
        step = step/10;
    }

    // check case for negative values
    if(ans < 0) cout << "The answer is: " << -finalAnwser << endl;
    else cout << "The answer is: " << finalAnwser << endl;

    return 0;
}