#include "config.h"
#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

void readConfig(GarageSystem& sys, const char* filename) {
    FILE* f = fopen(filename, "r");

    if (!f) {
        cout << "Error opening config file\n";
        return;
    }

    // Read data
    fscanf(f, "%d %d", &sys.m, &sys.n);
    fscanf(f, "%s", sys.occupancyFile);
    fscanf(f, "%s", sys.customersFile);
    fscanf(f, "%s", sys.interactionsFile);
    // DEBUG PRINTS (important)
    cout << "Config loaded:\n";
    cout << "m = " << sys.m << ", n = " << sys.n << endl;
    cout << "Occupancy file: " << sys.occupancyFile << endl;
    cout << "Customers file: " << sys.customersFile << endl;

    fclose(f);
}
