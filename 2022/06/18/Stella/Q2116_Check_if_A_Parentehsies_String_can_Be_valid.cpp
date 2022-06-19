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

using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        int shifts = 0;
        int stack = 0;
        
        if (s.length()%2 != 0)
             return false;

        for(int i=0; i<s.length(); i++){    
            if(stack==0){
                if(stack==0 && s[i]==')' && locked[i]=='1'){
                    if(shifts!=0){
                        shifts--;
                        stack++;
                    }else{
                        return false;
                    }
                }else{ 
                    stack++;
                }
            }else if(locked[i]=='0'){
                stack--;
                shifts++;
            }else if(s[i]==')'){
                stack--;
            }else{
                stack++;
            }
        }
        if(!stack) return true;
        else return false;
        
        
    }
};