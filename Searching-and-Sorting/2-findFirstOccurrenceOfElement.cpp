/* Problem statement: Find the first occurrence of an given element in an array.

input: [1, 2, 2, 3, 4, 5, 6]; target: 2
output: 1st index
*/

#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int> arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while(start <= end){
        // if arr[mid] == target 
        if(arr[mid] == target){
            // store the current occurrence 
            ans = mid;
            // search on left side
            end = mid - 1;
        }
        else if(target < arr[mid]) end = mid - 1;
        else if(target > arr[mid]) start = mid + 1;

        mid = start + (end -start)/2;
    }
    return ans;
}

int main(){
    vector<int> arrEle= {1, 2, 3, 8, 8, 9, 12, 15};
    int target = 8;

    int ans = firstOccurrence(arrEle, target);
    cout << ans << " index" << endl;
    return 0;
}
