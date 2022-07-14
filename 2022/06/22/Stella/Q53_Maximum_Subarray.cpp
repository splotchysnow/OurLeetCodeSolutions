#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>

using namespace std;
// Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

// A subarray is a contiguous part of an array.


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int maxInclude = 0;
        for(int i = 0; i<nums.size(); i++){
            maxInclude = maxInclude + nums[i];
            if(maxInclude>max){
                max = maxInclude;
            }
            if(maxInclude<0){
                maxInclude = 0;
            }
        }
        return max;
        
    }
};