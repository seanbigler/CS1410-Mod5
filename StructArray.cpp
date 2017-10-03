// File: StructArray
// Created by Sean Bigler on 10/3/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;
// Constants, Structs, Classes
struct Part
{
    int modelNum;
    int partNum;
    float cost;
};

const int SIZE = 4;

// Prototypes
void PartInput(Part pi[SIZE]);
void DisplayPart(Part pi[SIZE]);

// Main Program
int main()
{
    Part p[SIZE];
    PartInput(p);
    DisplayPart(p);

    return 0;
}

// Function Definitions
void PartInput(Part pi[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "For part " << i+1 << endl;
        cout << "Enter the model number: ";
        cin >> pi[i].modelNum;
        cout << "Enter the part number: ";
        cin >> pi[i].partNum;
        cout << "Enter the cost: ";
        cin >> pi[i].cost;
        cout << endl;
    }
}

void DisplayPart(Part pi[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "For part " << i+1 << endl;
        cout << "Model number: " << pi[i].modelNum << endl;
        cout << "Part number: " << pi[i].partNum << endl;
        cout << "Cost: " << pi[i].cost << endl;
        cout << endl;
    }
}
