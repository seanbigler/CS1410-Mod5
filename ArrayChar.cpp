// File: ArrayChar
// Created by Sean Bigler on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;
// Constants, Structs, Classes
const int MAX = 80;

// Prototypes


// Main Program
int main()
{
    char st[MAX];
    //cout << "Enter your first name: ";
    //cin >> st;
    //cout << "Hello " << st << endl;

    // Let compiler calculate space (String Constants
    char hi[] = "Hello Weber State University!";
    cout << hi << endl;

    // To support embedded blanks (spaces), use cin.get() function
    cout << "Enter your full name: ";
    cin.get(st, MAX);
    cout << st << endl;


    return 0;
}

// Function Definitions