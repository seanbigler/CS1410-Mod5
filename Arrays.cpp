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

    // Declare and initialize and Array of 3 members
    int age2[SIZE] = {99, 21, 33};

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
        cout << "Age2 " << i << " is " << age2[i] << endl;
    }


    cout << "Done!" << endl;


    return 0;
}