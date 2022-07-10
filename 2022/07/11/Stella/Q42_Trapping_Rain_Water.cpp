// Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

class Solution {
public:
    int trap(vector<int>& height) {
        //int max = 0;
        int result = 0;
        int h = 0;
        vector<int> maxHeight1, maxHeight2;
        maxHeight1.push_back(height[0]);
        maxHeight2.push_back(height[height.size()-1]);
        int m1 = height[0];
        int m2 = height[height.size()-1];
        for(int i = 1; i<height.size(); i++){
            int j = height.size()-1-i;
            m1 = max(m1, height[i]);
            m2 = max(m2, height[j]);
            maxHeight1.push_back(m1);
            maxHeight2.push_back(m2);
        }
        
//         int result = 0;
//         int start = 0;
//         int store = 0;
        
        cout<<" ";
        for(int k = 0; k<maxHeight1.size(); k++){
            cout<<maxHeight1[k]<<" ";
        }
        
        cout<<endl<<" ";
        for(int l = 0; l<maxHeight1.size(); l++){
            cout<<maxHeight2[maxHeight1.size()-1-l]<<" ";
        }
        
        cout<<endl<<" ";
        for(int p = 0; p<maxHeight1.size(); p++){
            result += min(maxHeight1[p],maxHeight2[maxHeight1.size()-1-p])-height[p];
            cout<<min(maxHeight1[p],maxHeight2[maxHeight1.size()-1-p])<<" ";
        }
        
//         cout<<endl<<" ";
//         start = maxHeight[0];
//         for(int j = 1; j<maxHeight.size(); j++){
//             if(height[j-1]>height[j]){
//                 start = maxHeight[j];
//                 store += maxHeight[j]-height[j];
//             }else{
//                 result+=store;
//                 store = 0;
//                 start = height[j];
//             }
//             cout<<result<<" ";
//             //cout<<store;
//         }
           return result;
    }
};