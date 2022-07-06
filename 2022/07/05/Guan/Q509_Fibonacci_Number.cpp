
#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

class Solution {
public:
    int fib(int n) {

        int c = fibHelper(n);
        return c;
    }

    int fibHelper(int n){
        if (n < 0)
            cout << "bad input";
        else if(n == 0)
            return 0;
        else if (n==1 || n ==2)
            return 1;
        else
            return fibHelper(n-1) + fibHelper(n-2);
    }
};