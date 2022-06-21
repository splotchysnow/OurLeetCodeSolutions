#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = 100001;
        int profit = 0;
        int n = prices.size();
        //Loop through every single elemnt in the list;
        for(int i = 0; i < prices.size()-1; i++){
            if(increasing(prices[i],prices[i+1])){
                //if it is decending.
                //Sell it: at I th position;
                //its accending:
                
                if(min > prices[i]){
                    min = prices[i];
                    //Reset max:
                    max = 0;
                }                
                cout << "MAX : " << max << endl;
                cout << "MIN : " << min << endl;
            }
            else{
                if(min != 100001){
                    max = prices[i];    
                }
                cout << "MAX : " << max << endl;
                cout << "MIN : " << min << endl;
            }
            if(max > min){
                cout << "Profit : " << profit << endl;
                profit += (max - min);
                //Reset the variables:
                max = 0;
                min = 100001;
            }
        }
        
        //Last if statement for last edge case:
        if(prices[prices.size()-1] > min){
            // cout << (prices[prices.size()-1] - min);
            profit += (prices[prices.size()-1] - min);
        }
        
        return profit;
    }
    bool increasing(int a, int b){
        if(a < b){
            return true;
        }
        return false;
    }
};