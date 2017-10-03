#include <iostream>
using namespace std;

// Global, Constants, Classes, Structures
const int SIZE = 3;

// Function Prototype


// Main Program
int main()
{
    // Define an Array of 3 integers
    int age[SIZE];
    // Take input
    for(int i = 0; i < SIZE; i ++)
    {
        cout << "Enter age " << i << ":";
        cin >> age[i];
    }
    cout << endl;

    for(int i = 0; i < SIZE; i ++)
    {
        cout << "Age " << i << " is " << age[i] << endl;
    }

    cout << "Done!" << endl;


    return 0;
}