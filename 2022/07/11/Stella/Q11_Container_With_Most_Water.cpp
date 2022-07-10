// 11. Container With Most Water
// Medium

// 18213

// 987

// Add to List

// Share
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.


class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int m = min(height[start],height[end])*(end);
        //int h = (min(height[start],height[end]));
        while(end>start){
            if(height[start]>=height[end]){
                m = max(m,height[end]*(end-start));
                end--;
            }else{
                m = max(m,height[start]*(end-start));
                start++;
            }
        }
        //cout<<height.size();
        return m;
    }
};