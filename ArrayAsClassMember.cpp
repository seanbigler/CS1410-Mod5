// File: ArrayAsClassMember
// Created by Sean Bigler on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
const int MAX = 10;

class Stack
{
private:
    int st[MAX];    // Stack: array of ints
    int top;        // Number on top of stack
public:
    Stack()         // Constructor
    {
        top = -1;
    }
    void push(int var)  // Put member on the stack
    {
        st[++top] = var;    // ++ needs to be before, or it will read from -1 slot in array (increment, then use)
    }
    int pop()           // Take number off the stack
    {
        return st[top--];
    }

};

// Prototypes


// Main Program
int main()
{
    Stack s1;
    s1.push(11);
    s1.push(24);
    cout << " 1 " << s1.pop() << endl;
    cout << " 2 " << s1.pop() << endl;

    s1.push(125);
    s1.push(31);
    s1.push(45);
    s1.push(144);
    cout << " 3 " << s1.pop() << endl;
    cout << " 4 " << s1.pop() << endl;


    return 0;
}

// Function Definitions