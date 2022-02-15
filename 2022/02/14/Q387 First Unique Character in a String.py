def firstUniqChar(s: str) -> int:
    """
    Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.
    make a dictionary that contains: key -> the character not repeated yet. || Value -> the index it belongs to.
        if character is never found before. add index and key to character;
        if character is found before. remove value and key.
        return smallest value in dictionary;
    """

    sBook = {}

    for index in range(len(s)):
        if s[index] not in sBook:
            sBook[s[index]] = index
        else:
            sBook[s[index]] = -1  # make this unrealistic Answer

    for s in list(sBook):
        if sBook[s] == -1:
            sBook.pop(s);  # Pop them

    if len(sBook) == 0:
        return -1

    return min(sBook.values())


s = "aadadaad"
print(firstUniqChar(s))

# Proud of myself!
