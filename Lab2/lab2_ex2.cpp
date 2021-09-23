#include <iostream>
#include <iterator>

using std::cout;
using std::endl;
using std::begin;
using std::end;

int main(){
    int arrayOfInts[10];

    int* currentElement = begin(arrayOfInts);
    int* lastElement = end(arrayOfInts);

    while (currentElement != lastElement){
        *currentElement = 0;
        ++currentElement;
    }

    for (auto element: arrayOfInts){
        cout << element << " ";
    }
    cout << endl;

    return 0;

}