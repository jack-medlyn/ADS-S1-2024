#include <iostream>
#include <map>

using namespace std;

#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

class EfficientTruckloads{
    public:
    EfficientTruckloads(){};
    int numTrucks(int numCrates, int loadSize, map<int, int> crates);
};

#endif