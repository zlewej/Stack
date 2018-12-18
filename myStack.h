/*
 Julius Garma
 Hank Stalica
 HW 2
 Stack
 */

#ifndef HW_2_Stack_myStack_h
#define HW_2_Stack_myStack_h

#include<iostream>

class myStack
{
    private:
        int* list;
        int top;
        int max;
    
    public:
        myStack(int m);
        ~myStack();
        int push(int a);
        int pop();
        int peek(int &a);
};

myStack::myStack(int m)
{
    max = m;
    list = new int[max];
    top = -1;
}

myStack::~myStack()
{
    delete [] list;
}

// O(1) operation
int myStack::push(int a)
{
    // stack is full when (top = max - 1)
    if(top < (max - 1))
    {
        top = top + 1;
        list[top] =  a;
        return 0;
    }
    else{
        return -1;
    }
}

// O(1) operation
int myStack::pop()
{
    // stack is empty when (top = -1)
    if(top > -1)
    {
        top = top - 1;
        return 0;
    }
    else{
        return -1;
    }
}

// O(1) operation
int myStack::peek(int &a)
{
    if(top > -1)
    {
        return list[a];
    }
    else{
        return -1;
    }
}

#endif
