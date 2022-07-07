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
from ast import List


class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        # Returns a list of strings.
        stack = []
        result = []

        """
        3 Cases:
            1. if open Brackets have the same amount as the closed brackets. append the stack into result.
            2. if open is less than n, keep opening. append ( into stack and recursively keep going. POP ONE OUT EACH TIME
            3. closed bracket amount is less than the open bracket amount. AFTER 2 where the extra bracket senario have happend.
                work with the closed brackets. Then pop that stack.
        """
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
        # Call function with initialize bracket to 0, and 0.
        backtrack(0,0)
        return result


