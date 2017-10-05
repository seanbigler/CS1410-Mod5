// File: String1.cpp
// Created by Sean Bigler on 10/5/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
#include <string>   //C++ string class

using namespace std;
// Constants, Structs, Classes


// Prototypes


// Main Program
int main()
{
    string s1;  // Define a string
    string s2 = "Waldo Weber";  // Define and initialize string
    string s3("Wally Wildcat"); // Define and initialize string (same as previous)

    s1 = s3;        // Assignment
    cout << "S1: " << s1 << endl;

    s1 += s2;       // Concatenation
    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << "S3: " << s3 << endl;

    // Swap values
    s1.swap(s2);
    cout << "S1: " << s1 << endl;
    cout << "S2: " << s2 << endl;
    cout << "S3: " << s3 << endl;


    return 0;
}

// Function Definitions