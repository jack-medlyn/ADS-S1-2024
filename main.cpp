#include <iostream>
#include "Truckloads.h"
using namespace std;

int getLastDigit(int num) {
    return num % 10;
}

int main(){
    Truckloads trucks;
    cout << trucks.numTrucks(1024, 5) << endl;
    cout << getLastDigit(3497) << endl;
    return 0;
}