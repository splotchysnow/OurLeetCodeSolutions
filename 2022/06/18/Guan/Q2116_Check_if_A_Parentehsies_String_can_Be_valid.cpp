// 2116. Check if a Parentheses String Can Be Valid
// A parentheses string is a non-empty string consisting only of '(' and ')'. It is valid if any of the following conditions is true:

// It is ().
// It can be written as AB (A concatenated with B), where A and B are valid parentheses strings.
// It can be written as (A), where A is a valid parentheses string.
// You are given a parentheses string s and a string locked, both of length n. locked is a binary string consisting only of '0's and '1's. For each index i of locked,

// If locked[i] is '1', you cannot change s[i].
// But if locked[i] is '0', you can change s[i] to either '(' or ')'.
// Return true if you can make s a valid parentheses string. Otherwise, return false.

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>
#include <tuple>

using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        //if the string is even; then it fails automatically.
        if (s.length() % 2 != 0){
            return false;
        }
        //If its backwards first and locked. fails...
        if (s[0] == ')' && locked[0] == '1'){
            return false;
        }
        //use stack: first char is for s second for locked.
        stack<tuple<char,char>> load;
        //For the purpose of keeping tack of pairs.
        unordered_map<char, char> info;
        info[')'] = '(';

        for(int i = 0; i < s.length(); i++){
            
            //if the next char's open happends to be in the load's top. pop it.
            //condition 1: If stack is not empty;
            if(load.size() != 0 && (get<0>(load.top()) == info[s[i]])){
                //More normal case:
                load.pop();
            }
            else if(load.size() != 0 && (get<0>(load.top()) == info[s[i]] && get<1>(load.top()) == locked[i])){
                //Case 1: normal case:
                load.pop();
            }
            else if(load.size() != 0 && (get<1>(load.top()) == locked[i] == '0')){
                //Case 2: If they are both wild card, pop?? TODO: MAY BE WRONG LOGIC
                load.pop();
            }
            else if(load.size() != 0 && ((s[i] == ')' && get<1>(load.top()) == '0'))){
                //Case 3: if second one is a locked ) and first is either ( or wildcard;
                load.pop();
            }
            else{
                //load the char into load;
                load.push({s[i],locked[i]});
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