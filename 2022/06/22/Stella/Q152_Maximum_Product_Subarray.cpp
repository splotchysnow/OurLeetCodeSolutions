// Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

// The test cases are generated so that the answer will fit in a 32-bit integer.

// A subarray is a contiguous subsequence of the array.

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = INT_MIN;
        int maxP = 1;
        int maxN = 1;
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]>0){
                maxP *= nums[i];
                maxN *= nums[i];
                result = max(result,max(maxP,maxN));
            }
            else{ 
                maxN *= nums[i];
                result = max(result,maxN);
                maxP=1;
            }
        }
        return result;
    }
};