#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>
using namespace std;

/**
 * Definitions:
 * dp[n][a] = dp[n-1][e] + dp[n-1][i] + dp[n-1][u]
 * dp[n][e] = dp[n-1][a] + dp[n-1][i]
 * dp[n][i] = dp[n-1][e] + dp[n-1][o]
 * dp[n][o] = dp[n-1][i]
 * dp[n][u] = dp[n-1][i] + dp[n-1][o]
 * 
 * a = 0
 * e = 1
 * i = 2
 * o = 3
 * u = 4
 */


class Solution {
public:
    int countVowelPermutation(int n) {

        //Create two array that contains 5 elements.
        int oldList[5] = {1,1,1,1,1};
        int newList[5] = {0,0,0,0,0};

        for(int i = 0; i < n; i++){
            //Change base on newList
            newList[0] = oldList[1] + oldList[2] + oldList[4];
            newList[1] = oldList[0] + oldList[2];
            newList[2] = oldList[1] + oldList[3];
            newList[3] = oldList[2];
            newList[4] = oldList[2] + oldList[3];

            // //update oldList as newList:
            // copy(oldList, newList);

            for(int i = 0; i < 5; i++){
                oldList[i] = newList[i];
            }
        }
        return newList[0] + newList[1] + newList[2] + newList[3] + newList[4];
    }
};

