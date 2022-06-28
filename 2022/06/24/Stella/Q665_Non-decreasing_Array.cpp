#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>


using namespace std;
// Given an array nums with n integers, your task is to check if it could become non-decreasing by modifying at most one element.

// We define an array is non-decreasing if nums[i] <= nums[i + 1] holds for every i (0-based) such that (0 <= i <= n - 2).

class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int max = 0;
        int last = 0;
        int chance = 0;
        int s = 0;//
        for(int i = 1; i<nums.size();i++){
            cout<<last<<chance<<" ";
            if(chance==1 && (nums[i-1]>nums[i]||nums[i]<last)){
                return false;
            }else if(nums[i-1]>nums[i]){
                chance++;
                last = nums[i-1];
            }else{
                last = nums[i];
            }
        }
        return true;
    }
};