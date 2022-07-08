// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        char prev = '!';
        for(int i=0; i<200; i++){
            for(int j=0; j<strs.size(); j++){
                if (strs[j].length()<i+1){
                    return result;
                }
                if (strs[j][i]!=strs[0][i]){
                    return result;
                }
            }
            result+=strs[0][i];
        }
        return result;
    }
};