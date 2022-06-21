// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.

// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of the 
// stock at any time. However, you can buy it then immediately sell it on the same day.

// Find and return the maximum profit you can achieve.
#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {    
        int low = 10000;
        int profit = 0;
        for(int i = 0; i<prices.size()-1; i++){
            if (prices[i]<low) low = prices[i];
            if ((prices[i+1]-low)>0){
                profit += prices[i+1]-low;
                low = 10000;
            }
        }
        return profit;
    }
};