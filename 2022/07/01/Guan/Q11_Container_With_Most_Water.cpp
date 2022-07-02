#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        //How to determine the largest containeer?
        //Factors:
        //1. the two longest lines.
        //2. the indexes in between.
        //Return the smaller lines * index lengths.

        //Brute force solution won't work since its O(N^2)

        //Optimal Way:
        //Taking a pointer on left and a pointer on right.
        //If left < right, move left more right.
        //If right < left, move right more left.
        //Stop when left == right.
        //O(N) Solution.

        //Initlaize indexes;
        int leftIndex = 0;
        int rightIndex = height.size()-1;

        int left = height[leftIndex];
        int right = height[rightIndex];

        //Everytime the left or the right moves, we decrease this one by 1;
        int indexLength = rightIndex - leftIndex;

        int max = 0;

        while(leftIndex != rightIndex){
            if(max < indexLength * min(left,right)){
                max = indexLength * min(left,right);
            }
            //After this, move the cursur:
            if(left >= right){
                //Move right:
                rightIndex--;
                right = height[rightIndex];
            }
            else{
                leftIndex++;
                left = height[leftIndex];
            }
            indexLength = rightIndex - leftIndex;
        }
        return max;
    }
};