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
        int n = prices.size();
        //Loop through every single elemnt in the list;
        for(int i = 0; i < prices.size()-1; i++){
            // cout << min;
            //UPDATE MIN:
            //If the prices is smaller than min, store it.
            if(prices[i] < min){
                min = prices[i];
            }
            //IF I IS SMALLER THAN MIN: GET IT:
            if((prices[i+1] - min) > max){
                //update max:
                max = prices[i+1] - min;
                //begin loop next couple elements.
               
           }
        }
        return max;
    }
};