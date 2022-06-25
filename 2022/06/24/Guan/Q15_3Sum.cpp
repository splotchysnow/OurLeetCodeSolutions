// MEdium difficulty.
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, 
//and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

//Basically.
//3 item, No duplicate and sum = 0

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>


using namespace std;


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> currentAns;
        //Case if the input have less than three value; return nothing.

        //Not sure how to use this to save time>>?>?>?
        set<vector<int>> duplicateCheck;

        if(nums.size() <= 2){
            return ans;
        }


        //BRUTE FORCE O(N^3) SOLUTION.
        for(int i = 0; i < nums.size()-2; i++){
            for(int j = 1; j < nums.size()-1; j++){
                for(int k = 2; k<nums.size(); k++){
                    if(nums[i] + nums[j] == nums[k] && nums[i] != nums[j] && nums[i] != nums[k] && nums[j] != nums[k]){
                        //Check if its already duplicated.
                        currentAns.push_back(nums[i]);
                        currentAns.push_back(nums[j]);
                        currentAns.push_back(nums[k]);

                        //Make sure that this currentAns is not duplicated.
                        //EMMMMMM:
                        sort(currentAns.begin(), currentAns.end());

                        int n = duplicateCheck.size();
                        duplicateCheck.insert(currentAns);

                        if(n != duplicateCheck.size()){
                            //Throw this in a set;
                            ans.push_back(currentAns);
                        }
                    }
                }
            }
        }


        // //Brainstorm:
        // int firstNum;
        // int secondNum;
        // int thirdNum;
        // //Lock the first number:
        // //Lock the second number: LOOP
        
        // //Iterate thrid number:

        // //second number + third number == first number.
        //     //Save it:
    }
};