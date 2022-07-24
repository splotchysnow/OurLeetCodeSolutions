from re import X


class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        """
        Write a function to find the longest common prefix string amongst an array of strings.
        If there is no common prefix, return an empty string.

        How to find the common prefix.
        We look thorough every single word and we store that single char as i
        if any of the char is not i then we stop looking, but if loop completely finishes then we push it into
        our answer and then throw it out.
        """

        x = ""
        ans = ""
        min_size = min([len(x) for x in strs])
        # For every letter of the word:
        for i in range(min_size):
            # For each word in the lists:
            x = strs[0][i]
            for j in range(len(strs)):
                if strs[j][i] != x:
                    break
            ans += x
        return ans

        # x = ""
        # ans = ""
        # for word in strs:
        #     for char in word:
        #         if char != x:
        #             # stop the loop.
        #             break
        #     #after a whole loop of cars in a single word.
        #     ans+=x

        #---------------------------------------------------------------------------------

        # x = ""
        # ans = ""
        # counter = 0

        # # Get the minimum size of the lists of words. avoid indexError.
        # min_size = min([len(x) for x in strs])

        # # loop through every word in strs lists;
        # for word in strs:
        #     # Loop through the word throught the minimum letter size to avoid index error.
        #     for i in range(min_size):
        #         # set the x as the first word's ith index char.
        #         x = strs[0][i]
        #         # Check through every single word to see if the prefix excists.
        #         if word[i] != x:
        #             break
        #         # count an sucessful hit
        #         counter += 1
        #         # if successful hit went through every word, add the word.
        #         if(counter == len(strs)):
        #             ans += x
        # # REturn the ans at the very end.
        # return ans

        # ------------------------------------------------------------------

        # #For every word: i represents every word.
        # for i in range(len(strs)):
        #     # for every letter of each word.
        #     for j in range(len()):
        #         letter = i[j]
        