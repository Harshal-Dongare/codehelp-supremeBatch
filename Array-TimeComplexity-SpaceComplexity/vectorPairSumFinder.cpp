// Find a pair of elements in a vector that upon addition gives value equal to the sum.

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arrEle{10, 20, 30, 40, 50, 60};
    int sum = 60;

    // Outer loop for each element in the vector
    for(int i = 0; i < arrEle.size(); i++){
        int element1 = arrEle[i];
        // j = i + 1 traverse for other elements except itself
        for(int j = (i+1); j < arrEle.size(); j++){
            int element2 = arrEle[j];
            // if pair founds whose sum = 60
            if(sum == element1 + element2) {
                cout << "( " << element1 << ", " << element2 << " )" << endl;
            }
        }
    }

    return 0;
}