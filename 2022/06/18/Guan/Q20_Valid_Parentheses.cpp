/**
 * @file Q20_Valid_Parentheses.cpp
 * @author Guan Li (gcl001@ucsd.edu)
 * @brief 
 * @version 0.1
 * @date 2022-06-18
 * 
 * @copyright Copyright (c) 2022
 * 
 * Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
 *   An input string is valid if:
 *
 *   Open brackets must be closed by the same type of brackets.
 *   Open brackets must be closed in the correct order.
 * 
 * 
 */

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // {([][])}

        //For the purpose of keeping tack of pairs.
        unordered_map<char, char> info;
        // info['('] = ')';
        // info['['] = ']';
        // info['{'] = '}';
        // Maybe i don't need these three;

        info[')'] = '(';
        info[']'] = '[';
        info['}'] = '{';

        //Idea 1: use a stack structure;
        //if i find a open in the stack, i can close it, otherwise false.
        stack<char> load;

        for(int i = 0; i < s.length(); i++){
            
            //if the next char's open happends to be in the load's top. pop it.
            if(load.size() != 0 && load.top() == info[s[i]]){
                load.pop();
            }
            else{
                //load the char into load;
                load.push(s[i]);
            }
            //if there is a close before there is a open, false it;
        }
        
        if(load.size() == 0){
            //if everything is popped:
            return true;
        }
        else{
            return false;
        }
    }
};