#include <iostream>
#include <string>
#include <map>
#include <unordered_map>

#include <stack>

using namespace std;
//Given two binary strings a and b, return their sum as a binary string.


class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int carry=0;
        for(int i=0; i<max(a.length(),b.length()); i++){
            while(a.length()>b.length()){
                b = "0"+b;
            }
            while(a.length()<b.length()){
                a = "0"+a;
            }
            if(carry==0 && (a[a.length()-1-i]!=(b[b.length()-1-i]))||carry==1 && (a[a.length()-1-i]==(b[b.length()-1-i]))){
                result = "1" + result;
            }else{
                result = "0" + result;
            }
            if((carry==1&&a[a.length()-1-i]=='1')||(carry==1&&b[b.length()-1-i]=='1')||(a[a.length()-1-i]=='1'&&b[b.length()-1-i]=='1')){
                carry=1;
            }else{
                carry=0;
            }
        }
        if(carry==1){
            result = "1"+result;
        }
        return result;
    }
};

