// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {  
        //store the previous index of char
        unordered_map<char, int> charIndex;   
        int maxLength = 0;
        int start = 0; //storing start index of subarray
        for(int i = 0; i<s.length(); i++){
            if(!charIndex.count(s[i])||charIndex[s[i]]<start){
               charIndex[s[i]] = i;
               maxLength = max(maxLength,i-start+1);
            }else{
                start=max(start,charIndex[s[i]]+1);
                maxLength = max(maxLength,i-start);
                charIndex[s[i]] = i;
            }
        }
        return maxLength;
    }
};