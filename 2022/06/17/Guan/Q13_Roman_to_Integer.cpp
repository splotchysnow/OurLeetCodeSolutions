#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

using namespace std;

class Q13_Roman_to_Integer {
public:

    int romanToInt(string s) {
        
        //Create a unordered map of the roman numerals as key and values.
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        //The roman characters with their corresponding value is inserted.
        //We have the string s, read the string backwards to get the value.
        // Sum is to keep track of the roman sum;
        int sum = 0;
        for (int i = s.length() - 1; i >= 0; i--){
            //The character reading backwards: s[i];
            //If its not the last index: (To avoid bad access)
            // int curr = roman[s[i]];
            if(i > 0 && (roman[s[i]]>(roman[s[i-1]]))){
                sum += (roman[s[i]] - (roman[s[i-1]]));
                // cout << (curr - (roman[s[i-1]])) << " ";
                i--;
            }
            else{
                sum += roman[s[i]];
                // cout << curr << " ";
            }
        }
        return sum;
    }
};