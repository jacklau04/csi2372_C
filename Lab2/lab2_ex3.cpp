#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
    int firstArray[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int secondArray[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int* ia2element = secondArray;

    if (end(firstArray) - begin(firstArray) == end(secondArray) - begin(secondArray)){
        for (auto element: firstArray){

            if (element != *ia2element)
            {
                cout << "Array do not match" << endl;
                
                return -1;
            }
            ++ia2element;
        }
        cout <<"Array match!" << endl;

        return 0;
    }
    else{
        cout << "Array do not match" << endl;
                
        return -1;
    }
}