#ifndef HASHT_H
#define HASHT_H

#include "stateData.h"
#include <vector>

const int HTSize = 101; // Size of the hash table

int hashFunc(string name); // Hash function

class hashT {
private:
    vector<stateData> table;
    vector<bool> isOccupied;

public:
    hashT(); // Constructor

    void insertState(const stateData &state);
    int searchState(const string &name, stateData &state);
    void removeState(const string &name);
    void printTable();
};

#endif
