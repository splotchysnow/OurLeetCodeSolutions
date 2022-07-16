'''
    The current plan is take any letter already showed up and store them in a list.
    Whenever there is a repeat of characters. the counter will reset, otherwise keep increasing.

    For runtime purposes maybe store all bits first before starting so then there would only be lookup time.
'''

class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # Declare a set.
        recorder = set()
        rec_size = len(recorder)
        counter = 0
        big_count = 0

        for i in s:
            recorder.add(i)
            # print(rec_size, len(recorder))
            if(rec_size == len(recorder)):
                big_count = max(big_count,counter)
                #Recount from 1 since we start from that position.
                counter = 1
            else:
                counter+=1
                big_count = max(big_count,counter)
                rec_size = len(recorder)
        return big_count

def main():
    a = Solution()
    b = 0
    b = a.lengthOfLongestSubstring("abcabcbb")
    print("Test1", b == 3, b)
    b = a.lengthOfLongestSubstring("bbbbbb")
    print("Test2", b == 1,a.lengthOfLongestSubstring("bbbbbb"))
    b = a.lengthOfLongestSubstring("pwwkew")
    print("Test3", b== 3, b)
    b = a.lengthOfLongestSubstring("c") 
    print("Test4", b== 1, b)    
    b = a.lengthOfLongestSubstring("dvdf") 
    print("Test5", b== 3, b)    
    
if __name__ == "__main__":
    main()