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
            //If the prices is smaller than min, store it.
            if(prices[i] < min){
                min = prices[i];
            }
            //if min is the same as ith position, loop next.
            if(prices[i] == min){
                //begin loop next couple elements.
               for(int j = i+1; j < prices.size(); j++){
                   int varj = prices[j];
                   int vari = prices[i];
                   int newMax = varj-vari;
                   //if the j is bigger than i and bigger than max.
                   if(varj > vari && newMax > max){
                       max = varj-vari;
                   }
               }
           }
        }
        return max;
    }
};