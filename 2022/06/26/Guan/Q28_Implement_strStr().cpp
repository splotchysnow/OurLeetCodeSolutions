/**
 * @file Q28_Implement_strStr().cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-06-26
 * 
 * @copyright Copyright (c) 2022
 * 
 */
// Implement strStr().

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

// Clarification:

// What should we return when needle is an empty string? This is a great question to ask during an interview.

// For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().


// MEdium difficulty.
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, 
//and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

//Basically.
//3 item, No duplicate and sum = 0

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <set>


using namespace std;



class Solution {
public:
    int strStr(string haystack, string needle) {
        
        //Initialize case where needle is empty: Edge Cases:
        if(needle.length() == 0){
            return 0;
        }
        if(haystack.length() == 0){
            return -1;
        }
        //find the first letter of the thing.  
        int index = -1;
        //Loop through the string first with indexes:
        for(int i = 0; i < haystack.length(); i++){
            //i represents the indexes.
            //If we find the first occurences of the first letter.
            //Go into a forloop and check the rest.
            //Otherwise reset index variable.
            

            
            
            if(haystack[i] == needle[0]){
                //let index = i;
                index = i;
                //Go into a forloop and check the rest:
                for(int i = 0; i < needle.length(); i++){
                    //------- Debug: ---------
                    cout << index << endl;
                    if(haystack[index+i] != needle[i]){
                        index = -1;
                        break;
                    }
                }
                if(index != -1){
                    return index;
                }
            }
        }
        return index;
        
    }
};