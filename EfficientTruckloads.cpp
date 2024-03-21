#include <iostream>
#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize, map<int, int> crates){
    if (numCrates <= loadSize){
        return 1;
    } else if (crates.find(numCrates) != crates.end()){
        return crates[numCrates];
    } else {
        int leftPile = numCrates / 2;
        int rightPile = numCrates - leftPile;
        return numTrucks(leftPile, loadSize, crates) + numTrucks(rightPile, loadSize, crates);
    }
}