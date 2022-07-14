#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>

using namespace std;
// You are given an array of positive integers nums and want to erase a subarray containing unique elements. The score you get by erasing the subarray is equal to the sum of its elements.

// Return the maximum score you can get by erasing exactly one subarray.

// An array b is called to be a subarray of a if it forms a contiguous subsequence of a, that is, if it is equal to a[l],a[l+1],...,a[r] for some (l,r).

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> numIndex;
        int start = 0;
        int curr = 0;
        int result = 0;
        for(int i=0; i<nums.size(); i++){
            if(!numIndex.count(nums[i])||numIndex[nums[i]]<start){
                curr += nums[i];
                numIndex[nums[i]]=i;
                result = max(result,curr);
            }else{
                for(int j = start; j <= numIndex[nums[i]]; j++){
                    curr -= nums[j];
                }
                start = numIndex[nums[i]]+1;
                numIndex[nums[i]]=i;
                curr += nums[i];
            }
        }
        return result;
    }
};