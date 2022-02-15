def wordPattern(pattern: str, s: str) -> bool:
    # words = s.split()
    # p = pattern.split()
    # wordDict = {}    #
    # # Assigning different value to dict: pattern is the key and s string is the value.
    # for index in range(len(s)):
    #     if index not in wordDict:
    #         wordDict[p[index]] = words[index]
    # print(wordDict)

    words = s.split(" ")

    # Bijection
    w_to_p = {}
    p_to_w = {}

    # First Check
    if (len(words) != len(pattern)):
        return False

    for i in range(len(words)):
        word = words[i]
        p = pattern[i]

        # bijection check. If they are not checked together
        if word in w_to_p and w_to_p[word] != p:
            return False
        if p in p_to_w and p_to_w[p] != word:
            return False

        # ASSIGN
        w_to_p[word] = p
        p_to_w[p] = word

    return True


s = "Hello World Hello World"
pattern = "acad";

print(wordPattern(pattern, s))
