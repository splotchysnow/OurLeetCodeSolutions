
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>


using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        //Idea:
        /**
        * Do a recursion on a function. Each time n goes down by 1.
        * Make a counter that counts and divide the problem donwn
        */
        vector<int> ans;
        // cout << log2(5);
        // cout  << floor(5.5);
        // recursionBits(ans,n,n,0);
        
        int lastGap = 0;
        
        for(int i = 0; i <= n; i++){
            if(i == 0){
                ans.push_back(0);
            }
            else if(i == 1){
                ans.push_back(1);
            }
            else if(log2(i) == floor(log2(i))){
                ans.push_back(1);
                lastGap = i;
            }
            else{
                // cout << lastGap;
                ans.push_back(1+ans[i-lastGap]);
            }
        }
        
        
        return ans;
    }
    
    // vector<int> recursionBits(vector<int> &ans, int n, int count, int lastGap){
    //     //This is first statement?
    //     if(n-count == 0){
    //         ans.push_back(0);
    //         if(count == 0){
    //             return ans;
    //         }
    //         count--;
    //         recursionBits(ans, n, count,0);
    //     }
    //     else if(n-count == 1){
    //         ans.push_back(1);
    //         if(count == 0){
    //             return ans;
    //         }
    //         count--;
    //         recursionBits(ans, n, count,1);
    //     }
    //     else{
    //         if(log2(n-count) == floor(log2(n-count))){
    //             //If it has no decimal:
    //             //Find the log:
    //             ans.push_back(1);
    //             lastGap = n-count;
    //             if(count == 0){
    //                 return ans;
    //             }
    //             count--;
    //             recursionBits(ans,n, count,lastGap);
    //         }
    //         else{
    //             // Log2(n-count) + 1: gives you the Highest bit.
    //             ans.push_back(1+ans[(n-count)-lastGap]);
    //             if(count == 0){
    //                 return ans;
    //             }
    //             count--;
    //             recursionBits(ans,n, count,lastGap);
    //         }
    //     }
    //     return ans;
    // }
};