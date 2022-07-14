
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

//TODO: FINISH TIHS?

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //1. Create a HashMap:
        //      in this map, the interger will be the number occured and the value will be 0 if not visited and 1 if visited.
        unordered_map<int,bool> visitedMap;

        //2. Create a for loop that put every one of the value into the visitedMap and mark it as unexplored.
        for(int i = 0; i < nums.size(); i++){
            visitedMap[nums[i]] = false;
        }
        //Now we have a visitedMap with every value being false.

        //keep track of the maximum Occurences.
        int max_ = 0;

        //3. iterate throught he array of numbers and explore the number ups and down. keep track of the length.
        for(int i = 0; i < nums.size(); i++){
            
        }

        //4. if it has been visited, skip it;



        

        
    }
};