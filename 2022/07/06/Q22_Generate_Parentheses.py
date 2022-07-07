# Observations: The biggest braket must be on the outside.
# The middle bracket can have different things but the begining must be open.
'''
Idea: Brute Force Approach:

If n = 3;

first printhesis must be (             )

Close parentehsis must be less than open prentehsis.
-> n Open bracket and n closed brackets.
-> can only add a new prenthesis only if close count < open count.

'''


from unittest import registerResult


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        # Returns a list of strings.
        stack = []
        result = []

        def backtrack(openN,closedN):
            if(openN == closedN == n):
                result.append("".join(stack))
                return
            if openN < n:
                stack.append("(")
                backtrack(openN+1, closedN)
                stack.pop()
            if closedN < openN:
                stack.append(")")
                backtrack(openN,closedN+1)
                stack.pop()

        backtrack(0,0)
        return result


