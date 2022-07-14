// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndex;
        vector<int> result;
        for(int i=0; i<nums.size(); i++){
            if(numIndex.count(target-nums[i])){
                vector<int> sol = {i, numIndex[target-nums[i]]};
                return sol;
            }else{
                numIndex[nums[i]] = i;
            }
        }
        return result;
    }
};