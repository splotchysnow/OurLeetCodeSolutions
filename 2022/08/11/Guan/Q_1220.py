#c++ having issue with signs so I use python instead.

class Solution:
    def countVowelPermutation(self, n: int) -> int:
        if (n == 1):
            return 5
        
        mod = (10**9) + 7
        
        old_int = [1,1,1,1,1]
        new_int = [0,0,0,0,0]
        ans = 0
        
        for i in range(1,n):
            new_int[0] = old_int[1] + old_int[2] + old_int[4]
            new_int[1] = old_int[0] + old_int[2]
            new_int[2] = old_int[1] + old_int[3]
            new_int[3] = old_int[2]
            new_int[4] = old_int[2] + old_int[3]
            
            #copy the int after use. update it.
            old_int = new_int.copy()
            
        return sum(new_int) % mod