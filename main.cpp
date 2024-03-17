#include <iostream>
#include "Truckloads.h"
#include "Reverser.h"
using namespace std;

int getLastDigit(int num) {
    return num % 10;
}

int main(){
    Truckloads trucks;
    Reverser r;
//    cout << trucks.numTrucks(1024, 5) << endl;
    cout << r.reverseDigit(3497) << endl;
    return 0;
}