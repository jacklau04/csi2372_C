#include <iostream>

void display(int lower, int upper){

    int newline_ctr = 0;

    for (int val = lower; val != upper; ++val){
        std::cout << val << " ";
        ++newline_ctr;

        if (newline_ctr == 10){
            std::cout << std::endl;
            newline_ctr = 0;
        }
    }
    std::cout << std::endl;
}