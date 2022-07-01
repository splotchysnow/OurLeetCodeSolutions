#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;


class Solution {
public:
    bool isUgly(int n) {

        if (n <= 0){
            return false;
        }
        
        //Create a list of intergers:
        vector<int> uglyList = {2,3,5};
        for(int i = 0; i < uglyList.size(); i++){
            while(n % uglyList[i] == 0){
                //If it can be evenly divided.
                n = n / uglyList[i];
            }
            cout << n;
        }
        return n == 1;
    }
};