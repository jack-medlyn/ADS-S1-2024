#include <iostream>
#include "Reverser.h"

int Reverser::reverseDigit(int value){
    if (value < 0){
        return -1;
    }
    int reversal = value;
    int tens = 1;
    while (reversal >= 10) {
        reversal /= 10;
        tens++;
    }
    value /=10;
    value += (reversal * tens);
    return reverseDigit(value);
}

string Reverser::reverseString(string characters){

}