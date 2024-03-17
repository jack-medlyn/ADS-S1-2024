#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    if (value == 0) {
        return 0;
    }

    int digit = value % 10;
    value /= 10;

    return reverseDigit(value) * 10 + digit;
}

string Reverser::reverseString(string characters){

}