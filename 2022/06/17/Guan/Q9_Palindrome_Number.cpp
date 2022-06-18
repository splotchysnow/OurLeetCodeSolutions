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
        if(theString.length() == 0 || theString.length() == 1){
            //Trivial Case:
            return true;
        }
        else{
            int middle = theString.length()/2;
            //if the string have a size even..
            string firstHalf = theString.substr(0,middle);
            string secondHalf;
            if(theString.length()%2 == 0){
                secondHalf = theString.substr(middle,middle);
            }
            else{
                secondHalf = theString.substr(middle+1,middle);
            }
            // cout << "Forward: " << firstHalf << " ";
            // cout << "Backward: " << secondHalf << " ";
            
            //Reverse the second half:
            reverse(secondHalf.begin(), secondHalf.end());

            if(firstHalf != secondHalf){
                return false;
            }
            else{
                return true;
            }
        }
        // else{
        //     string readForward = "";
        //     string readBackward = "";
        //     int size_ = theString.length();
        //     for(int i = 0; i < size_; i++){
        //         //store them both front and back;
        //         readForward += theString[i];
        //         readBackward += theString[size_-i-1];
        //         //if they are not the same, abort:
        //         if(readForward != readBackward){
        //             // cout << "Forward: " << readForward;
        //             // cout << "Backward: " << readBackward;
        //             return false;
        //         }
        //     }
        //     return true;
        // }
    }
};