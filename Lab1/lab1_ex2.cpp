#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int number;
    cout << "Enter a positive number" << std::endl;
    cin >> number;

    while (number != 0){

        if (number < 0){
            cout << "Please give a positive number" << std::endl;
        }
        else{
            cout << "its square root is : " << sqrt(number) << std::endl;
        
        }
        cin >> number;
    }
    cout << "Give a positive number : 0" << std::endl;
    return 0;
}