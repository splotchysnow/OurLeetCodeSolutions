// An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

// Given an integer n, return the nth ugly number.

class Solution {
public:
     bool isUgly(int n) {
        if (n <= 0) return false;
        vector<int> uglyList = {2,3,5};
        for(int i = 0; i < uglyList.size(); i++){
            while(n % uglyList[i] == 0){
                n /= uglyList[i];
            }
            if (n == 1) return true;
        }
        return false;
    }
    int nthUglyNumber(int n) {
        int i = 0;
        while(true){
            i++;
            if(isUgly(i)) n--;
            if(n==0) return i;
        }
    }    
};