#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
#include <queue>

using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        //Take a priority queue that records integer of all the differences.
        priority_queue<int> storage;
        //First and only elements.
        storage.push(0);

        int diff = 1001;
        int diffCounter = 0;
        for(int i = 0; i < nums.size()-1; i++){
            //While looping through everything. We need a variable to keep track of the differences.
            if((nums[i] - nums[i+1] > 0 && diff < 0) || (diff == 1001) || (nums[i] - nums[i+1] < 0 && diff > 0)){
                //Set diff and incrase counter.
                diff = nums[i] - nums[i+1];
                diffCounter++;
                // cout << "Hit" << endl;
            }
            else{
                //We either hit a zero or a place where positive and negatives in a row...
                storage.push(diffCounter+1);
                //Reset everyhting.
                diff = 1001;
                diffCounter = 0;
            }
        }
        storage.push(diffCounter+1);
        return storage.top();
    }
    
};