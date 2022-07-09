// Given a string s, return the longest palindromic substring in s.


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
        }
        
        for(int i = 0.5; i <= s.length()-1; i++){
            start = i-0.5;
            end = i+0.5;
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
        }
        return s.substr(ms,me-ms+1);
    }
};