class MinStack:

    def __init__(self):
        # Construct two stack;
        self.stack = []
        # Everytime the main stack gets pushed or poped, min stack do the same thing.
        self.minStack = []
        

    def push(self, val: int) -> None:
        self.stack.append(val)
        if(len(self.minStack)!=0):
            #Append into the stack the minimum of either the stack or the val.
            self.minStack.append(min(val,self.minStack[-1]))
        else:
            #Since the stack is empty.
            self.minStack.append(val)

    def pop(self) -> None:
        #Pop them both at the same time.
        self.stack.pop()
        self.minStack.pop()

    def top(self) -> int:
        #return the very last value on the stack.
        return self.stack[-1]

    def getMin(self) -> int:
        return self.minStack[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()