// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

// An input string is valid if:

// Open brackets must be closed by the same type of brackets.
// Open brackets must be closed in the correct order.
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {  
        stack<char> par;

        if (s.length()%2 != 0)
            return false;
        map<char,char> map;
        map['}']  = '{';
        map[')']  = '(';
        map[']']  = '[';
        
        for(int i=0; i<s.length(); i++){    
            if(par.size()!=0){
                if(par.top()==map[s[i]]){
                    par.pop();
                }else{
                    par.push(s[i]);
                }
            }
            else{
                par.push(s[i]);
            }
        }
        if(par.size()==0) return true;
        else return false;
    }
};