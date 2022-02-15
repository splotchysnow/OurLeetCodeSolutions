class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:

        magazineCount = {}  # Create an empty dictionary
        for char in magazine:
            if (char in magazineCount):
                magazineCount[char] += 1
            else:
                magazineCount[char] = 1

        for char in ransomNote:
            if char not in magazineCount:
                return False
            magazineCount[char] -= 1
            if magazineCount[char] < 0:
                return False

        return True

    '''

        Iterate over ransomNote each character is in Magazine

        Create a dictionary -> Key: char, value: count how many time it appears in the string.
    Iterate over chars in Magazine:
        if char in dict:
            update count, +1
        else:
            add char to dict as new key, set value = 1
    Iterate over chars in ransomNote:
        if char not in dict:
            return false
        dict[char] -= 1
        if char in dict's value < 0:
            return false

    return true
        '''