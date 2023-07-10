#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *stack;
    int index;
    int size;
public:
    
    Stack(int capacity) {
        stack = new int[capacity];
        index = -1;
        size = capacity;
    }

    void push(int num) {
        if(index< (size-1)) stack[++index] = num;
    }

    int pop() {
        if(index==-1) return -1;

        int ele =  stack[index];
        index--;
        return ele;
    }
    
    int top() {
        if(index==-1) return -1;

        return stack[index];
    }
    
    int isEmpty() {
        if(index==-1) return 1;

        return 0;
    }
    
    int isFull() {
        if(index == size-1) return 1;

        return 0;
    }
    
};
