#include <iostream>
#include "display.h"

int main(int argc, char* argv[]){

    if (argc != 3){
        std::cerr << "The program takes two integer as input" << std::endl;

        return 1;
    }

    int v1, v2;
    v1 = atoi(argv[1]);
    v2 = atoi(argv[2]);

    int lower, upper;
    if (v1 <= v2){
        lower = v1;
        upper = v2;
    }
    else{
        lower = v2;
        upper = v1;
    }

    display(lower, upper);

    return 0;
}
