/*
GFG Problem statement: Allocate minimum number of pages

You have N books, each with A[i] number of pages. M students need to be allocated contiguous books, with each student getting at least one book.
Out of all the permutations, the goal is to find the permutation where the sum of maximum number of pages in a book allotted to a student should be minimum, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

Example 1:

Input:
    N = 4
    A[] = {12,34,67,90}
    M = 2

Output:113

Explanation:Allocation can be done in 
following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113,
which is selected as the output.
*/

#include<iostream>
#include<vector>
using namespace std;

bool isPossible(vector<int> arr, int students, int booksCount, int mid){
    // start from 1st student
    int studentsCount = 1;

    int pageSum = 0;

    for(int i = 0; i < booksCount; i++){
        // if pageSum is less than equal to mid
        if(arr[i]+pageSum <= mid){
            pageSum += arr[i];
        }
        else{
            // next student
            studentsCount++;

            // student count exceeds or next student first pageSum > mid, return false
            if(studentsCount > students || arr[i] > mid){
                return false;
            }
            // find page sum for next student
            pageSum += arr[i];
        }
    }
    return true;

}

int main(){
    
    vector<int> arr = {10, 20, 30, 40};
    // total number of students
    int students = 2;
    // total number of books
    int booksCount = 4;

    int start = 0;

    int sum = 0 ;

    // sum of all pages to create search space
    for(int i =0; i < booksCount; i++){
        sum += arr[i];
    }

    int end = sum;

    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){

        // if Number of students is greater than number of books
        if(students > booksCount){
            cout << ans;
            break;
        }

        // if current mid value is valid store it
        if(isPossible(arr, students, booksCount, mid)){
            ans = mid;
            end = mid - 1;
        }
        // if mid value is not valid, search on right
        else {
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }
    
    cout << ans ; 

    return 0;
}