#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;
// Given an unsorted integer array nums, return the smallest missing positive integer.

// You must implement an algorithm that runs in O(n) time and uses constant extra space.

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        //vector<int> sm; //smallest missing
        
        vector<int> set;
        for(int i=1; i<=nums.size(); i++){
            set.push_back(i);
        }
        
        for(int j=0; j<nums.size(); j++){
            for(int k=0; k<set.size(); k++){
                if(set[k]==nums[j]){
                    set.erase(set.begin()+k);
                }
            }
        }
        
        for(int m=0; m<set.size(); m++){
            cout<<set[m];
        }
    
        
        if(set.size()!=0){
            return set[0];
        }else{
            return nums.size()+1;
        }
        
        return 0;
    }
};