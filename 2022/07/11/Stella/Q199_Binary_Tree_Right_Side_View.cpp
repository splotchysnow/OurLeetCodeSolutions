#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

#include "TreeNode.h"

using namespace std;

// Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> helper(TreeNode* curr, vector<int> sol, int level){
        if (curr==nullptr){
            return sol;
        }else{
             //cout<<curr->val<<" "<<level<<" "<<sol.size()<<endl;
        }
        if(level>sol.size()){
            //cout<<"add"<<" ";
            sol.push_back(curr->val);
            // for(int k=0; k<sol.size(); k++){
            //     cout<<sol[k]<<" ";
            // }
            // cout<<endl;
        }

        sol =  helper(curr->right, sol, level+1);
        sol =  helper(curr->left, sol, level+1);
        return sol;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        TreeNode* curr = root;
        vector<int> sol;
        if(root==nullptr) return sol;
        
        return helper(curr, sol, 1);
    }
};