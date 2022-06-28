
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
        recursionBits(ans,n,n);
        return ans;
    }
    
    vector<int> recursionBits(vector<int> &ans, int n, int count){
        //This is ok:
        if(count == 0){
            //Find the log:
            ans.push_back(log2(n-count));
            count--;
            return ans;
        }
        //This is first statement?
        if(n-count == 0){
            ans.push_back(0);
            count--;
            recursionBits(ans, n, count);
        }
        else if(n-count == 1){
            ans.push_back(1);
            count--;
            recursionBits(ans, n, count);
        }
        else{
            if(log2(n-count) == floor(log2(n-count))){
                //If it has no decimal:
                //Find the log:
                ans.push_back(1);
                count--;
                recursionBits(ans,n, count);
            }
            else{
                // Log2(n-count) + 1: gives you the Highest bit.
                ans.push_back(log2(n-count));
                count--;
                recursionBits(ans,n, count);
            }
        }
        return ans;
    }
};