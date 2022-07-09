
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

//         # How to check for palindrome:
//         # Check from center and go from left to right one by one and compare it with if statements.
        //Edge Case: CHECK FOR EVEN CASES EDGE CASE:
        
        
        //The varaible to keep checking if its a palanedrome and it also represent the size.
        // Keep track of odd palindrome.
class Solution {
public:
    string longestPalindrome(string s) {
        int j;
        // Keep track of even palindrome.
        int zl = 0;
        int zr = 0;
        string ans;
        
        //ODD LENGTH:
        // A loop that goes through the whole stirng from start to finish.
        for(int i = 0; i < s.length(); i++){
            int jl = i;
            int jr = i;
            while(jl >= 0 && jr<s.length() && s[jl] == s[jr]){
                if(ans.length() < jr-jl+1){
                   ans = s.substr(jl,jr-jl+1);
                }
                //UPdate them;
                jl--;
                jr++;
            }
            //EVEN CASE:
            zl = i;
            zr = i+1;
            while(zl >= 0 && zr<s.length() && s[zl] == s[zr]){
                
                if(ans.length() < zr-zl+1){
                   ans = s.substr(zl,zr-zl+1);
                }
                //UPdate them;
                zl--;
                zr++;
            }
        }
     return ans;       
    }
};

//DISCARDED PILE OF USELESS JUNK CODE FROM BEFORE.
            // cout << "HWORK";
            //Check for the character's left and right side.            
            
            // j = 0;
            // while(i-j >= 0 && i+j < s.length() && s[i-j] == s[i+j]){
            //     //Save from s[i-j] to s[i+j]
            //     cout << "HIT";
            //     if(ans.length() <= 2*j+1){
            //        cout << "HIT";
            //        ans = s.substr(i-j,i+j+1);
            //     }
            //     j++;
            // }
            //ODD CASE