// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        while (n<0){
            result/=x;
            n++;
        }
        while(n>0){
            result*=x;
            n--;
        }
        return result;
    }
};