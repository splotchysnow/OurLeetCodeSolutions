// Given a string s, return the longest palindromic substring in s.

 

// Example 1:

// Input: s = "babad"
// Output: "bab"
// Explanation: "aba" is also a valid answer.

0 -2 3
0 min 0
-2 0 -2 min -2



//notCompleted

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int ms = 0;
        int me = -1;
        int end = 0;
        bool cont = true;
        for(int i = 0; i <= s.length()-1; i++){
            start = i;
            end = i;
            while(cont){
                if(start>=0 && end<=s.length()-1){
                    //cout<<s[start]<<s[end]<<" ";
                    if (s[start]!=s[end]){
                        cont = false;
                    }else{
                        if((end-start)>=(me-ms)){
                            ms = start;
                            me = end;
                        }
                    }
                }else{
                    cont = false;
                }
                start--;
                end++;
            }
            cont = true;
            while(cont){
                if(start>=0 && end<=s.length()-1){
                    cout<<s[start]<<s[end-1]<<" ";
                    if (s[start]!=s[end-1]){
                        cont = false;
                    }else{
                        if((end-1-start)>=(me-ms)){
                            ms = start;
                            me = end-1;
                        }
                    }
                }else{
                    cont = false;
                }
                start--;
                end++;
            }
            cont = true;
        }
        return s.substr(ms,me-ms+1);
    }
};