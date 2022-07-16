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
    # print("Test1", a.lengthOfLongestSubstring("abcabcbb") == 3,a.lengthOfLongestSubstring("abcabcbb"))
    # print("Test2", a.lengthOfLongestSubstring("bbbbbb") == 1,a.lengthOfLongestSubstring("bbbbbb"))
    # print("Test3", a.lengthOfLongestSubstring("pwwkew") == 3, a.lengthOfLongestSubstring("pwwkew"))
    print("Test3", a.lengthOfLongestSubstring("c") == 1, a.lengthOfLongestSubstring("c"))    

if __name__ == "__main__":
    main()