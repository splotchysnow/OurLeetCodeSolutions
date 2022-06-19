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
        stack<char> par;
        
        if (s.length()%2 != 0)
             return false;

        for(int i=0; i<s.length(); i++){    
            if(par.size()==0){
                if(s[i]==')' && locked[i]=='1'){
                    return false;
                }else{ 
                    par.push('(');
                }
            }else if(locked[i]=='0'||s[i]==')'){
                string s = 
                par.pop();
            }else{
                par.push('(');
            }
            cout<<par.size();
        }
        if(par.size()==0) return true;
        else return false;
        
        
    }
};