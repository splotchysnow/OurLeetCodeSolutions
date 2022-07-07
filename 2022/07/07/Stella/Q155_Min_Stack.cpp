// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
// You must implement a solution with O(1) time complexity for each function.

#include <stack>

class MinStack {
public:
    
    stack<int> num;
    stack<int> min;
    
    MinStack() {
        
    }
    
    void push(int val) {
        num.push(val);
        if(min.size()==0){
            min.push(val);
        }
        else if(val<=min.top()){
            min.push(val);
        }
    }
    
    void pop() {
        if(num.top()==min.top()){
            min.pop();
        }
        num.pop();
    }
    
    int top() {
        return num.top();
    }
    
    int getMin() {
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */