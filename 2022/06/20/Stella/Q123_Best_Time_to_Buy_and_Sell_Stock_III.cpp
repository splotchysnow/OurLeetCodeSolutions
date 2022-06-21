// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// Find the maximum profit you can achieve. You may complete at most two transactions.

// Note: You may not engage in multiple transactions simultaneously (i.e., you must sell the stock before you buy again).

#include <iostream>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int low = 10000;
        int prev = 0;
        int low1 = 0;
        int low2 = 0;
        int increased = 0; //store profit increased in previous round, default 0
        int profit1 = 0;
        int profit2 = 0;
        for(int i = 0; i<prices.size()-1; i++){
            if (prices[i]<low){
                low = prices[i];
                cout<<"low:"<<low<<" ";
            }
            if ((prices[i+1]-low)>0){
                if(increased == 1){
                    profit1 += prices[i+1]-low;
                    cout<<"inc i:"<<i<<" ";
                    cout<<"p1:"<<profit1<<" ";
                    low = 10000;
                }else if(increased == 2){
                    profit2 += prices[i+1]-low;
                    cout<<"inc i:"<<i<<" ";
                    cout<<"p2:"<<profit2<<" ";
                    low = 10000;
                }else if(profit1>profit2 && (prices[i+1]-low)>profit2){
                    profit2 = prices[i+1]-low;
                    increased = 2;
                    if(low2<low1 && prev == 1){
                        profit1+=low1-low2;
                        low1 = low2;
                    }
                    prev = 2;
                    low2 = low;
                    cout<<"i:"<<i<<" ";
                    cout<<"p2:"<<profit2<<" ";
                    low = 10000;
                }else if((prices[i+1]-low)>profit1){
                    profit1 = prices[i+1]-low;
                    increased = 1;
                    if(low2>low1 && prev == 2){
                        profit2+=low2-low1;
                        low2 = low1;
                    }
                    prev = 1;
                    low1 = low;
                    cout<<"i:"<<i<<" ";
                    cout<<"p1:"<<profit1<<" ";
                    low = 10000;
                }
            }else{
                increased = 0;
            }
        }
        //cout<<"p1:"<<profit2<<" ";
        return profit1+profit2;
    }
};