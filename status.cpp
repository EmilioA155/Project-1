#include "status.h"
#include <cstdio>

int availableSpaces(const GarageSystem& sys) {
    int count = 0;
    for (int g = 0; g < sys.m; g++)
        for (int s = 0; s < sys.n; s++)
            if (sys.garages[g][s] == -1)
                count++;
    return count;
}

void outputLot(const GarageSystem& sys, const char* filename) {
    FILE* f = fopen(filename, "w");
    if (!f) return;

    for (int g = 0; g < sys.m; g++) {
        for (int s = 0; s < sys.n; s++) {
            fprintf(f, "%d,", sys.garages[g][s]);
        }
        fprintf(f, "\n");
    }

    fclose(f);
}
