#include <iostream>
#include "EfficientTruckloads.h"

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    } else if (crates.find({numCrates, loadSize}) != crates.end()){
        return crates[{numCrates, loadSize}];
    } else {
        int leftPile = numCrates / 2;
        int rightPile = numCrates - leftPile;

        int result = numTrucks(leftPile, loadSize) + numTrucks(rightPile, loadSize);
        crates[{numCrates, loadSize}] = result;
        return result;
    }
}