// Find a triplet of elements in a vector that upon addition gives values equal to sum

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> arrEle{10, 20, 30, 40, 50, 60, 70};
    int sum = 80;

    for(int i = 0; i < arrEle.size(); i++){
        int element1 = arrEle[i];
        
        for(int j = i+1; j < arrEle.size(); j++){
            int element2 = arrEle[j];

            for(int k = j+1; k < arrEle.size(); k++){
                int element3 = arrEle[k];

                if(sum == element1+element2+element3){
                    cout << "( " << element1 <<", " << element2 << ", " << element3 << " )"<< endl;
                }
            }
        }
    }
    return 0;
}