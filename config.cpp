#include "config.h"
#include <cstdio>
#include <cstring>

void readConfig(GarageSystem& sys, const char* filename) {
    FILE* f = fopen(filename, "r");
    if (!f) return;

    fscanf(f, "%d %d", &sys.m, &sys.n);
    fscanf(f, "%s", sys.occupancyFile);
    fscanf(f, "%s", sys.customersFile);
    fscanf(f, "%s", sys.interactionsFile);

    fclose(f);
}
