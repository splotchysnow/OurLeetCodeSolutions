// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different 
// day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <vector>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 10000;
        int currMax = 0;
        for(int i=0; i<prices.size()-1; i++){
            if (prices[i]<low) low = prices[i];
            if ((prices[i+1]-low)>currMax) currMax = prices[i+1]-low;
        }
        return currMax;
    }
}; 