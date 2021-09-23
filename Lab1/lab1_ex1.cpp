#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

// Write a program that asks the user to enter a series of numbers, ending
// with a letter of the alphabet. Print a message indicating the number of those that are
// negative.

int main()
{
    cout << "Enter a series of numbers" << std::endl;

    int inputnumber;
    int counter = 0;

    while (cin >> inputnumber){

        if (inputnumber > 0){
            counter++;
        }        
    }

    cout << counter << " numbers were positive" << std::endl;
    return 0;
}