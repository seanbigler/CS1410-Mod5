#include <iostream>
using namespace std;

// Global, Constants, Classes, Structures
const int SIZE = 3;

// Function Prototype
    // Arrays are passed by reference
void AgeInput(int iage[SIZE]);
    // void AgeInput(int age[]);    Size is not required
void DisplayAge(int iage[SIZE]);

// Main Program
int main()
{
    // Define an Array of 3 integers
    int age[SIZE];

    AgeInput(age);
    DisplayAge(age);

    cout << "Done!" << endl;

    return 0;
}

// Function Definitions
void AgeInput(int iage[SIZE])
{
    // Take input
    for(int i = 0; i < SIZE; i ++)
    {
        cout << "Enter age " << i << ":";
        cin >> iage[i];
    }
    cout << endl;
    return;
}

void DisplayAge(int iage[SIZE])
{
    for(int i = 0; i < SIZE; i ++)
    {
        cout << "Age " << i << " is " << iage[i] << endl;
    }
}
