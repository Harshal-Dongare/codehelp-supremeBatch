// Best time to buy and sell stock- level 1. 
// Find at what day stock should purchase and what day should user sell it to make the maximum profit

#include<iostream>
#include<vector>
using namespace std;

void maxProfit(vector<int> arr){
    int buyDay, sellDay;
    int maxProfit = 0;

    for(int i = 0; i < arr.size(); i++){
        int currentDayProfit = arr[i];
        for(int j = (i+1); j < arr.size(); j++){
            int nextDayProfit = arr[j];
            int currentProfit = nextDayProfit - currentDayProfit; 

            // update maxProfit if the current pair() gives the higher profit
            if(currentProfit > maxProfit){
                maxProfit = currentProfit;

                // to keep track of days
                buyDay = i+1;
                sellDay = j+1;
            }
        }
    }

    cout << "Stock should buy at day: " << buyDay << " and " << "sell on day: " << sellDay << " with maximum profit of: " << maxProfit << endl;
}

int main(){
    
    vector<int> stockPrice{2, 5, 1, 7, 4, 12, 11};
    maxProfit(stockPrice);
    return 0;
}