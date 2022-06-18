#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string theString = to_string(x);
        if(x < 0){
            return false;
        }
        // else if(theString.length()%2 == 0){
        //     //if the string have a size even..


        // }
        else{
            string readForward = "";
            string readBackward = "";
            int size_ = theString.length();
            for(int i = 0; i < size_; i++){
                //store them both front and back;
                readForward += theString[i];
                readBackward += theString[size_-i-1];
                //if they are not the same, abort:
                if(readForward != readBackward){
                    // cout << "Forward: " << readForward;
                    // cout << "Backward: " << readBackward;
                    return false;
                }
            }
            return true;
        }
    }
};