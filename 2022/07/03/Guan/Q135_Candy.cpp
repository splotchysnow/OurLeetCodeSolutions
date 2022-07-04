#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

// 3 out of 40 cases passed??

class Solution {
public:
    int candy(vector<int>& ratings) {
        // Return the minimum number of candies that you can deliver.
        // TWO RULES:
        // RULE 1: EACH PERSON MUST AT LEAST GET ONE CANDY.
        // RULE 2: RATING THAT IS HIGHER MUST GET MORE THAN ITS NEIGBORS.
        
        int totalCandyCount = 0;

        for(int i = 0; i < ratings.size()-1; i++){
            if(ratings[i] > ratings[i+1]){
                totalCandyCount++;
            }
            if(ratings[i] < ratings[i+1]){
                totalCandyCount++;
            }
            totalCandyCount++;
        }
        return totalCandyCount;
    }
};